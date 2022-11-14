#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    a = 20;
    b = 0;
    try
    {
        {
            if (b == 0)
            {
                throw b;
            }
            else
            {
                c = a / b;
                cout << "QUOTIENT IS : " << c << endl;
            }
        }
    }
    catch (int x)
    {
        cout << "DIVIDE BY ZERO EXCEPTION CAUGHT" << endl;
    }
    return 0;
}