#include <stdio.h>
#include <string>
#include <lmdb.h>
#include <utility>
#include <iostream>
#include <vector>
#include "boost/filesystem/path.hpp"
#include "boost/filesystem.hpp"

using namespace std;

class Data
{
	public:
		Data(string dbpath);
		void close();
		void read(int id);
		void drop();
		void createDB(vector< pair<string,int> > pairs);

	private:
		void commit();

		string currentDBPath;

		int rc;
		MDB_env *env;
		MDB_dbi dbi;
		MDB_val key, data;
		MDB_txn *txn;
		MDB_cursor *cursor;
		char sval[32];
};
