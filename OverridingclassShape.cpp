#include <iostream>
using namespace std;
#define pi 3.14

class Shape
{
protected:
    int radius, length, breadth, base, height;

public:
    virtual void area() = 0;
};

class circle : public Shape
{
public:
    void area()
    {
        cout << "Enter radius : " << endl;
        cin >> radius;
        cout << "Area of the circle is : " << pi * radius * radius << endl;
    }
};
class rectangle : public Shape
{
public:
    void area()
    {
        cout << "Enter length : " << endl;
        cin >> length;
        cout << "Enter breadth : " << endl;
        cin >> breadth;
        cout << "Area of the rectangle is : " << length * breadth << endl;
    }
};
class triangle : public Shape
{
public:
    void area()
    {
        cout << "Enter Base : " << endl;
        cin >> base;
        cout << "Enter Height : " << endl;
        cin >> height;
        cout << "Area of the Triangle is : " << 0.5 * base * height << endl;
    }
};
main()
{
    circle c;
    rectangle r;
    triangle t;

    Shape *ptrC = &c;
    Shape *ptrR = &r;
    Shape *ptrT = &t;

    ptrC->area();
    ptrR->area();
    ptrT->area();
    return 0;
}