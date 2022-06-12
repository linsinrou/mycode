#include "Shape.h"

Shape::Shape()
{

}
Shape::Shape(string a, bool b)
{
	setColor(a);
	setFilled(b);
}
void Shape::setColor(string a)
{
	color = a;
}
void Shape::setFilled(bool a)
{
	filled = a;
}
string Shape::getColor()
{
	return color;
}
bool Shape::setFilled()
{
	return filled;
}
double Shape::getArea()
{
	return 0.0;
}
string Shape::toString()
{
	return "shape,";
}