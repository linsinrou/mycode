#ifndef Shape_h
#define Shape_h
#include <string>
using namespace std;
class Shape
{
public:
	Shape();
	Shape(string);
	void setColor(string);
	string getColor() const;

private:
	string color;
};




#endif

