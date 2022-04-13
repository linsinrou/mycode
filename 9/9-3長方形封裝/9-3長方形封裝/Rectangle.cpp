#include "Rectangle.h"

double Rectangle::getArea()
{
    return width * height;
}
double Rectangle::getPerimeter()
{
    return (width + height) * 2;
}
void Rectangle::setWidth(double a)
{
    width = a;
}
void Rectangle::setHeight(double a)
{
    height = a;
}