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
    s=(struct student*)malloc(sizeof(struct student));
    printf("Enter the Name :");
    scanf("%s",s->name);
    printf("Enter the roll :");
    scanf("%d",&s->roll);
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        s->next=head;
        head->prev=s;
        head=s;
    }
}
void add_end()
{
    struct student *s;
    s=(struct student*)malloc(sizeof(struct student));
    struct student *temp;
    printf("Enter the Name :");
    scanf("%s",s->name);
    printf("Enter the roll :");
    scanf("%d",&s->roll);  
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        for(temp=head;temp->next!=NULL;temp=temp->next)
        {
        }
        temp->next=s;
        s->prev=temp;
    }
}

void del_beg()
{
    if(head==NULL)
    {
        printf("Node is empty....\n");
    }
    else if(head->next==NULL)
    {
        head=head->next;
    }
    else
    {
        
        head->next->prev=NULL;
        head=head->next;
        
    }
    
}
void del_end()
{
    int i=0;
    struct student *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        i++;
    }
    //printf("%d",i);
    
    if(i==1)
    {
        
        head=NULL;
    }
    else
    {
        for(temp=head;temp->next->next!=NULL;temp=temp->next)
    {
        
    }
        temp->next=NULL;
    }
}
//search and display
void search_display()
{
    int rollf;
    struct student *temp;
    printf("Enter thr age to find :");
    scanf("%d",&rollf);
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->roll==rollf)
        {
            printf("%s",temp->name);
            printf("%d",temp->roll);
            break;
        }
    }
}   
//search and delete
void search_del()
{
    int rollf;
    struct student *temp;
    printf("Enter thr age to find :");
    scanf("%d",&rollf);
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->roll==rollf)
        {
            if(temp->prev==NULL)
            {
                head=temp->next;
                if(temp->next!=NULL)
                {
                    temp->next->prev=NULL;
                }
            }
            else if(temp->next==NULL)
            {
                temp->prev->next=NULL;
            }
            else
            {
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
            }
        }
    }
}   
void search_insert()
{
    struct student *s;
    s=(struct student*)malloc(sizeof(struct student));
    int rollf;
    struct student *temp;
    printf("Enter thr roll to find :");
    scanf("%d",&rollf);
    printf("Enterthe name :");
    scanf("%s",s->name);
    printf("Enter the roll :");
    scanf("%d",&s->roll);
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->roll==rollf)
        {
            if(temp->next!=NULL)
            {
                s->next=temp->next;
                temp->next->prev=s;
                temp->next=s;
                s->prev=temp->prev;
            }
            else if(temp->next==NULL)
            {
                temp->next=s;
                s->prev=temp;
            }
        }
    }
}   
    
//search replace and display
void search_replace()
{
    
    printf("search the age and replace:....");
    int nage;
    int rollfn;
    struct student *temp;
    printf("Enter thr age to find :");
    scanf("%d",&rollfn);
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->roll==rollfn)
        {
            printf("Enter the New name :");
            scanf("%s",temp->name);
            printf("Enter the new age :");
            scanf("%d",&temp->roll);
         
            
            break;
        }
    }
}
void display()
{
    struct student *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%s",temp->name);
        printf("%d\n",temp->roll);
    }
}
void ulta_display()
{
    struct student *temp;
    for(temp=head;temp->next!=NULL;temp=temp->next)
    {
        
    }
    struct student *temp1;
    for(temp1=temp;temp1!=NULL;temp1=temp1->prev)
    {
        printf("%s",temp1->name);
        printf("%d\n",temp1->roll);
    }
}
int main()
{
    int ch;
    do
    {
        printf("1 for add to begening :\n");
        printf("2 for add to end :\n");
        printf("3 for delete to begening :\n");
        printf("4 for delete to end :\n");
        printf("5 for replace :\n");
        printf("6 for search and display :\n");
        printf("7 for search and delete: \n");
        printf("8 for search and insert:\n");
        printf("9 for display :\n");
        printf("10 for ulta_display:\n");
        printf("11 for exit\n");
        printf("Enter your Choice :\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: add_beg();
                    break;
            case 2: add_end();
                    break;
            case 3: del_beg();
                    break;
            case 4: del_end();
                    break;
            case 5: search_replace();
                    break;
            case 6: search_display();
                    break;
            case 7: search_del();
                    break;
            case 8: search_insert();
                    break;
            case 9: display();
                    break;
            case 10: ulta_display();
                    break;
            case 11: exit(0);
                    
            default: printf("Invalid choice\n");
            break;
            
        }
    }while(ch);
    
    return 0;
}
