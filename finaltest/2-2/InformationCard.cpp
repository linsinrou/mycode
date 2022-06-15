#include "InformationCard.h"
#include <iomanip>
using namespace std;

InformationCard::InformationCard()
{

}
InformationCard::InformationCard(string a, int b, double c, double d)
{
	setName(a);
	setAge(b);
	setWeight(c);
	setHeight(d);
}
void InformationCard::setName(string& a)
{
	strcpy_s(name, a.c_str());
}
void  InformationCard::setAge(int a)
{
	age = a;
}
void InformationCard::setWeight(double a)
{
	weight = a;
}
void InformationCard::setHeight(double a)
{
	height = a;
}
string InformationCard::getName() const
{
	return string(name);
}
int InformationCard::getAge() const
{
	return age;
}
double InformationCard::getWeight() const
{
	return weight;
}
double InformationCard::getHeight() const
{
	return height;
}
