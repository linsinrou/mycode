#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}
Rectangle::Rectangle(double a, double b)
{
	this->width = a;
	this->height = b;
}
void Rectangle::setWidth(double a)
{
	this->width = a;
}
void Rectangle::setHeight(double a)
{
	this->height = a;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}
double Rectangle::getArea()
{
	return height* width;
}
void Rectangle::swapByPointer(Rectangle &r2)
{
	Rectangle a = r2;
	r2 = *this;
	*this = a;
}
void Rectangle::swapByReference(Rectangle* r2)
{
	Rectangle a = *r2;
	*r2 = *this;
	*this = a;
}