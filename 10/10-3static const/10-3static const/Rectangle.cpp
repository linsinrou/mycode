#include "Rectangle.h"

int Rectangle::numOfRect = 0;
Rectangle::Rectangle()
{
    numOfRect++;
}
void Rectangle::setWidth(double a)
{
    width = a;
}
void Rectangle::setHeight(double a)
{
    height = a;
}
double Rectangle::getWidth()const
{
    return width;
}
double Rectangle::getHeight()const
{
    return height;
}
double Rectangle::getArea()const
{
    return width * height;
}
double Rectangle::getNumOfRect()
{
    return numOfRect;
}
