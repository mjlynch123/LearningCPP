#include <opencv2/opencv.hpp>

#include <iostream>

int main()
{
    cv::Mat image = cv::Mat::zeros(300, 300, CV_8UC3); // Create a blank image
    if (image.empty())
    {
        std::cerr << "Error: Unable to create image!" << std::endl;
        return -1;
    }
    cv::imshow("Test Window", image);
    cv::waitKey(0); // Wait for a key press
    return 0;
}
