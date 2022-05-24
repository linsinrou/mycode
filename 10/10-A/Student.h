#ifndef Student_h
#define Student_h
#include<iostream>
#include "Course.h"
using namespace std;

class Student
{
public:
	void setName();
	void setID();
	void setCourse();
	string getName();
	string getID();
	Course getCourse();
	int getNumOfStu();
	void printStudent();
private:
	string name;
	string ID;
	Course course;
	int numOfStu;
};
#endif
