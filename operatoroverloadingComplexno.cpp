#include <iostream>
using namespace std;
class complex
{
    int imaginary;
    int real;

public:
    complex() {}
    complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    complex operator+(complex c)
    {
        complex t;
        t.real = real + c.real;
        t.imaginary = imaginary + c.imaginary;
        return t;
    }
    complex operator-(complex c)
    {
        complex t;
        t.real = real - c.real;
        t.imaginary = imaginary - c.imaginary;
        return t;
    }
    void show()
    {
        cout << "real :" << real << "  complex :" << imaginary << endl;
    }
};
int main()
{
    complex c1(12, 13), c2(15, 16), c3, c4;
    c1.show();
    c2.show();
    c3 = c2 - c1;
    c3.show();
    c4 = c1 + c2;
    c4.show();
    return 0;
}