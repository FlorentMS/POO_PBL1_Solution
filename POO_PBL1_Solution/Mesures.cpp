#include "Mesures.h"
#include <cmath>

bool Mesures::distanceEq(Point p1, Point p2, float a)
{
    return a == distance(p1, p2);
}

float Mesures::distance(Point p1, Point p2)
{
    return sqrt(pow((p1.getx() + p2.getx()), 2) + pow((p1.gety() + p2.gety()), 2));
}
