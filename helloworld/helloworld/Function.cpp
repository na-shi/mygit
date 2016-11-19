#include"Function.h"
point::point()
{
	x = 1;
	y = 1;
	cout << x << "," << y << endl;
}

point::~point()
{
	x = 0;
	y = 0;
	cout << x << "," << y << endl;
}