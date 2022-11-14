#include <iostream>
using namespace std;
  
int main()
{
    int x = 10; 
    char y = 'a'; 
     double x1 = 1.2;
  
   
    x = x + y;
  
    float z = x + 1.0;
     int sum = (int)x1 + 1;

   cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
          cout << "Sum = " << sum;
  
    return 0;
}