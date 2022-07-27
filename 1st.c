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
}stud;


int main()
{
        printf("Enter the name , roll and marks in 5 subjects of the student: ");
        scanf("%s %d %d %d %d %d %d",&stud.name,&stud.roll,&stud.marks1,&stud.marks2,&stud.marks3,&stud.marks4,&stud.marks5);


        printf(" Name: %s Roll: %d  Marks: %d %d %d %d %d\n\n",stud.name,stud.roll,stud.marks1,stud.marks2,stud.marks3,stud.marks4,stud.marks5);
    
    return 0;
}