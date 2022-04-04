#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
public:
    Rectangle();
    void setWidth(double);
    void setHeight(double);
    double getWidth()const;
    double getHeight()const;
    double getArea()const;
    static double getNumOfRect();

private:
    double width;
    double height;
    static int numOfRect;
};

#endif
