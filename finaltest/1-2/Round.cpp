#include "Round.h"

Round::Round()
{
    radius = 1.0;
}

Round::Round(double a, string color) :Shape(color)
{
    setRadius(a);
}

void Round::setRadius(double a)
{
    radius = a;
}

double Round::getRadius() const
{
    return radius;
}

double Round::getPerimeter() const
{
    return radius * radius * 3.1415926;
}

string Round::toString() const
{
    return "Round";
}
