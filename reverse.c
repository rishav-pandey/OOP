#include<stdio.h>

void rev(int arr[],int a){
    int temp;
    for (int i = 0; i < a/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[a-1-i];
        arr[a-1-i]=temp;
    }

    printf("\nThe reversed array is: \n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}


int main()
{
    int arr[7];
    printf("enter elements of the array: \n");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    rev(arr,7);
    return 0;
}