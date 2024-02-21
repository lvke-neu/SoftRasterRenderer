#pragma once
#include <vector>
#include "Math/Vector.h"

class Rasterizer
{
public:
	Rasterizer(unsigned int width, unsigned int height);
public:
	void clear(const Vector3f& color);
	int present();
private:
	std::vector<Vector3f> m_canvas;
	unsigned int m_width;
	unsigned int m_height;

};
