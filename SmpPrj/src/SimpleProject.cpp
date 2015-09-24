#include "opencv2/opencv.hpp"

int main()
{
    cv::Mat abc(255, 254, CV_8U, cv::Scalar(0));
    for (int i = 0; i < abc.rows * abc.cols; i++)
    {
        abc.ptr()[i] = i % 255;
    }
    cv::imshow("", abc);
    cv::waitKey();
}