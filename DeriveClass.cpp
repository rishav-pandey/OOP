#include<iostream>
using namespace std;
class student
{   public:
    char name[30];
    int roll,age;

};
class test : public student
{   public:
    int marks[40];
    void storeMarks()
    {
        cout<<"Enter name of student :";
        cin>>name;
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter age:";
        cin>>age;
        for(int i=0 ;i<5 ;i++ )
        {
            cout<<"Enter mark of subject "<<(i+1);
           cin>>marks[i]; 
        }
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"roll no:"<<roll<<endl;
        cout<<"age:"<<age<<endl;
        for(int i=0 ;i<5  ;i++)
        {
            cout<<"Mark of "
        }
        
        
    }

};
int main()
{
    test t;
    t.storeMarks();
    return 0;
}