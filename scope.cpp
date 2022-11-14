#include<iostream>
using namespace std;

class demonstrate{
    
    public:
    inline int square(int );
    inline int cube(int );
};

inline int demonstrate:: square(int a){
        return a*a;
    }
inline int demonstrate:: cube(int a){
    return a*a*a;
}

int main(){
    demonstrate a;
    int x=2,y=3;
    cout<<"x is "<<x<<" y is "<<y<<endl;
    cout<<"square of x is "<<a.square(x)<<" and cube of y is "<<a.cube(y)<<endl;
    return 0;
}