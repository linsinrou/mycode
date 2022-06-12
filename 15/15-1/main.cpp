#include "GeometricObject.h"
#include "Cube.h"
#include "Ball.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
	double a, b;
	string x, y;
	cin >> a >> x >> b >> y;

	Ball ball(a, x);
	Cube cube(b, y);

	cout << "Ball" << endl;
	cout << fixed << setprecision(1) << "radius:" << ball.getRadius() << ", "
		<< "area:" << ball.getArea() << ", " << "volume:" << ball.getVolume() << ", ";
	cout << "color:" << ball.getColor() << endl;

	cout << "Cube" << endl;
	cout << fixed << setprecision(1) << "length:" << cube.getLength() << ", "
		<< "area:" << cube.getArea() << ", " << "volume:" << cube.getVolume() << ", ";
	cout << "color:" << cube.getColor() << endl;
	
}






/*
�Ыإ߲y��Ball�M�ߤ���Cube�~��GeometricObject
�ç�������ngetVolume�M�⭱�ngetArea���\��

GeometricObject���O�� data fields(private):
string color

Ball���O�� data fields(private):
double radius

Cube���O�� data fields(private):
double length

GeometricObject���O��
�г]�p�A�� constructor �M function:
setColor(string)�BgetColor(): string

Ball���O���г]�p�A�� constructor �M function:
setRadius(double)�BgetRadius(): double�BgetVolume(): double�BgetArea(): double

Cube���O���г]�p�A�� constructor �M function:
setLength(double)�BgetLength(): double�BgetVolume(): double�BgetArea(): double

�y����n4/3�kr^3�A�y�����n4�kr^2
�ߤ��骺��nL^3�A�ߤ��骺���n6L^2

��J�����G
��J�b�|�B�C��إ�1��Ball����A
�A��J����B�C��إ�1��Cube����

��X�����G
�̷ӽd�ҿ�X�A���O��XBall��Cube���U�����

�d�ҿ�J�G
3 red 5 blue

�d�ҿ�X�G
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue



p.s: Pi �Шϥ�3.14159
*/