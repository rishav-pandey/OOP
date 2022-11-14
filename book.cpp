#include<iostream>
using namespace std;
class book
{
    char name;
    char author;
    int price;
    int isbn;
    public:
    void get()
    {
        cout<<"name";
        cin>>name;
        cout<<"author";
        cin>>author
        cout<<"Price and isbn";
        cin>>price>>isbn;

    }
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"Price"<<price<<endl;
        cout<<"isbn:"<<isbn<<endl;

    }
};
int main()
{
    book b;
    b.get();
    b.display();

}