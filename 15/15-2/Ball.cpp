#include "Ball.h"

Ball::Ball()
{
    radius = 1.0;
}

Ball::Ball(double a, string color) :GeometricObject(color)
{
    setRadius(a);
}

void Ball::setRadius(double a)
{
    radius = a;
}

double Ball::getRadius() const
{
    return radius;
}

double Ball::getVolume() const
{
    return (4 * 3.14159 * pow(radius, 3)) / 3;
}

double Ball::getArea() const
{
    return 4 * 3.14159 * pow(radius, 2);
}