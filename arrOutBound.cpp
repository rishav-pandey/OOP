#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n;
    cout << "Enter the number of values to be stored\n";
    cin >> n;
    cout << "Enter values into the array\n";
    for (int i = 0; i < n; i++)
    {
        try
        {
            if (i <= 4)
            {
                cin >> arr[i];
            }

            else
            {
                throw i;
            }
        }

        catch (int x)
        {
            cout << "Exception caught : Array out of bound\n";
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}