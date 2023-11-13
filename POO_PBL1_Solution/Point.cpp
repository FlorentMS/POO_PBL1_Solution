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

float Point::convertIntToFloat(int a)
{
	return (float)a;
}

/*Point::Point(int a, int b)
{
	Point(convertIntToFloat(a), convertIntToFloat(b));
}*/

void Point::setx(int a)
{
	setx(convertIntToFloat(a));
}

void Point::setx(float a)
{
	x = a;
}

void Point::sety(int a)
{
	sety(convertIntToFloat(a));
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

void Point::moveLeft(void)
{
	x -= 1;
}

void Point::moveDroite(void)
{
	x += 1;
}

void Point::moveTop(void)
{
	y += 1;
}

void Point::moveBottom(void)
{
	y -= 1;
}

void Point::moveLeft(int a)
{
	x -= convertIntToFloat(a);
}

void Point::moveDroite(int a)
{
	x += convertIntToFloat(a);
}

void Point::moveTop(int a)
{
	y += convertIntToFloat(a);
}

void Point::moveBottom(int a)
{
	y -= convertIntToFloat(a);
}

void Point::move(float a, float b)
{
	x = x + a;
	y = y + b;
}


#endif //Point


