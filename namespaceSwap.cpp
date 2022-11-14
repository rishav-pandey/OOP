#include<iostream>
using namespace std;

namespace first{
    void swap(int &a, int &b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
}

namespace second
{
    void swap( char &x, char &y){
        char temp;
        temp=x;
        x=y;
        y=temp;
    }
} 


int main(){
    int a=1,b=2;
    cout<<"a is "<<a<<" and b is "<<b<<endl;
    first::swap(a,b);
    cout<<"After swap a is "<<a<<" and b is "<<b<<endl;
    
    char x='S',y='C';
    cout<<"x is "<<x<<" and y is "<<y<<endl;
    second::swap(x,y);
    cout<<"After swap x is "<<x<<" and y is "<<y<<endl;
    return 0;
}