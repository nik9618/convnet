#include <Data.hpp>
#include <Datum.hpp>

Data::Data(string dbpath)
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
		rc = mdb_env_create(&env);
		rc = mdb_env_open(env, dbpath.c_str(), 0, 0644);
		if(rc != 0) printf("DBFAIL\n");
		rc = mdb_txn_begin(env, NULL, 0, &txn);
		rc = mdb_open(txn, NULL, 0, &dbi);
	}
}

void Data::close()
{
	mdb_cursor_close(cursor);
	mdb_txn_abort(txn);
}

void Data::drop()
{
	boost::filesystem::path dir(currentDBPath);
	if(boost::filesystem::remove_all(dir)) {
		cout << currentDBPath << " removed" << "\n";
	}
}

void Data::read(int id)
{

}

void Data::createDB(vector< pair<string,int> > pairs)
{
	for(int i=0; i<pairs.size(); i++)
	{
		pair<string,int> p = pairs[i];
		Datum* d = new Datum(p.first, p.second);
		cout << "size : "<< sizeof(*d) << endl;
		data.mv_size = sizeof(d);
		data.mv_data = reinterpret_cast<void*>(&d);
		key.mv_size = sizeof(int);
		key.mv_data = &i;

		rc = mdb_put(txn, dbi, &key, &data, 0);

		if(i%1000 == 999)
		{
			cout << "processed : "<< i <<endl;
		}
	}
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