#ifndef Ball_h
#define Ball_h
#include "GeometricObject.h"
#include <cmath>
class Ball :public GeometricObject
{
public:
	Ball();
	Ball(double, string);
	void setRadius(double);
	double getRadius()const;
	double getVolume()const;
	double getArea()const;
private:
	double radius;
};




#endif