#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
public:
    double getArea();
    double getPerimeter();
    void setWidth(double);
    void setHeight(double);
private:
    double width;
    double height;
};

#endif