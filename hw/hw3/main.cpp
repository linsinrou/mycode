#include <iostream>
#include <iomanip>
#include "Ball.h"
#include "Circle.h"
#include "Cube.h"
#include "Rectangle.h"
#include "Shape2D.h"
#include "Shape3D.h"

using namespace std;

bool equalArea(Shape& a, Shape& b)
{
	return a.getArea() == b.getArea();
}
bool equalVolume(Shape3D& a, Shape3D& b)
{
	return a.getVolume() == b.getVolume();
}
bool equalPerimeter(Shape2D& a, Shape2D& b)
{
	return a.getPerimeter() == b.getPerimeter();
}

void display(Shape& g)
{
	Shape* p = &g;
	Circle* p1 = dynamic_cast<Circle*>(p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);
	Ball* p3 = dynamic_cast<Ball*>(p);
	Cube* p4 = dynamic_cast<Cube*>(p);
	cout << fixed << setprecision(0);
	if (p1 != NULL)
	{
		cout << p1->toString() << p1->getRadius() << ", ";
	}
	if (p2 != NULL)
	{
		cout << p2->toString() << p2->getWidth() << ", " << p2->getHeight() << ", ";
	}
	if (p3 != NULL)
	{
		cout << p3->toString() << p3->getRadius() << ", ";
	}
	if (p4 != NULL)
	{
		cout << p4->toString() << p4->getSide() << ", ";
			
	}
	cout << g.getColor() << "," << fixed << setprecision(2) << g.getArea() << ", " << endl;
}

int main()
{
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	display(circle);
	display(rectangle);
	display(ball);
	display(cube);

	cout << "circle " << circle.getPerimeter()
		<< (equalPerimeter(circle, rectangle) ? " == " : " != ");
	cout << "rectangle " << rectangle.getPerimeter() << endl;

	cout << "ball " << ball.getVolume()
		<< (equalVolume(ball, cube) ? " == " : " != ");
	cout << "cube " << cube.getVolume() << endl;
}


/*
設計3層的繼承：
第一層Shape，
第二層Shape2D, Shape3D，
第三層Circle, Rectangle繼承Shape2D，
Ball, Cube繼承Shape3D

Shape類別的 data fields(private):
string color、bool filled

Circle類別的 data fields(private):
double radius

Rectangle類別的 data fields(private):
double width、double height

Ball類別的 data fields(private):
double radius

Cube類別的 data fields(private):
double side

Shape類別中請設計適當 constructor 和 function:
setColor(string)、getColor(): string、isFilled(bool)、setFilled(): booll

Circle類別中請設計適當 constructor 和 function:
setRadius(double)、getRadius(): double、getPerimeter(): double、getArea(): double

Rectangle類別中請設計適當 constructor 和 function:
setWidth(double)、getWidth(): double、setHeight(double)、getHeight(): double、getPerimeter(): double、getArea(): double

Ball類別中請設計適當 constructor 和 function:
setRadius(double)、getRadius(): double、getVolume(): double、getArea(): double

Cube類別中請設計適當 constructor 和 function:
setSide(double)、getSide(): double、getVolume(): double、getArea(): double

每個class都有自己的toString。
球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2
Shape如同課本的GeometricObject, 再增加getArea抽象函數，
Shape2D有getPerimeter抽象函數，
Shape3D有getVolume抽象函數。

在主程式參考程式15.19 TestAbstractGeometricObject.cpp
完成equalArea(Shape, Shape),
equalVolume(Shape3D, Shape3D),
equalPerimeter(Shape2D, Shape2D),
display(Shape)完成顯示getColor, toString和getArea

主程式完成
Circle circle(5, "yellow", 1);
Rectangle rectangle(3, 4, "red", 0);
Ball ball(5, "blue", 1);
Cube cube(4, "black", 0);

輸出說明：
依照輸出範例用display顯示物件的各項資料，然後判斷circle和rectangle週長是否相等，ball和cube體積是否相等。

輸出範例：
circle, 5, yellow, 78.54
rectangle, 3, 4, red, 12.00
ball, 5, blue, 314.16
cube, 4, black, 96.00
circle 31.42 != rectangle 14.00
ball 523.60 != cube 64.00
*/