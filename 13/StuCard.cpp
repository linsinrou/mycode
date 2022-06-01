#include "StuCard.h"
#include <cstring>
#include <fstream>
#include <iomanip>

StuCard::StuCard()
{

}
StuCard::StuCard(string a, bool b, double c[])
{
	setName(a);
	setSex(b);
	setScore(4,c);
}
void StuCard::setName(string a)
{
	name = a;
}
void  StuCard::setSex(bool a)
{
	sex = a;
}
void StuCard::setScore(int a, double b[])
{
	for (int i = 0; i < a; i++)
	{
		scoreAry[i] = b[i];
	}
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
void StuCard::writeToFile(ofstream& out)
{
	out << name << " " << sex << " ";
	for (int i = 0; i < 3; i++)
	{
		out << fixed << setprecision(1) << scoreAry[i] << " ";
	}
	out << endl;
}
void StuCard::readFromFile(ifstream& in)
{
	in >> name >> sex;
	for (int i = 0; i < 3; i++)
	{
		in >> scoreAry[i];
	}
}
