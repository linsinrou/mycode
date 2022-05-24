#include "Student.h"
#include "Date.h"
#include<iostream>
using namespace std;

Student::Student(string name, Date birthDay, int score)
{
	setName(name);
	setDate(birthDay);
	setScore(score);
}
void Student::setName(string a)
{
	name = a;
}
void Student::setDate(Date a)
{
	birthDay = a;
}
void Student::setScore(int a)
{
	score = a;
}
string Student::getName()const
{
	return name;
}
Date Student::getDate()const
{
	return birthDay;
}
int Student::getScore()const
{
	return score;
}
void Student::print()
{
	cout << name;
	birthDay.print();
	cout << score << endl;
}




