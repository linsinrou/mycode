#include "Cube.h"

Cube::Cube()
{
    length = 1.0;
}

Cube::Cube(double a, string color) :GeometricObject(color)
{
    setLength(a);
}

void Cube::setLength(double a)
{
    length = a;
}

double Cube::getLength() const
{
    return length;
}

double Cube::getVolume() const
{
    return pow(length, 3);
}

double Cube::getArea() const
{
    return 6 * pow(length, 2);
}