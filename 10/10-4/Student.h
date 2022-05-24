#ifndef Student_h
#define Student_h
#include <string>
#include "Date.h"
using namespace std;
class Student
{
public:
    Student(string, Date, int);
    void setName(string);
    void setDate(Date);
    void setScore(int);
    string getName()const;
    Date getDate()const;
    int getScore()const;
    void print();
private:
    string name;
    Date birthDay;
    int score;
};
#endif
