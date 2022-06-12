#include "Circle.h"

Circle::Circle()
{

}
Circle::Circle(double a, string color, bool filled) :Shape2D(color, filled)
{
	setRadius(a);
}
void Circle::setRadius(double a)
{
	radius = a;
}
double Circle::getRadius()
{
	return radius;
}
double Circle::getPerimeter()
{
	return 2 * 3.14159 * radius;
}
double Circle::getArea()
{
	return 3.14159 * pow(radius, 2);
}
string Circle::toString()
{
	return "circle,";
}