#ifndef Rectangle_h
#define Rectangle_h
#include <string>
#include "Shape2D.h"
using namespace std;

class Rectangle :public Shape2D
{
public:
	Rectangle();
	Rectangle(double, double, string, bool);
	void setWidth(double);
	void setHeight(double);
	double getWidth();
	double getHeight();
	double getPerimeter();
	double getArea();
	string toString();
private:
	double width;
	double height;
};

#endif
