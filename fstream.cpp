#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream my_file;
    string name, branch, sec;
    int roll;
    cout << "Enter Name :";
    cin >> name;
    cout << "Enter Roll : ";
    cin >> roll;
    cout << "Sec : ";
    cin >> sec;
    cout << "Enter branch :";
    cin >> branch;
    my_file.open("my_file.txt", ios::out);
    if (!my_file)
    {
        cout << "File not created!";
    }
    else
    {
        cout << "File created successfully!";
        my_file << "Name" << name << "\nRoll no. " << roll << "\nSec: " << sec << "\nBranch" << branch;
        my_file.close();
    }
    return 0;
}