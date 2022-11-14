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
        cout << "File created successfully!\n File name : my_file.txt\n";
        my_file << "Name" << name << "\nRoll no. " << roll << "\nSec: " << sec << "\nBranch" << branch;
        my_file.close();
    }

    ifstream i1("my_file.txt");
    string c_name, c_branch, c_sec;
    int c_roll;
    i1 >> c_name >> c_branch >> c_sec;
    i1.close();
    ofstream o1("Copied.txt");
    o1 << "Name" << c_name << "\nRoll no. " << c_roll << "\nSec: " << c_sec << "\nBranch" << c_branch;
    cout << "Copied file name : Copied.txt\n";
    o1.close();
    if (c_name == name && c_roll == roll && c_sec == sec && c_branch == branch)
    {
        cout << "Two files are same\n";
    }
    else
    {
        cout << "Two files are not same\n";
    }
}