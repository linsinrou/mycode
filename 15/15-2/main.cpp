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
��W�D�A�аѦҽҥ��d��:
TestAbstractGeometricObject.cpp

���g�@�ӥD�{�����禡display(GeometricObject &)�A
�̭��n�]�tgetVolume�AgetArea�AgetColor�C
���D�����ϥΩ�H(abstract)���O�M��ơA�Шϥ�virtual�����C

��J�����G
��J�b�|�B�C��إ�1��Ball����A
�A��J����B�C��إ�1��Cube����

��X�����G
�̷ӽd�ҿ�X�A�Q��display�禡���O��XBall��Cube���U�����


�d�ҿ�J�G
3 red 5 blue

�d�ҿ�X�G
Ball
radius:3.0, area:113.1, volume:113.1, color:red
Cube
length:5.0, area:150.0, volume:125.0, color:blue


***���ܡG�uarea:113.1, volume:113.1, color:red �v�bdisplay����
p.s: Pi �Шϥ�3.14159
*/