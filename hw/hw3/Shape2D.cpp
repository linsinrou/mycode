#include "Shape2D.h"

Shape2D::Shape2D()
{

}
Shape2D::Shape2D(string color, bool filled) :Shape(color, filled)
{

}
double Shape2D::getPerimeter()
{
	return 0.0;
}
string Shape2D::toString()
{
	return "shape2D,";
}