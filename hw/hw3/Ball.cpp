#include "Ball.h"

Ball::Ball()
{

}
Ball::Ball(double a, string color, bool filled) :Shape3D(color, filled)
{
	setRadius(a);
}
void Ball::setRadius(double a)
{
	radius = a;
}
double Ball::getRadius()
{
	return radius;
}
double Ball::getVolume()
{
	return (4 * 3.14159 * pow(radius, 3)) / 3;
}
double Ball::getArea()
{
	return 4 * 3.14159 * pow(radius, 2);
}
string Ball::toString()
{
	return "ball,";
}