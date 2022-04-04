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
請以分開檔案方式設計BMI封裝物件

data fields(private):
string name
double weight
double height

function: getBMI() -> weight / (height*height)

輸入說明：主程式將輸入name、weight、height。

輸出說明：將name和BMI輸出，不論 BMI 是否為整數，請輸出到小數點後兩位。

範例輸入：
John 80 1.7

範例輸出：
John 27.68

※ .h 檔內請務必避免多重載入(if no define)
*/