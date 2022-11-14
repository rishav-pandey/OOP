#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'A';
    }

    catch (int x)
    {
        cout << "Exception caught\n";
    }

    catch (...)
    {
        cout << "Default exception\n";
    }

    return 0;
}