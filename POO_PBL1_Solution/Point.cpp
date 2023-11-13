#include "Point.h"
#include <iostream>

#ifndef createPoint
#define createPoint

Point::Point(void)
{
	x = (0.0);
	y = (0.0);
}

Point::Point(float a, float b)
{
	x = a;
	y = b;
}

void Point::setx(float a)
{
	x = a;
}

void Point::sety(float b)
{
	y = b;
}

float Point::getx(void)
{
	return x;
}

float Point::gety(void)
{
	return y;
}

void Point::printPoint(void)
{
	std::cout << "x : " << x << "  y : " << y << std::endl;
}


#endif //Point


