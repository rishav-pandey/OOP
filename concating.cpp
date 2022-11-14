#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    int len;
    char *name;
    public:
    mystring()
    {
        len=0;
        name=new char;
    }
    mystring(char *s)
    {
        name=new char[strlen(s)+1];
        len=strlen(s);
        strcpy(name, s);
    }

    ~mystring()
    {
        delete name;
    }
    void join(mystring &s1, mystring &s2)
    {
        len=s1.len+s2.len;
        name=new char[len+1];
        strcpy(name, s1.name);
        strcat(name, s2.name);
    }
    void display()
    {
        cout<<"The string is: "<<name<<endl;
    }
    void display1()
    {
        cout<<"The concatenated string is: "<<name<<endl;
    }
};

int main()
{
    mystring c1("Loveable"), c2("KIITian"), c3;
    c3.join(c1,c2);
    c1.display();
    c2.display();
    c3.display1();
    return 0;
}