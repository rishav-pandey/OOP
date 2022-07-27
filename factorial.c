#include<stdio.h>

int factorial(int n){
    int i=n,fact1=1;
    while(i>0){
        fact1=fact1*i;
        i--;
    }

    return fact1;
}

int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int fact=factorial(n);

    printf("\nThe factorial of is: %d",fact);
    
    return 0;
}