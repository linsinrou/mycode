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
請建立球體Ball和立方體Cube繼承GeometricObject
並完成算體積getVolume和算面積getArea的功能

GeometricObject類別的 data fields(private):
string color

Ball類別的 data fields(private):
double radius

Cube類別的 data fields(private):
double length

GeometricObject類別中
請設計適當 constructor 和 function:
setColor(string)、getColor(): string

Ball類別中請設計適當 constructor 和 function:
setRadius(double)、getRadius(): double、getVolume(): double、getArea(): double

Cube類別中請設計適當 constructor 和 function:
setLength(double)、getLength(): double、getVolume(): double、getArea(): double

球的體積4/3πr^3，球的面積4πr^2
立方體的體積L^3，立方體的面積6L^2

輸入說明：
輸入半徑、顏色建立1個Ball物件，
再輸入邊長、顏色建立1個Cube物件

輸出說明：
依照範例輸出，分別輸出Ball及Cube的各項資料

範例輸入：
3 red 5 blue

範例輸出：
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue



p.s: Pi 請使用3.14159
*/