#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int roll;
    struct student *prev;
    struct student *next;
};
struct student *head;
void add_beg()
{
    struct student *s;
    s = (struct student *)malloc(sizeof(struct student));
    printf("Enter the Name :");
    scanf("%s", s->name);
    printf("Enter the roll :");
    scanf("%d", &s->roll);
    if (head == NULL)
    {
        head = s;
    }
    else
    {
        s->next = head;
        head->prev = s;
        head = s;
    }
}
void add_end()
{
    s = (struct student *)malloc(sizeof(struct student));
    printf("Enter the Name :");
    scanf("%s", s->name);
    printf("Enter the roll :");
    scanf("%d", &s->roll);
    if (head == NULL)
    {
        head = s;
    }
    else
    {
        for (temp = head; temp->next != NULL; temp = temp->next)
        {
        }
        temp->next = s;
        s->prev = temp;
    }
}

void del_beg()
{
    if (head == NULL)
    {
        printf("Node is empty\n");
    }
    else if (head->next == NULL)
    {
        head = head->next;
    }
    else
    {

        head->next->prev == NULL;
        head = head->next;
    }

    void del_end()
    {
        int i = 0;
        struct student *temp;
        if (head == NULL)
        {
            printf("Node is empty\n");
        }
        for (temp = head; temp->next != NULL; temp = temp->next)
        {
            i++;
        }
        if (i == 1)
        {
            head == NULL;
        }
        else
        {
            for (temp = head; temp->next->next != NULL; temp = temp->next)
            {
            }
            temp->next = NULL;
        }
    }

    void display()
    {
        int rollf;
        struct student *temp;
        printf("Enter thr age to find :");
        scanf("%d", &rollf);
        for (temp = head; temp != NULL; temp = temp->next)
        {
            if (temp->roll == rollf)
            {
                printf("%s", temp->name);
                printf("%d", temp->roll);