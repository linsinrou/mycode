#include "BMI.h"
#include <iostream>
using namespace std;

double BMI::getBMI()
{
    return weight / (height * height);
}
void BMI::setw(double a)
{
    weight = a;
}
void BMI::seth(double a)
{
    height = a;
}

