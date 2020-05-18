/*!
 * \file main.cpp
 *
 * \author zjhlogo
 * \date 2020/05/18
 *
 * 
 */
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat img = cv::imread("test.png");
    if (img.empty()) return -1;

    cv::namedWindow("hello_world", cv::WINDOW_AUTOSIZE);
    cv::imshow("hello_world", img);
    cv::waitKey();
    cv::destroyWindow("hello_world");

    return 0;
}
