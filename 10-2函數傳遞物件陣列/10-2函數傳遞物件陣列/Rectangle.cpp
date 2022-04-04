#include "Rectangle.h"

void Rectangle::setWidth(double a)
{
	width = a;
}
void Rectangle::setHeight(double a)
{
	height = a;
}
double Rectangle::getWidth() const
{
	return width;
}
double Rectangle::getHeight() const
{
	return height;
}
double Rectangle::getArea() const
{
	return height * width;
}