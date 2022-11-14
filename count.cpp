#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;
int main()
{
    int noc = 0, now = 0, nol = 0, up = 0, low = 0, dig = 0, special = 0;
    FILE *fr;
    char fname[20], ch;

    cout << "\n Enter Source File Name : ";
    gets(fname);
    fr = fopen(fname, "r");
    if (fr == NULL)
    {
        cout << "\n Invalid File Name. \n No such File or Directory ";
        exit(0);
    }
    ch = fgetc(fr);
    while (ch != EOF)
    {
        if (ch != ' ' && ch != '\n')
            noc++;
        if (ch == ' ')
            now++;
        if (ch == '\n')
        {
            nol++;
            now++;
        }
        if (ch >= 65 && ch <= 90)
            up++;
        if (ch >= 97 && ch <= 122)
            low++;
        if (ch >= 48 and ch <= 57)
            dig++;
        else
            special++;
        ch = fgetc(fr);
    }
    fclose(fr);
    cout << " -------------------------------------";
    cout << "\n Total No. of Characters  : " << noc;
    cout << "\n Total No. of Words       : " << now;
    cout << "\n Total No. of Lines       : " << nol;
    cout << "\n Total No. of Uppercase       : " << up;
    cout << "\n Total No. of Lowercase       : " << low;
    cout << "\n Total No. of Digits       : " << dig;
    cout << "\n Total No. of Special Characters       : " << special;

    return 0;
}
