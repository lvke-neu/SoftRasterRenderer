#include <opencv2/opencv.hpp>

int main()
{

	cv::Mat image(700, 700, CV_32FC3);
	//image.convertTo(image, CV_8UC3, 1.0f);
	cv::imshow("image", image);
	while (true);
    return 0;
}