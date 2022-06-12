#include "StuCard.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

StuCard::StuCard()
{
	name = 1;
	sex = 1;
}
StuCard::StuCard(string newname, bool newsex, double a, double b, double c, Date newbirthday)
{
	name = newname;
	sex = newsex;
	scoreAry[0] = a;
	scoreAry[1] = b;
	scoreAry[2] = c;
	birthday = newbirthday;
}
void StuCard::setName(string a)
{
	name = a;
}
void StuCard::setSex(bool a)
{
	sex = a;
}
void StuCard::setScore(double a, double b, double c)
{
	scoreAry[0] = a;
	scoreAry[1] = b;
	scoreAry[2] = c;
}
void StuCard::setDate(Date a)
{
	birthday = a;
}
string StuCard::getName() const
{
	return name;
}
bool StuCard::getSex() const
{
	return sex;
}
double StuCard::getScore(int a) const
{
	return scoreAry[a];
}
Date StuCard::getDate() const
{
	return birthday;
}
double StuCard::average()
{
	double b = 0;
	for (int i = 0; i < 3; i++)
	{
		b += scoreAry[i];		
	}
	return b / 3.0;
}
int StuCard::getAge(int a) const
{
	return 2020 - a;
}
void StuCard::printCard()
{
	int year;
	cout << name << "," << sex << ",";
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << scoreAry[i] << ",";
	}
	birthday.print();
	year = birthday.getYear();
	cout << average() << "," << getAge(year) << endl;
}