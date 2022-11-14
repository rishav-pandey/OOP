#include <iostream>
#include <Cstring>
#include <fstream>
using namespace std;

void toggle(string &str)
{
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        int c = str[i];
        if (isupper(c))
            str[i] = tolower(c);
    }
}

int main()
{
    string s;
    int i;
    cout << "Enter the String in uppercase: ";
    cin >> s;
    ofstream o1("Text.txt");
    o1 << "Original : " << s << " ";
    toggle(s);
    cout << "The entered string in lowercase: " << s;
    o1 << "Lowercase : " << s;
    o1.close();
    return 0;
}