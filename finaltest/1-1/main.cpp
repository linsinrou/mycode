#include "Shape.h"
#include "Pentagon.h"
#include "Round.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
	double a, b;
	string x, y;
	cin >> a >> x >> b >> y;

	Round round(a, x);
	Pentagon pentagon(b, y);

	cout << round.toString() << endl;
	cout << fixed << setprecision(2) << "Radius:" << round.getRadius() << ", "
		<< "Perimeter:" << round.getPerimeter() << "," << "Color:" << round.getColor() << endl;

	cout << pentagon.toString() << endl;
	cout << fixed << setprecision(2) << "Edge:" << pentagon.getEdge() << ", "
		<< "Perimeter:" << pentagon.getPerimeter() << "," << "Color:" << pentagon.getColor() << endl;

}

/*
�Ыإ߶��Round�M�����Pentagon�~��Shape

Shape���O�� data fields(private):
string color

Round���O�� data fields(private):
double radius

Pentagon���O�� data fields(private):
double edge

Shape���O��
�г]�p�A�� constructor �M function:
setColor(string)�BgetColor(): string

Round���O���г]�p�A�� constructor �M function:
setRadius(double)�BgetRadius():double�BgetPerimeter():double�BtoString():string

Pentagon���O���г]�p�A�� constructor �M function:
setEdge(double)�BgetEdge():double�BgetPerimeter():double�BtoString():string

��ΩP���� �b�|*2*3.1415926
����ΩP���� ���*5

��J�����G
��J���|�B�C��إ�1��Round����A
��J����B�C��إߤ@��1��Pentagon����

��X�����G
�̷ӽd�ҿ�X�A���O��XRound��Pentagon���U�����

�d�ҿ�J�G
4 red
1.2 yellow

�d�ҿ�X�G
Round
Radius:4.00, Perimeter:50.27, Color:red
Pentagon
Edge:1.20, Perimeter:6.00, Color:yellow
*/