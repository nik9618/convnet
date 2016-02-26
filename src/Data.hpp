#include <stdio.h>
#include <string>
#include <lmdb.h>
#include <iostream>
#include "boost/filesystem/path.hpp"
#include "boost/filesystem.hpp"

using namespace std;

class Data
{
	public:
		Data(string dbpath);
		int open();
		void createDB(string* str, int* labels);

	private:
		int rc;
		MDB_env *env;
		MDB_dbi dbi;
		MDB_val key, data;
		MDB_txn *txn;
		MDB_cursor *cursor;
		char sval[32];
};
