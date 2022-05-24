#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Rectangle r1(a, b);
	Rectangle r2(c, d);

	cout << fixed << setprecision(2) << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByReference(&r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;

	cout << fixed << setprecision(2) << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByPointer(r2);
	cout << r1.getArea() << " " << r2.getArea() << endl;

}