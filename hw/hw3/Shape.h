#ifndef Shape_h
#define Shape_h
#include <string>
using namespace std;

class Shape
{
public:
	Shape();
	Shape(string, bool);
	void setColor(string);
	void setFilled(bool);
	string getColor();
	bool setFilled();
	virtual double getArea();
	string toString();
private:
	string color;
	bool filled;
};

#endif
