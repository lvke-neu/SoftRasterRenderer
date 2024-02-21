#include "Rasterizer/Rasterizer.h"

int main()
{
	Rasterizer rst(200, 200);
	
	int key = -1;
	while (key != 27)
	{
		rst.clear({ 1.0f, 1.0f, 0.0f });
		key = rst.present();
	}

	return 0;
}