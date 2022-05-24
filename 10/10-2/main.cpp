#include <iostream>
#include "Rectangle.h"

using namespace std;

double sum(Rectangle rectArray[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += rectArray[i].getArea();
	}
	return sum;
}
void printRectangleArray(Rectangle rectArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << rectArray[i].getWidth() << " " << rectArray[i].getHeight() << " " << rectArray[i].getArea() << endl;
	}
	cout << "Total:" << sum(rectArray, 4) << endl;
}

int main()
{
	Rectangle rectArray[4];
	double a, b;

	for (int i = 0; i < 4; i++)
	{
		cin >> a >> b;
		rectArray[i].setWidth(a);
		rectArray[i].setHeight(b);
	}
	printRectangleArray(rectArray, 4);


	return 0;
}

/*
�аѦҽҥ��d�� TotalArea.cpp
�åH���}�T���ɮת��覡�N�� Circle ����ק令 Rectangle ����
data fields(private) �� width(double)�Bheight(double)
�H�νг]�p�A���غc��
function�� setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea

��J�����G
��D�{������J 4 �ժ��P�e�A�H�}�C�覡�إ� 4 �� Rectangle ����

��X�����G
�b�D�{���~���г]�p sum(Rectangle rectArray[], int size) �MprintRectangleArray(Rectangle rectArray[], int size) ��Ө禡�A���O���p�����ΰ}�C���`���n�P��X����Ϊ��y�e(width)�z�B�y��(height)�z�B�y���n�z�B�y�`���n�z

�d�ҿ�J�G
13 12 11 7 16 8 19 14

�d�ҿ�X�G
13 12 156
11 7 77
16 8 128
19 14 266
Total: 627
*/