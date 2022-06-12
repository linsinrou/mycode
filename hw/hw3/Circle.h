#ifndef Circle_h
#define Circle_h
#include <string>
#include "Shape2D.h"
using namespace std;

class Circle :public Shape2D
{
public:
	Circle();
	Circle(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getPerimeter();
	double getArea();
	string toString();
private:
	double radius;

};

#endif
