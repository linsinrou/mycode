#include <iostream>
#include <iomanip>
#include "BMI.h"

using namespace std;

int main()
{
    BMI a;
    string n;
    double x, y;

    cin >> n >> x >> y;
    a.setw(x);
    a.seth(y);

    cout << n << " " << fixed << setprecision(2) << a.getBMI();

    return 0;
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