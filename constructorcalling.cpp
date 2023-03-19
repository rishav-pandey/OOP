#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor called\n";
    }

    ~Base()
    {
        cout << "Base class destructor called\n";
    }
};

class Derived1 : virtual public Base
{
public:
    Derived1()
    {
        cout << "Derived 1 constructor called\n";
    }

    ~Derived1()
    {
        cout << "Derived 1 destructor called\n";
    }
};

class Derived2 : virtual public Base
{
public:
    Derived2()
    {
        cout << "Derived 2 constructor called\n";
    }

    ~Derived2()
    {
        cout << "Derived 2 destructor called\n";
    }
};

class Derived3 : public Derived1, public Derived2
{
public:
    Derived3()
    {
        cout << "Derived 3 constructor called\n";
    }

    ~Derived3()
    {
        cout << "Derived 3 destructor called\n";
    }
};

int main()
{
    Derived3 d;

    return 0;
}