#include <stdio.h>
#include <string>
#include <iostream>
#include "Db.hpp"
#include "proto/data.pb.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/imgproc/imgproc.hpp>

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

	string* img = data.mutable_data();
	string simg = *reinterpret_cast<string *>(img);
	const char * cimg = simg.c_str();
	vector<uchar> v(simg.length());
	cout<< v.size() << endl;
	memcpy(&v[0],cimg,simg.length());
	cv::Mat matrixJpg = imdecode(cv::Mat(v), 1);
	imwrite( "test.jpg", matrixJpg );
	
	d->endread();
	return 0;
}
