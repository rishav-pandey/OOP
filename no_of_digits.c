#include <stdio.h>
int countDigit(int x)
{
    int a,b=0;
    while(x>0)
    {
        x=x/10;
        b++;

    }
   return b;
}
int main()
{
    int no1,a;
    printf("Enter the number :");
    scanf("%d",&no1);
    
     a=countDigit(no1);
     printf("No of digit is %d",a);
    return 0;
}