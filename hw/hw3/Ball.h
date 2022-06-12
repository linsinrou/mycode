#ifndef Ball_h
#define Ball_h
#include <string>
#include "Shape3D.h"
using namespace std;

class Ball:public Shape3D
{
public:
	Ball();
	Ball(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
	string toString();
private:
	double radius;

};

#endif

