#ifndef InformationCard_H
#define InformationCard_H
#include <string>
#include <fstream>
using namespace std;

class InformationCard
{
public:
    InformationCard();
    InformationCard(string, int, double, double);
    void setName(string&);
    void  setAge(int);
    void setWeight(double);
    void setHeight(double);
    string getName() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

private:
    char name[25];
    int age;
    double weight;
    double height;
};

#endif
