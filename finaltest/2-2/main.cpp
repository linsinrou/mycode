#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include "InformationCard.h"
using namespace std;

void display(InformationCard& InformationCard)
{
	cout << InformationCard.getName() << " ";
	cout << InformationCard.getAge() << " "; 
	cout << fixed << setprecision(2) << InformationCard.getWeight() << " " << InformationCard.getHeight() << endl;
}

int main()
{
	fstream io;
	io.open("Identity.bin", ios::out | ios::binary);
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
		io.write(reinterpret_cast<char*>(&a[i]), sizeof(InformationCard));
	}
	io.close();

	io.open("Identity.bin", ios::in | ios::binary);
	InformationCard na[4];
	for (int i = 0; i < 4; i++)
	{
		io.read(reinterpret_cast<char*>(&na[i]), sizeof(InformationCard));
		display(na[i]);

	}
	io.close();

}

/*
請以分開檔案方式設計類別InformationCard

InformationCard類別的 data fields(private):
姓名 char name[25] 、 年齡 int age 、體重double weight、 身高double height

InformationCard類別中請設計適當 constructor 和 function:
setName(string)、setAge(int)、setWeight(double)、setHeight(double)、
getName(): string、getAge():int、getWeight: double、getHeight: double



然後以隨機二元檔的方式寫入，檔案名稱「Identity.bin」。
並利用此檔案讀入每筆資料，顯示在螢幕上


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



p.s:請include "cstring" 並請勿使用 strcpy_s 請採用 strcpy
*/