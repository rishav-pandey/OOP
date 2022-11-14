#include<iostream>
using namespace std;
class student 
{
    int rollno,m1,m2,m3,m4,m5;
    char name;
    int total;
    float avg;
    public:
    void get()
    {
cout<<"Enter Name:";
cin>>name;
cout<<"Enter roll no:";
cin>>rollno;
cout<<"Enter marks:";
cin>>m1>>m2>>m3>>m4>>m5;

    }
    void findavg()
    {
        total=m1+m2+m3+m4+m5;
        avg=total/5;

    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Marks:"<<m1<<m2<<m3<<m4<<m5<<endl;
        cout<<"Total:"<<total<<endl;
        cout<<"avg:"<<avg<<endl;

    }

};

int main()
{
    student a;
    a.get();
   
    a.findavg();
     a.display();

}