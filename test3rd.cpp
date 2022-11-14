#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;
    int marks[5];
    int tmarks = 0;
    double percentage;

public:
    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks of five subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Marks of Subject " << i + 1 << " : ";
            cin >> marks[i];
            tmarks = (tmarks + marks[i]);
        }
    }
    void display()
    {
        cout << "=========================" << endl;
        cout << "Student's Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Marks of Subject " << i << " : ";
            cout << marks[i] << endl;
        }
        cout << "Total Marks: " << (tmarks) << endl;
        cout << "Percentage : " << (tmarks / 5) << "%" << endl;
    }
};

int main()
{
    student ob;
    ob.getdata();
    ob.display();
    return 0;
}