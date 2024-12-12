#include <opencv2/opencv.hpp>

#include <iostream>

int main()
{
    // Open the default camera (camera index 0)
    cv::VideoCapture cap(0);

    if (!cap.isOpened())
    {
        std::cerr << "Error opening the camera\n";
        return -1;
    }

    std::cout << "Press 'q' to quit\n";

    cv::Mat frame;
    while (true)
    {
        cap >> frame; // Get a new frame from the camera

        if (frame.empty())
        {
            std::cerr << "Error reading the frame\n";
            break;
        }

        cv::imshow("Camera", frame); // Display the frame

        // Set the desired window size
        int windowWidth = 640;
        int windowHeight = 480;

        // Create a named window with a fixed size
        cv::namedWindow("Camera", cv::WINDOW_NORMAL);
        cv::resizeWindow("Camera", windowWidth, windowHeight);

        // Exit the loop if 'q' is pressed
        if (cv::waitKey(10) == 'q')
        {
            break;
        }
    }

    cap.release();           // release the camera
    cv::destroyAllWindows(); // Close all the windows
    return 0;
}
