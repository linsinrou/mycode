#ifndef StuCard_h
#define StuCard_h
#include <string>
#include "Date.h"
using namespace std;

class StuCard
{
public:
	StuCard();
	StuCard(string, bool, double, double, double, Date);
	void setName(string);
	void setSex(bool);
	void setScore(double, double, double);
	void setDate(Date);
	string getName() const;
	bool getSex() const;
	double getScore(int) const;
	Date getDate() const;
	double average();
	int getAge(int) const;
	void printCard();
private:
	string name;
	bool sex;
	double scoreAry[3];
	Date birthday;
};



#endif