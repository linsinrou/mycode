#ifndef Shape3D_h
#define Shape3D_h
#include <string>
#include "Shape.h"
using namespace std;

class Shape3D :public Shape
{
public:
	Shape3D();
	Shape3D(string, bool);
	virtual double getVolume();
	string toString();

};

#endif
