#include <stdio.h>
#include <string>
#include <lmdb.h>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/highgui/highgui_c.h>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;

class Datum
{
	public:
		Datum(string path,int label);
		int channel;
		int height;
		int width;
		int label;
		cv::Mat image;
};
