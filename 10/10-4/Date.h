#ifndef Date_h
#define Date_h

class Date
{
public:
    Date();
    Date(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth() const;
    int getDay()const;
    int getYear()const;
    void print();
private:
    int month;
    int day;
    int year;
};
#endif