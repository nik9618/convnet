#include <Data.hpp>

Data::Data(string dbpath)
{
	//check if folder doesn't there => create
	boost::filesystem::path dir(dbpath);
	if(boost::filesystem::create_directory(dir)) {
		cout << dbpath << " created" << "\n";
	}

	rc = mdb_env_create(&env);
	rc = mdb_env_open(env, dbpath.c_str(), 0, 0644);
	if(rc != 0) printf("DBFAIL\n");
	rc = mdb_txn_begin(env, NULL, 0, &txn);
	rc = mdb_open(txn, NULL, 0, &dbi);

	// rc = mdb_cursor_open(txn, dbi, &cursor);
	// int i=0;
	// while ((rc = mdb_cursor_get(cursor, &key, &data, MDB_NEXT)) == 0) {
	// 	printf("key:%d %p %.*s\n", i,
	// 		key.mv_data,  (int) key.mv_size,  (char *) key.mv_data);
	// 	printf("data:%d %p %d\n", i++,
	// 		data.mv_data,  (int) data.mv_size);
	// 	break;
	// }
}

void Data::close()
{
	mdb_cursor_close(cursor);
	mdb_txn_abort(txn);
}


void createDB(std::string* str, int* labels)
{

}