#include "Rasterizer.h"
#include <opencv2/opencv.hpp>

Rasterizer::Rasterizer(unsigned int width, unsigned int height) :
	m_width(width),
	m_height(height)
{
	m_canvas.resize(m_width * m_height);
}

void Rasterizer::clear(const Vector3f& color)
{
	for (size_t i = 0; i < m_canvas.size(); i++)
	{
		m_canvas[i] = Vector3ColorRGBToBGR(color);
	}
}

int Rasterizer::present()
{
	cv::Mat image(m_width, m_height, CV_32FC3, m_canvas.data());

	cv::imshow("image", image);
	return cv::waitKey(10);
}
