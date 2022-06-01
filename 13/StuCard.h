#ifndef StuCard_H
#define StuCard_H
#include <string>
using namespace std;

class StuCard
{
public:
    StuCard();
    StuCard(string, bool, double[]);
    void setName(string);
    void  setSex(bool);
    void setScore(int, double[]);
    string getName() const;
    bool getSex() const;
    double getScore(int) const;
    void writeToFile(ofstream& out);
    void readFromFile(ifstream& in);

private:
    string name;
    bool sex;
    double scoreAry[3];
};

#endif
