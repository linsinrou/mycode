#include<iostream>
#include <string>
#include <fstream>
#include "StuCard.h"
#include <iomanip>
using namespace std;

void print(StuCard nstucard)
{
	cout << nstucard.getName() << " ";
	cout << nstucard.getSex() << " ";
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << nstucard.getScore(i) << " ";
	}
	cout << endl;
}

int main()
{
	ofstream output;
	output.open("Stucard.txt");
	double arr1[3] = { 80.0, 70.0, 90.0 };
	double arr2[3] = { 85.0, 77.0, 95.0 };
	double arr3[3] = { 83.0, 75.0, 70.0 };
	double arr4[3] = { 73.0, 95.0, 67.0 };
	double arr5[3] = { 88.0, 79.0, 71.0 };
	StuCard stucard1("Jerry", 1, arr1);
	StuCard stucard2("John", 1, arr2);
	StuCard stucard3("Mary", 0, arr3);
	StuCard stucard4("Tom", 1, arr4);
	StuCard stucard5("Claire", 0, arr5);
	StuCard stucard[5] = { stucard1,stucard2,stucard3,stucard4,stucard5};
	for (int i = 0; i < 5; i++)
	{
		stucard[i].writeToFile(output);
	}
	output.close();
	
	ifstream input;
	input.open("Stucard.txt");
	StuCard nstucard[5];
	for (int i = 0; i < 5; i++)
	{
		nstucard[i].readFromFile(input);
		print(nstucard[i]);
	}

}


/*
請以分開檔案方式設計類別 StuCard:

StuCard 類別的 data fields(private):
姓名string name、
性別 bool sex、
三科分數double scoreAry[3]。

Student 類別中請設計適當 constructor 和 function:
setName(string)、 setSex(bool)、 setScore(int, double)
getName(): string、 getSex(): bool、 getScore(int): double

然後在物件裡增加readFromFile和writeToFile的功能
以循序文字檔的方式寫入。
資料如下：
Jerry, 1, 80.0, 70.0, 90.0
John, 1, 85.0, 77.0, 95.0
Mary, 0, 83.0, 75.0, 70.0
Tom, 1, 73.0, 95.0, 67.0
Claire, 0, 88.0, 79.0, 71.0

寫入檔案後，檔案資料如下：
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0

輸出說明：
讀取檔案並印出資料

輸出範例：
Jerry 1 80.0 70.0 90.0
John 1 85.0 77.0 95.0
Mary 0 83.0 75.0 70.0
Tom 1 73.0 95.0 67.0
Claire 0 88.0 79.0 71.0

*/