#ifndef Cube_h
#define Cube_h
#include "GeometricObject.h"
#include <cmath>
class Cube :public GeometricObject
{
public:
	Cube();
	Cube(double, string);
	void setLength(double);
	double getLength()const;
	double getVolume()const;
	double getArea()const;
private:
	double length;
};




#endif
