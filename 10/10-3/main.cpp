#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle x[3];
	double a, b;

	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b;
		x[i].setWidth(a);
		x[i].setHeight(b);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << x[i].getWidth() << " " << x[i].getHeight() << " " << x[i].getArea() << endl;
	}
	cout << x[3].getNumOfRect() << "Rectangles" << endl;

	return 0;
}

/*
�аѦҨ�ӽҥ��d��:
TestCircleWithStaticDataFields.cpp
CircleWithConstantMemberFunctions.cpp

�åH���}�T���ɮת��覡�N�� Circle ����ק令 Rectangle ����A�� Rectangle �㦳 const �M static �\��C
data fields(private) �� width(double)�Bheight(double)�BnumOfRect(int)
�H�νг]�p�غc�̩M function: setWidth�BgetWidth�BsetHeight�BgetHeight�BgetArea�BgetNumOfRect


��J�����G
��D�{������J 3 �ժ��P�e�A�إ� 3 �� Rectangle ����

��X�����G
�̫��X�U�Ӫ���Ϊ��y�e(width)�z�B�y��(height)�z�B�y���n�z�B�y�`�@���X�Ӫ���Ρz�C

�d�ҿ�J�G
1 2 2 3 3 4

�d�ҿ�X�G
1 2 2
2 3 6
3 4 12
3 Rectangles



�� �n�D�Gint numOfRect ����������Ϊ��Ӽƻݨ㦳 static �\��AgetNumOfRect()�]���㦳 static �\��A�� getWidth()�B getHeight()�BgetArea() �ݨ㦳 const�C
*/