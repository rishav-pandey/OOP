#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedlistraversal(struct node*head)
{
    struct node *ptr=head;
    do{
        printf("ELEMENTS IS:%d\n",ptr->data);
        ptr=ptr->next;
        
    }while(ptr!=head);
}

int main()
{
   struct node *head;
   struct node *second;
   struct node*third;
   struct node*fourth;

   head=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   third=(struct node *)malloc(sizeof(struct node));
   fourth=(struct node *)malloc(sizeof(struct node));

   head->data=13;
   head->next=second;

   second->data=14;
   second->next=third;

   third->data=16;
   third->next=fourth;

   fourth->data=18;
   fourth->next=head;

   linkedlistraversal(head);

}