#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

void swapByPointer(Rectangle& r1, Rectangle& r2)
{
	Rectangle a = r2;
	r2 = r1;
	r1 = a;
}
void swapByReference(Rectangle* r1, Rectangle* r2)
{
	Rectangle a = *r2;
	*r2 = *r1;
	*r1 = a;
}

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Rectangle r1(a, b);
	Rectangle r2(c, d);

	cout << fixed << setprecision(2) << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
	swapByReference(&r1 ,&r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;

	cout << fixed << setprecision(2) << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
	swapByPointer(r1 ,r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;

}