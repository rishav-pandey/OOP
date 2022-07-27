#include<stdio.h>
int main(){
    int a[100],len;
    printf("How many elements are there ? ");
    scanf("%d",&len);
    printf("\nEnter the array elements one by one: ");
    
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&a[i]);
        
    }
    int max=a[0],min=a[0],sum=0;

    for (int i = 0; i < len; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum=sum+a[i];
    }

    float avg=sum/len;

    printf("\n MAX: %d MIN: %d SUMMATION: %d AVERAGE: %f",max,min,sum,avg);
 
    return 0;

}