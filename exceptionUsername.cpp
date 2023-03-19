#include <iostream>
using namespace std;

main()
{
    char id[20];
    cout << "Enter Email ID" << endl;
    cin.get(id, 20);

    char chk[10] = "@mail.com";
    int i;
    for (i = 0; i < 20; i++)
    {
        if (id[i] == '@')
            break;
    }

    int j = 0;

    while (id[i] == chk[j])
    {
        i++;
        j++;
    }

    try
    {
        if (j == 10)
            cout << "*Valid Email ID*" << endl;
        else
            throw j;
    }
    catch (int num)
    {
        cout << "*Exception Caught : Invalid Username*" << endl;
    }

    return 0;
}