#inlude<stdio.h>
int main()
{
    int arr[30];
    int n
    printf("Enter the size :");
    scanf("%d",&n);
    printf("Enter the array :");

    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
       
    }
  
    for(int i=0;i<n;i++){
   for(j = i+1; j < n; j++){
      if(a[i] == a[j]){
         for(k = j; k <n; k++){
            a[k] = a[k+1];
         }
         j--;
         n--;
        
      }
   }
}
}
