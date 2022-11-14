#include <iostream>
using namespace std;
int main() 
{
    
    string str;
    string flag = "";
    
    cout << "Enter the string value: ";
    getline(cin, str);
    
    for (int i = 0; i < str.size(); ++i) 
    {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
            flag = flag + str[i];
    }
    }
    str = flag;
    cout << "Output String: " << str;
    return 0;
}