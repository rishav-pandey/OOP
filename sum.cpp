#include<iostream>
#include <conio.h>
using namespace std;

int main(){
    int a[10],evenSum=0,oddSum=0;
    cout<<"Enter the values in the 10 sized array one by one: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            evenSum=evenSum+a[i];
        else    
            oddSum=oddSum+a[i];

    }

    cout<<"Your entered array is: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";

    }

    cout<<"\nThe sum of the even numbers is: "<<evenSum<<endl;
    cout<<"\nThe sum of the odd numbers is: "<<oddSum<<endl;
    
return 0;
}