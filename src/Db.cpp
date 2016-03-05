#include <Db.hpp>

DB::DB(string dbpath)
{
	currentDBPath = dbpath;

	//check if folder doesn't there => create
	boost::filesystem::path dir(dbpath);
	if(boost::filesystem::is_directory(dir)) {
		cout << dbpath << " exists" << "\n";
	}
	else
	{
		if(boost::filesystem::create_directory(dir)) {
			cout << dbpath << " created" << "\n";
		}
	}

	rc = mdb_env_create(&env);
	rc = mdb_env_set_mapsize(env, 1099511627776);
	rc = mdb_env_open(env, dbpath.c_str(), 0, 0777);
	rc = mdb_txn_begin(env, NULL, 0, &txn);
	rc = mdb_open(txn, NULL, 0, &dbi);
}

void DB::close()
{
	mdb_cursor_close(cursor);
	mdb_txn_abort(txn);
}

void DB::drop()
{
	boost::filesystem::path dir(currentDBPath);
	if(boost::filesystem::remove_all(dir)) {
		cout << currentDBPath << " removed" << "\n";
	}
}

void DB::startread()
{
	rc = mdb_txn_begin(env, NULL, MDB_RDONLY, &txn);
	rc = mdb_cursor_open(txn, dbi, &cursor);
}

void DB::endread()
{
	mdb_cursor_close(cursor);
	mdb_txn_abort(txn);
}

Data::Datum DB::read()
{
	rc = mdb_cursor_get(cursor, &key, &data, MDB_NEXT);
	int*  xx = reinterpret_cast<int*>(key.mv_data);
	int x = *xx;
	Data::Datum anImage;
	string val = string(static_cast<const char*>(data.mv_data),data.mv_size);
	anImage.ParseFromString(val);
	return anImage;
}

void DB::createDB(vector< pair<string,int> > pairs)
{
	for(int i=0; i<pairs.size(); i++)
	{
		pair<string,int> p = pairs[i];
		Data::Datum anImage;
		string value;

		try { 
			cv::Mat img = cv::imread(p.first.c_str(), CV_LOAD_IMAGE_COLOR);
			cv::Size s = img.size();
			anImage.set_width(s.width);
			anImage.set_height(s.height);
			anImage.set_channel(3);
			anImage.set_label(p.second);
			anImage.set_name(p.first);
			// cout << s.width << " " << s.height <<endl;
			vector<uchar> buf;
			cv::imencode(".JPG", img, buf);
			anImage.set_data(string(reinterpret_cast<char*>(&buf[0]),buf.size()));
			anImage.SerializeToString(&value);
		}
		catch(...) 
		{
			cout << p.first<< endl;
			continue;
		}

		data.mv_size = value.size();
		data.mv_data = reinterpret_cast<void*>(&value[0]);
		key.mv_size = 4;
		key.mv_data = reinterpret_cast<void*>(&i);

		rc = mdb_put(txn, dbi, &key, &data, 0);
		// cout << rc <<endl;
		if(i%10 == 0)
		{
			cout << "processed : "<< i <<endl;
			rc = mdb_txn_commit(txn);
			cout << rc <<endl;
			rc = mdb_txn_begin(env, NULL, 0, &txn);
			cout << rc <<endl;
		}
	}
	rc = mdb_txn_commit(txn);
	cout << rc <<endl;
}


// rc = mdb_cursor_open(txn, dbi, &cursor);
// 	int i=0;
// 	while ((rc = mdb_cursor_get(cursor, &key, &data, MDB_NEXT)) == 0) {
// 		printf("key:%d %p %.*s\n", i,
// 			key.mv_data,  (int) key.mv_size,  (char *) key.mv_data);
// 		printf("data:%d %p %d\n", i++,
// 			data.mv_data,  (int) data.mv_size);
// 		break;
// 	}