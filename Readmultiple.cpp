#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name, read;
    int c;
    cout << "Chose anyone : \n1. Read from file\n2. Write into file\n";
    cin >> c;
    if (c == 1)
    {
        cout << "File name with ext : ";
        cin >> name;
        ifstream i1(name);
        i1 >> read;
        cout << "File content : " << read;
        i1.close();
    }
    else
    {
        cout << "File name with ext : ";
        cin >> name;
        ofstream o1(name);
        cout << "Enter data to store :";
        cin >> read;
        o1 << read;
        cout << "File created\nStored : " << read << endl;
        o1.close();
    }
}