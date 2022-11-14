#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imaginary;
};
int main()
{
    complex com[10];
    cout << "ENTER THE REAL AND IMAGINARY PART OF COMPLEX NUMBER : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> com[i].real ;
        cin>> com[i].imaginary;cout<<endl;
    }
    cout << "COMPLEX NUMBER'S ARE : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << com[i].real << " + " << com[i].imaginary << "i" << endl;
    }
    return 0;
}