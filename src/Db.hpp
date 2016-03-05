#include <stdio.h>
#include <string>
#include <lmdb.h>
#include <utility>
#include <iostream>
#include <vector>
#include "boost/filesystem/path.hpp"
#include "boost/filesystem.hpp"
#include "proto/data.pb.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;

class DB
{
	public:
		DB(string dbpath);
		void close();
		Data::Datum read();
		void drop();
		void createDB(vector< pair<string,int> > pairs);
		void startread();
		void endread();
	private:
		string currentDBPath;

		int rc;
		MDB_env *env;
		MDB_dbi dbi;
		MDB_val key, data;
		MDB_txn *txn;
		MDB_cursor *cursor;
		char sval[32];
};
