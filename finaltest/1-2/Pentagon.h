#ifndef Pentagon_h
#define Pentagon_h
#include "Shape.h"
#include <cmath>
class Pentagon :public Shape
{
public:
	Pentagon();
	Pentagon(double, string);
	void setEdge(double);
	double getEdge()const;
	double getPerimeter()const;
	string toString()const;
private:
	double edge;
};




#endif
