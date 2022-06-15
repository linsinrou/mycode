#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(string a)
{
    setColor(a);
}

void Shape::setColor(string a)
{
    color = a;
}

string Shape::getColor() const
{
    return color;
}

