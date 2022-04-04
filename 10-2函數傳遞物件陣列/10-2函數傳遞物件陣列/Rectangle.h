#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
public:
    void setWidth(double);
    void setHeight(double);
    double getWidth() const;
    double getHeight() const;
    double getArea() const;
private:
    double width;
    double height;
};
#endif
