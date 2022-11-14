#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter the elements into the array\n";

    for (int i = 0; i < 5; i++)
    {
        try
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                throw i;
            }

            else
            {
                continue;
            }
        }

        catch (int x)
        {
            cout << "Exception caught\n";
        }
    }

    cout << "Array : ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}