#include <stdio.h>
#include <stdlib.h>
struct Node
{   
    int data;
    struct Node *next;
};

struct Node* Create(struct Node* HEAD){
    struct Node* NEW, *PTR;
    char choice;
    NEW = (struct Node *)malloc(sizeof(struct Node));
    
    printf("\nEnter data: ");
    scanf("%d", &NEW->data);
    fflush(stdin);
    NEW->next = NULL;
    HEAD = NEW;
    PTR = HEAD;
    printf("Do you want to add another node?(Y/N): ");
    scanf("%c", &choice);
    while (choice == 'Y' || choice == 'y')
    {
        NEW = (struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter data: ");
        scanf("%d", &NEW->data);
        fflush(stdin);
        NEW->next = NULL;
        PTR->next = NEW;
        PTR = PTR->next;
        printf("Do you want to add another node?(Y/N): ");
        scanf("%c", &choice);
    }
    return HEAD;
}
struct Node* insertbegin(struct Node* HEAD, int new_data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = HEAD;
    ptr->data = new_data;
    return ptr;
}

struct Node* deletestart(struct Node *HEAD)
{
    struct Node *p = HEAD;
    p = p->next;
    free(HEAD);

    return p;
}
struct Node* insertafterElement(struct Node* HEAD, int new_data,int x){
    struct Node* ptr = ( struct Node*)malloc(sizeof(struct Node));
    ptr->next = HEAD;
    
      
}

void display(struct Node* ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}


struct Node* deletefromend(struct Node *HEAD)
{
   
    struct Node* ptr = ( struct Node*)malloc(sizeof(struct Node));
     struct Node* loc = ( struct Node*)malloc(sizeof(struct Node));
    ptr->next = HEAD;
    while (ptr->next!=NULL)
    {
        loc=ptr;
        ptr=ptr->next;
    }
    loc->next=NULL;

    
}

int main()
{
    struct Node *HEAD;
    int choice, insert;    
    printf ("1. Create a LinkedList\n");
    printf ("2. Insert the begining node\n");
    printf ("3. Delete the beginning node\n");
    printf ("4. Insert after a given element\n");
    printf ("5. Delete the node from end\n");
    printf ("6. Delete the node from kth position\n");
    scanf ("%d", &choice);

        if (choice ==1){
            HEAD = Create(HEAD);
        }
        else if (choice==2){
            int value;
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            HEAD = insertbegin(HEAD, value);
        }
        else if (choice==3){
            HEAD = deletestart(HEAD);
        }
        else if (choice==4){
            int x,val;
            printf("Enter the element : ");
            scanf("%d",&x);
            printf("Enter the value to insert: ");
            scanf("%d",&val);

            HEAD = insertafterElement(HEAD,val,x);
        }
        else if (choice==5){
            HEAD = deletefromend(HEAD);
            
        }
        else if (choice==6){
            
        }
       
        display(HEAD);

    }