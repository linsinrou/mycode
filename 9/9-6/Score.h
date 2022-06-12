#ifndef Score_h
#define Score_h
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Score
{
public:
    void setName(string);
    void setMath(int);
    string getName();
    int getMath();
    void print();

private:
    string name;
    int math;
};

#endif