
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;

};

void insert(struct Node *head,int a){
    if(head==NULL){
        head->data=a;
        head->prev=head;
        head->next=head;
    }
    else{
        struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
        temp=NULL;
        temp->data=a;
        temp->next=head;
        head->prev=temp;
        head->next=temp;
        temp->prev=head;
    }
}


int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    head=NULL;

    insert(head,12);
    insert(head,13);
    
    return 0;

}