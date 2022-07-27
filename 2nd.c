#include<stdio.h>

struct student
{
    char name[10];
    int roll;
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
}stud[5];


int main()
{   
    int  n;
    for (int i = 0; i < n; i++)
    {
        
        printf("Enter the name , roll and marks in 5 subjects of the student: ");
        scanf("%s %d %d %d %d %d %d",&stud[i].name,&stud[i].roll,&stud[i].marks1,&stud[i].marks2,&stud[i].marks3,&stud[i].marks4,&stud[i].marks5);

    }

    for (int i = 0; i < n; i++)
    {
       
        printf(" Name: %s Roll: %d  Marks: %d %d %d %d %d\n\n",stud[i].name,stud[i].roll,stud[i].marks1,stud[i].marks2,stud[i].marks3,stud[i].marks4,stud[i].marks5);

    }
    
    return 0;
}
