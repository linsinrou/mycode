#include<iostream>
#include<iomanip>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle a;
    cin >> a.width >> a.height;
    Rectangle b;
    cin >> b.width >> b.height;

    cout << fixed << setprecision(2) << a.getArea() << " " << a.getPerimeter() << endl;
    cout << fixed << setprecision(2) << b.getArea() << " " << b.getPerimeter() << endl;

    b.width = 5.0;
    b.height = 2.5;
    cout << fixed << setprecision(2) << b.getArea() << " " << b.getPerimeter() << endl;

    return 0;
}


/*
�аѦҽҥ��d�� TestCircle.cpp
�]�p�@�����Rectangle����
data fields(public) : double width, double height
�ç��� getArea()�BgetPerimeter() ��Ө禡

��J�����G�D�{������J2�ժ���Ϊ����e�@���غc2�Ӫ���Ϊ��󪺰ѼơA�A�N�ĤG�Ӫ���Ϊ����אּ5.0�B�e�אּ2.5�C

��X�����G�Ĥ@��P�ĤG���X�쥻2�Ӫ���Ϊ����n�M�P���A�ĤT���X�ĤG�Ӫ���έק�᪺���n�M�P���C

�d�ҿ�J�G
6.9 7.2 9.1 5.6

�d�ҿ�X�G
49.68 28.20
50.96 29.40
12.50 15.00

�� ���n�P�P���Ҩ��ܤp���I��ĤG��

*/