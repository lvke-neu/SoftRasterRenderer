#include <opencv2/opencv.hpp>

struct Vector3f
{
	float x;
	float y;
	float z;
};

int main()
{
	std::vector<Vector3f> pixels;
	pixels.resize(700 * 700);
	for (int i = 0; i < 700; i++)
	{
		for (int j = 0; j < 700; j++)
		{
			pixels[i * 700 + j] = { 1.0f, 1.0f, 1.0f };
		}
	}

	//cv::Mat image(700, 700, CV_32FC3, pixels.data());
	//image.convertTo(image, CV_8UC3, 1.0f);
	//cv::Mat image(700, 700, CV_8UC3);
	//for (int i = 0; i < 700; i++)
	//{
	//	for (int j = 0; j < 700; j++)
	//	{
	//		auto& pixel = image.at<cv::Vec3b>(i, j);
	//		pixel[0] = 0;
	//		pixel[1] = 0;
	//		pixel[2] = 255;
	//	}
	//}
	cv::Mat image = cv::imread("D:/C++Project/SoftRasterRenderer/build/Debug/1.png", 1);

	cv::imshow("image", image);
	
	getchar();
    return 0;
}