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
請參考兩個課本範例:
TestCircleWithStaticDataFields.cpp
CircleWithConstantMemberFunctions.cpp

並以分開三個檔案的方式將其 Circle 物件修改成 Rectangle 物件，讓 Rectangle 具有 const 和 static 功能。
data fields(private) 為 width(double)、height(double)、numOfRect(int)
以及請設計建構者和 function: setWidth、getWidth、setHeight、getHeight、getArea、getNumOfRect


輸入說明：
於主程式中輸入 3 組長與寬，建立 3 個 Rectangle 物件

輸出說明：
最後輸出各個長方形的『寬(width)』、『長(height)』、『面積』、『總共有幾個長方形』。

範例輸入：
1 2 2 3 3 4

範例輸出：
1 2 2
2 3 6
3 4 12
3 Rectangles



※ 要求：int numOfRect 為紀錄長方形的個數需具有 static 功能，getNumOfRect()也須具有 static 功能，而 getWidth()、 getHeight()、getArea() 需具有 const。
*/