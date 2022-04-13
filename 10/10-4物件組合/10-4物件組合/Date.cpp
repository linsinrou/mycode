#include "Date.h"
#include<iostream>
using namespace std;

Date::Date()
{

}
Date::Date(int month, int day, int year)
{
	setMonth(month);
	setDay(day);
	setYear(year);
}
void Date::setMonth(int a)
{
	month = a;
}
void Date::setDay(int a)
{
	day = a;
}
void Date::setYear(int a)
{
	year = a;
}
int Date::getMonth()const
{
	return month;
}
int Date::getDay()const
{
	return day;
}
int Date::getYear()const
{
	return year;
}
void Date::print()
{
	cout << " " << month << "/" << day << "/" << year << " ";
}