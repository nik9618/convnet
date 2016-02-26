#include <Datum.hpp>

Datum::Datum(string path, int l)
{
    cv::Mat img = cv::imread(path.c_str(), CV_LOAD_IMAGE_COLOR);
    cv::Size s = img.size();
    // cout << image.type() << CV_8UC3 << endl;
    // tested its CV_8UC3 = 8 bit unsigned // channel = 3 
    width = s.width;
    height = s.height;
    channel = 3;
    label = l;
    image = image;
}
