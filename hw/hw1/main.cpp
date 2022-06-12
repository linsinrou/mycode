#include <iostream>
#include <string>
#include "Date.h"
#include "StuCard.h"

using namespace std;

double* classAver(StuCard arr[5], int a)
{
	double* y = new double[4];
	for (int i = 0; i < 3; i++)
	{
		double x = 0;
		for (int j = 0; j < a; j++)
		{
			x += arr[j].getScore(i);
		}
		y[i] = x / 5.0;
	}
	return y;
}

int main()
{
	Date birthday1(3, 20, 1997);
	Date birthday2(5, 20, 1995);
	Date birthday3(2, 18, 2007);
	Date birthday4(11, 8, 2003);
	
	StuCard a("Jerry", 1, 80.0, 70.0, 90.0, birthday1);
	StuCard b("John", 1, 85.0, 77.0, 95.0, birthday2);
	StuCard c("Mary", 0, 83.0, 75.0, 70.0, birthday3);
	StuCard d("Tom", 1, 73.0, 95.0, 67.0, birthday4);

	string name;
	bool sex;
	double arr[3], * aver;
	int x, y, z;
	cin >> name >> sex;
	for (int i = 0; i < 3; i++)
	{
		cin >> arr[i];
	}
	cin >> x >> y >> z;

	Date birthday5(x, y, z);
	StuCard e(name, sex, arr[0], arr[1], arr[2], birthday5);
	StuCard q[5] = { a,b,c,d,e };
	
	for (int i = 0; i < 5; i++)
	{
		q[i].printCard();
	}
	
	aver = classAver(q, 5);
	cout << "Average:" << aver[0] << "," << aver[1] << "," << aver[2] << endl;
}



/*
請分開檔案方式設計兩類別 Date 與 StuCard:

Date 類別的 data fields(private):
月份int month、
日期int day、
年份int year

StuCard 類別的 data fields(private):
姓名string name、
性別 bool sex、
三科分數double scoreAry[3]、
生日Date birthday。

Date 類別中請設計適當 constructor 和 function:
setMonth(int)、setDay(int)、setYear(int)
getMonth(): int、getDay(): int、getYear(): int

Student 類別中請設計適當 constructor 和 function:
setName(string)、 setSex(bool)、 setScore(int, double)、 setDate(Date)
getName(): string、 getSex(): bool、 getScore(int): double、 getDate(): Date
average(): double 計算三科平均
getAge(int): int 計算年紀 (今年為2020年)
printCard(): void 列印個人，包括：姓名、性別、成績、生日、平均

主程式完成一個函數要計算每科的平均
double* classAver(StuCard[], int)

輸入說明：
主程式先建立4個人的資料，資訊如下：
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997
John, 1, 85.0, 77.0, 95.0, 5/20/1995
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003
然後再輸入一組個人資料建立第5個人

輸出說明：
透過printCard()輸出5組資料，並在最後輸出每科的平均

範例輸入：
Claire 0 88.0 79.0 71.0 9 1 2000

範例輸出：
Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, 80.0, 23
John, 1, 85.0, 77.0, 95.0, 5/20/1995, 85.7, 25
Mary, 0, 83.0, 75.0, 70.0, 2/18/2007, 76.0, 13
Tom, 1, 73.0, 95.0, 67.0, 11/8/2003, 78.3, 17
Claire, 0, 88.0, 79.0, 71.0, 9/1/2000, 79.3, 20
Average: 81.8, 79.2, 78.6


※ get function 請皆需使用 const。
*/