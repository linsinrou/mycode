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
請參考課本範例 TestCircle.cpp
設計一長方形Rectangle物件
data fields(public) : double width, double height
並完成 getArea()、getPerimeter() 兩個函式

輸入說明：主程式中輸入2組長方形的長寬作為建構2個長方形物件的參數，再將第二個長方形的長改為5.0、寬改為2.5。

輸出說明：第一行與第二行輸出原本2個長方形的面積和周長，第三行輸出第二個長方形修改後的面積和周長。

範例輸入：
6.9 7.2 9.1 5.6

範例輸出：
49.68 28.20
50.96 29.40
12.50 15.00

※ 面積與周長皆取至小數點後第二位

*/