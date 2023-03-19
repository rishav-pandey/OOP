/*                        Program to swap two nos using template        */

#include <iostream>
using namespace std;

template <typename T>
void swap(T x, T y)
{
    cout << "Before Swapping : " << endl;
    cout << "a : " << x << endl;
    cout << "b : " << y << endl;

    T temp;
    temp = x;
    x = y;
    y = temp;

    cout << "After Swapping " << endl;
    cout << "a : " << x << endl;
    cout << "b : " << y << endl;
}

int main()
{

    swap<int>(3, 4);

    return 0;
}