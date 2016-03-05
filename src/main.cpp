#include <stdio.h>
#include <string>
#include <iostream>
#include "Db.hpp"
#include "proto/data.pb.h"

using namespace std;
#define dbpath_ "/home/kanit/convnet/data/lmdb"

int main()
{	
	DB* d = new DB(dbpath_);
	d->startread();
	Data::Datum data;
	data = d->read();

	cout<< data.channel() <<endl;
	cout<< data.width() <<endl;
	cout<< data.height() <<endl;
	cout<< data.label() <<endl;
	cout<< data.name() <<endl;

	data = d->read();
	data = d->read();
	d->endread();
	return 0;
}
