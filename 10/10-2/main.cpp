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
請參考課本範例 TotalArea.cpp
並以分開三個檔案的方式將其 Circle 物件修改成 Rectangle 物件
data fields(private) 為 width(double)、height(double)
以及請設計適當的建構者
function有 setWidth、getWidth、setHeight、getHeight、getArea

輸入說明：
於主程式中輸入 4 組長與寬，以陣列方式建立 4 個 Rectangle 物件

輸出說明：
在主程式外部請設計 sum(Rectangle rectArray[], int size) 和printRectangleArray(Rectangle rectArray[], int size) 兩個函式，分別為計算長方形陣列的總面積與輸出長方形的『寬(width)』、『長(height)』、『面積』、『總面積』

範例輸入：
13 12 11 7 16 8 19 14

範例輸出：
13 12 156
11 7 77
16 8 128
19 14 266
Total: 627
*/