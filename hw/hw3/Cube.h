#ifndef Cube_h
#define Cube_h
#include <string>
#include "Shape3D.h"
using namespace std;

class Cube :public Shape3D
{
public:
	Cube();
	Cube(double, string, bool);
	void setSide(double);
	double getSide();
	double getVolume();
	double getArea();
	string toString();
private:
	double side;

};

#endif
