#include "Rectangle.h"

Rectangle::Rectangle()
{

}
Rectangle::Rectangle(double a, double b, string color, bool filled) :Shape2D(color, filled)
{
	setWidth(a);
	setHeight(b);
}
void Rectangle::setWidth(double a)
{
	width = a;
}
void Rectangle::setHeight(double a)
{
	height = a;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getPerimeter()
{
	return (height + width) * 2;
}
double Rectangle::getArea()
{
	return width * height;
}
string Rectangle::toString()
{
	return "rectangle,";
}