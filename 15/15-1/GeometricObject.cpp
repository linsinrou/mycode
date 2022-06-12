#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
}

GeometricObject::GeometricObject(string a)
{
    setColor(a);
}

void GeometricObject::setColor(string a)
{
    color = a;
}

string GeometricObject::getColor() const
{
    return color;
}

