#include "Score.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void Score::setName(string a)
{
    name = a;
}
void Score::setMath(int a)
{
    math = a;
}
string Score::getName()
{
    return name;
}
int Score::getMath()
{
    return math;
}
void Score::print()
{
    cout << name << " " << math << endl;
}