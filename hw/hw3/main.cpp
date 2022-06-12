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
�]�p3�h���~�ӡG
�Ĥ@�hShape�A
�ĤG�hShape2D, Shape3D�A
�ĤT�hCircle, Rectangle�~��Shape2D�A
Ball, Cube�~��Shape3D

Shape���O�� data fields(private):
string color�Bbool filled

Circle���O�� data fields(private):
double radius

Rectangle���O�� data fields(private):
double width�Bdouble height

Ball���O�� data fields(private):
double radius

Cube���O�� data fields(private):
double side

Shape���O���г]�p�A�� constructor �M function:
setColor(string)�BgetColor(): string�BisFilled(bool)�BsetFilled(): booll

Circle���O���г]�p�A�� constructor �M function:
setRadius(double)�BgetRadius(): double�BgetPerimeter(): double�BgetArea(): double

Rectangle���O���г]�p�A�� constructor �M function:
setWidth(double)�BgetWidth(): double�BsetHeight(double)�BgetHeight(): double�BgetPerimeter(): double�BgetArea(): double

Ball���O���г]�p�A�� constructor �M function:
setRadius(double)�BgetRadius(): double�BgetVolume(): double�BgetArea(): double

Cube���O���г]�p�A�� constructor �M function:
setSide(double)�BgetSide(): double�BgetVolume(): double�BgetArea(): double

�C��class�����ۤv��toString�C
�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2
Shape�p�P�ҥ���GeometricObject, �A�W�[getArea��H��ơA
Shape2D��getPerimeter��H��ơA
Shape3D��getVolume��H��ơC

�b�D�{���Ѧҵ{��15.19 TestAbstractGeometricObject.cpp
����equalArea(Shape, Shape),
equalVolume(Shape3D, Shape3D),
equalPerimeter(Shape2D, Shape2D),
display(Shape)�������getColor, toString�MgetArea

�D�{������
Circle circle(5, "yellow", 1);
Rectangle rectangle(3, 4, "red", 0);
Ball ball(5, "blue", 1);
Cube cube(4, "black", 0);

��X�����G
�̷ӿ�X�d�ҥ�display��ܪ��󪺦U����ơA�M��P�_circle�Mrectangle�g���O�_�۵��Aball�Mcube��n�O�_�۵��C

��X�d�ҡG
circle, 5, yellow, 78.54
rectangle, 3, 4, red, 12.00
ball, 5, blue, 314.16
cube, 4, black, 96.00
circle 31.42 != rectangle 14.00
ball 523.60 != cube 64.00
*/