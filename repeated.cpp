#include<iostream>
using namespace std;

int main(){
    int a[10];
    cout<<"Enter the values in the 10 sized array one by one: "<<endl;
    for ( int i = 0; i < 10; i++)
    {
        cin>>a[i];

    }


    cout<<"Your entered array is: "<<endl;
    for ( int i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";

    }

    // Selective Printing
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for(int j=i;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    int n,j,c;
    for (int i = 0; i < 10; i++)
    {
        
        n=a[i];
        j=i;
        c=0;
        while(a[j]==n){
            c++; j++;
            if(j==9)
                c=1;
        }
        cout<<"\n"<<n<<" is present "<<c<<" number of times."<<endl;
        i=j-1;       
    }
    
     
    return 0;
}