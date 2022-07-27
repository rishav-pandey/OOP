#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers ");
scanf("%d %d %d",&a,&b,&c);
switch(a>b && a>c)
{
    case 1 :
    printf("%d is greatest",a);
    break;
    case 0 :
    switch(b>a && b>c) 
    {
        case 1 : printf("%d is greatest",b);
        break;

        case 0 :
        switch(c>a && c>b){
            case 1 : printf("%d is  greatest ",c);
            break;
        }
    }
}
return 0;
}