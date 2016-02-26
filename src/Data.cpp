#include <Data.hpp>

Data::Data(std::string dbpath)
{
	int rc;
	MDB_env *env;
	MDB_dbi dbi;
	MDB_val key, data;
	MDB_txn *txn;
	MDB_cursor *cursor;
	char sval[32];

	rc = mdb_env_create(&env);
	rc = mdb_env_open(env, dbpath.c_str(), 0, 0777);
	if(rc != 0) printf("DBFAIL\n");
	rc = mdb_txn_begin(env, NULL, 0, &txn);
	rc = mdb_open(txn, NULL, 0, &dbi);

	rc = mdb_cursor_open(txn, dbi, &cursor);
	int i=0;
	while ((rc = mdb_cursor_get(cursor, &key, &data, MDB_NEXT)) == 0) {
		printf("key:%d %p %.*s\n", i,
			key.mv_data,  (int) key.mv_size,  (char *) key.mv_data);
		printf("data:%d %p %d\n", i++,
			data.mv_data,  (int) data.mv_size);
		break;
	}
	
	mdb_cursor_close(cursor);
	mdb_txn_abort(txn);
}

int Data::open()
{
	return 1;
}


void createDB(std::string* str, int* labels)
{

}