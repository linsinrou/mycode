#include<iostream>
#include<iomanip>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle a;
    Rectangle b;
    double x, y;
    double c, d;
    cin >> x >> c >> y >> d;

    a.setWidth(x);
    a.setHeight(c);
    b.setWidth(y);
    b.setHeight(d);

    cout << fixed << setprecision(2) << a.getArea() << " " << a.getPerimeter() << endl;
    cout << fixed << setprecision(2) << b.getArea() << " " << b.getPerimeter() << endl;

    b.setWidth(5.0);
    b.setHeight(2.5);
    cout << fixed << setprecision(2) << b.getArea() << " " << b.getPerimeter() << endl;

    //6.9 7.2 9.1 5.6
}

/*
�ХH���}�ɮפ覡�]�pBMI�ʸ˪���

data fields(private):
string name
double weight
double height

function: getBMI() -> weight / (height*height)

��J�����G�D�{���N��Jname�Bweight�Bheight�C

��X�����G�Nname�MBMI��X�A���� BMI �O�_����ơA�п�X��p���I����C

�d�ҿ�J�G
John 80 1.7

�d�ҿ�X�G
John 27.68

�� .h �ɤ��аȥ��קK�h�����J(if no define)
*/