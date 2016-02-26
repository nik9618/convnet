#include <Datum.hpp>

Datum::Datum(std::string path, int label)
{
    cv::Mat image = cv::imread(path.c_str(), CV_LOAD_IMAGE_COLOR);
}
