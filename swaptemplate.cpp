#include <iostream>
using namespace std;
template <class T>
int swap_numbers(T &x, T &y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
int main()
{
    int a, b;
    float x, y;
    a = 10, b = 20;
    x = 2.1;
    y = 4.4;

    swap_numbers<int>(a, b);
    swap_numbers<float>(x, y);

    cout << a << " " << b << endl;
    cout << x << " " << y << endl;
    return 0;
}
