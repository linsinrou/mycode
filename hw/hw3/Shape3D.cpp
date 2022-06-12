#include "Shape3D.h"

Shape3D::Shape3D()
{

}
Shape3D::Shape3D(string color, bool filled) :Shape(color, filled)
{

}
double Shape3D::getVolume()
{
	return 0.0;
}
string Shape3D::toString()
{
	return "shape3D,";
}