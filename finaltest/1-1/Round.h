#ifndef Round_h
#define Round_h
#include "Shape.h"
//#include <cmath>
class Round :public Shape
{
public:
	Round();
	Round(double, string);
	void setRadius(double);
	double getRadius()const;
	double getPerimeter()const;
	string toString()const;
private:
	double radius;
};




#endif