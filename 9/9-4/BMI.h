#ifndef BMI_h
#define BMI_h
#include <iostream>
using namespace std;

class BMI
{
public:
    double getBMI();
    void setw(double);
    void seth(double);

private:
    string name;
    double weight;
    double height;

};

#endif
