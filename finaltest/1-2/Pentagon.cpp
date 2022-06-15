#include "Pentagon.h"

Pentagon::Pentagon()
{
    edge = 1.0;
}

Pentagon::Pentagon(double a, string color) :Shape(color)
{
    setEdge(a);
}

void Pentagon::setEdge(double a)
{
    edge = a;
}

double Pentagon::getEdge() const
{
    return edge;
}

double Pentagon::getPerimeter() const
{
    return edge * 5;
}

string Pentagon::toString() const
{
    return "Pentagon";
}