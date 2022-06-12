#include "GeometricObject.h"
#include "Cube.h"
#include "Ball.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayGeometricObject(GeometricObject& g) {
	GeometricObject* p = &g;
	Ball* p1 = dynamic_cast<Ball*>(p);
	Cube* p2 = dynamic_cast<Cube*>(p);
	if (p1 != NULL) {
		cout << "Ball" << endl;
		cout << fixed << setprecision(1)
			<< "radius:" << p1->getRadius() << ", "
			<< "area:" << p1->getArea() << ", "
			<< "volume:" << p1->getVolume() << ", ";
	}
	if (p2 != NULL) {
		cout << "Cube" << endl;
		cout << fixed << setprecision(1)
			<< "length:" << p2->getLength() << ", "
			<< "area:" << p2->getArea() << ", "
			<< "volume:" << p2->getVolume() << ", ";
	}
	cout << "color:" << g.getColor() << endl;
}

int main() {
	double a, b;
	string x, y;
	cin >> a >> x >> b >> y;

	Ball ball(a, x);
	Cube cube(b, y);

	displayGeometricObject(ball);
	displayGeometricObject(cube);

}






/*
續上題，請參考課本範例:
TestAbstractGeometricObject.cpp

撰寫一個主程式的函式display(GeometricObject &)，
裡面要包含getVolume，getArea，getColor。
此題必須使用抽象(abstract)類別和函數，請使用virtual完成。

輸入說明：
輸入半徑、顏色建立1個Ball物件，
再輸入邊長、顏色建立1個Cube物件

輸出說明：
依照範例輸出，利用display函式分別輸出Ball及Cube的各項資料


範例輸入：
3 red 5 blue

範例輸出：
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***提示：「area:113.1, volume:113.1, color:red 」在display完成
p.s: Pi 請使用3.14159
*/