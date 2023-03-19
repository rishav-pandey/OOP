#include <iostream>
using namespace std;

class student
{
private:
    int regdno;
    string name;
    int marks;
    static float avgMarks;

public:
    void input()
    {
        cout << "Enter the regd number :\n";
        cin >> regdno;

        cout << "Enter the name :\n";
        cin >> name;

        cout << "Enter the marks :\n";
        cin >> marks;
    }

    void display()
    {
        cout << "Registration Number : " << regdno << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << marks << endl;
    }

    void findAvg()
    {

        avgMarks = avgMarks + marks;
    }

    static void showAvg()
    {
        cout << "Avg marks of class : " << avgMarks / 2 << endl;
    }
};

float student::avgMarks = 0;

int main()
{
    student s[2];

    for (int i = 0; i < 2; i++)
    {
        s[i].input();
        s[i].display();
        s[i].findAvg();
        s[i].showAvg();
    }

    return 0;
}