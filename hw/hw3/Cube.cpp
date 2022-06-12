#include "Cube.h"

Cube::Cube()
{

}
Cube::Cube(double a, string color, bool filled) :Shape3D(color, filled)
{
	setSide(a);
}
void Cube::setSide(double a)
{
	side = a;
}
double Cube::getSide()
{
	return side;
}
double Cube::getVolume()
{
	return pow(side, 3);
}
double Cube::getArea()
{
	return 6 * pow(side, 2);
}
string Cube::toString()
{
	return "cube,";
}