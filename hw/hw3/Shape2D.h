#ifndef Shape2D_h
#define Shape2D_h
#include <string>
#include "Shape.h"

using namespace std;

class Shape2D :public Shape
{
public:
	Shape2D();
	Shape2D(string, bool);
	virtual double getPerimeter();
	string toString();
};

#endif
