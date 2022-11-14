#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double a=3.14567;
    string name="KIIT";
    //setprecision
    cout<<a<<setprecision(4.3)<<a<<endl;

    //setw
    cout<<name<<setw(10)<<name<<endl;

    //setfill
    cout<<name<<setfill('*')<<setw(10)<<name<<endl;    

    return 0;
}