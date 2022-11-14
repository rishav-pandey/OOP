#include<iostream>
using namespace std;
class box
{
    int length;
    int breath,height;
    public:
    void get()
    {
        cout<<"enter length and breath and height of box:";
        cin>>length>>breath>>height;
       
    }
    void  display()

    {
        cout<<"lenght:"<<length<<endl;
        cout<<"breath:"<<breath<<endl;
        cout<<"heigth:"<<height<<endl;


    }
    void findvolume()
    {
        int vol;
        vol=length*breath*height;
        cout<<"volume is :"<<vol;

    }
    };
    int main()
    {
        box b1,b2;
        b1.get();
        b1.display();
        b1.findvolume();
        b2.get();
        b2.display();
        b2.findvolume();
    }

