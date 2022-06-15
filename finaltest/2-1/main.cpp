#include <iostream>
#include <cstring>
#include <string>
#include "InformationCard.h"
using namespace std;


int main()
{
	ofstream output;
	output.open("Identity.txt");
	InformationCard a[4];
	string b[4];
	int c[4];
	double d[4], e[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> b[i] >> c[i] >> d[i] >> e[i];
		a[i] = InformationCard(b[i], c[i], d[i], e[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		a[i].writeToFile(output);
	}
	output.close();

	ifstream input;
	input.open("Identity.txt");
	InformationCard na[4];
	for (int i = 0; i < 4; i++)
	{
		na[i].readFromFile(input);
		na[i].writeToFile(cout);

	}
	input.close();

}

/*
請以分開檔案方式設計類別InformationCard

InformationCard類別的 data fields(private):
姓名 char[25] name 、 年齡 int age 、體重double weight、 身高double height

Student 類別中請設計適當 constructor 和 function:
setName(string)、setAge(int)、setWeight(double)、setHeight(double)、
getName(): string、getAge():int、getWeight: double、getHeight: double

然後在物件裡增加 readFromFile 和 writeToFile 的功能
以循序文字檔的方式寫入，檔案名稱「"Identity.txt"」。

輸入說明：
請輸入四筆資料，並將此資料寫入檔案。

輸出說明：
讀取檔案並印出資料。

輸入範例：
Kenny 26 98.88 44.33
Anna 56 42.38 96.07
Jerry 64 55.14 62.76
Ava 40 41.37 76.13

輸出範例：
Kenny 26 98.88 44.33
Anna 56 42.38 96.07
Jerry 64 55.14 62.76
Ava 40 41.37 76.13


p.s:請輸出到小數點後兩位
p.s:請include "cstring" 並請勿使用 strcpy_s 請採用 strcpy
*/