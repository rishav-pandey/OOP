#include<stdio.h>

struct student{
    char name[10];
    int marks;
}stud[20];

int main(){
    int sum=0,max,loc=0;
    float avg;

    printf("Enter the name and marks(out of 100) of 5 students one by one: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d",&stud[i].name,&stud[i].marks);
    }
    printf("\n\n\n");

    max=stud[0].marks;
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d\n",stud[i].name,stud[i].marks);

        sum=sum+stud[i].marks;
        if(stud[i].marks>max){
            max=stud[i].marks;
            loc=i;
        }
    }
    printf("\n\n\n");
    avg=sum/5;
    printf("Average marks: %f",avg);
    printf("\n\n\n");

    printf("Student name with max marks: %s   %d", stud[loc].name,max);
    printf("\n\n\n\n");
    for (int i = 0; i < 5; i++)
    {
        if(stud[i].marks<50)
            printf("Name: %s   Marks: %d\n", stud[i].name,stud[i].marks);
    }
    
    
    return 0;

}