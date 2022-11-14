#include <iostream>
using namespace std;

int main()
{
    int hours, minutes;

    cout << "Enter the time (hours)\n";
    cin >> hours;

    cout << "Enter the time (minutes)\n";
    cin >> minutes;

    try
    {
        if ((hours > 24 || hours < 0) || (minutes > 60 || minutes < 0))
        {
            throw 0;
        }

        else
        {
            cout << "Time : " << hours << ":" << minutes << endl;
        }
    }

    catch (...)
    {
        cout << "Exception caught\n";
    }

    return 0;
}