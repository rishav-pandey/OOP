#include <stdio.h>
#include <stdlib.h>

// A structure to represent a stack
struct Stack
{
    int top;
    int capacity;
    int *array;
};

struct Stack *createStack(int capacity)
{
    struct Stack s = (struct Stack)malloc(sizeof(struct Stack));
    s->capacity = capacity;
    s->top = -1;
    s->array = (int *)malloc(s->capacity * sizeof(int));
    return s;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

int isFull(struct Stack *s)
{
    return s->top == s->capacity - 1;
}

void push(struct Stack *s, int item)
{
    if (isFull(s))
    {
        printf("Stack is full\n");
        return;
    }

    s->array[++s->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return 0;
    }

    return s->array[s->top--];
}

int peek(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return 0;
    }

    return s->array[s->top];
}

struct Stack *marge(struct Stack *x, struct Stack *y)
{
    struct Stack *res = createStack(x->capacity + y->capacity);

    while (!isEmpty(x))
    {
        push(res, peek(x));
        pop(x);
    }
    while (!isEmpty(y))
    {
        push(res, peek(y));
        pop(y);
    }
    return res;
}

int main()
{
    struct Stack *s1 = createStack(3);

    int ch = 0;
    int val;
    while (1)
    {
        printf("Enter your choice:\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Is Empty\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a value:\n");
            scanf("%d", &val);
            push(s1, val);
            break;
        case 2:
            printf("%d popped from stack\n", pop(s1));
            break;
        case 3:
            if (isEmpty(s1))
            {
                printf("Stack is Empty\n");
            }
            else
            {
                printf("Stack is not Empty\n");
            }
            break;
        case 4:
            // printf("%d top from stack\n", peek(s1));
            while (!isEmpty(s1))
            {
                printf("%d top from stack\n", peek(s1));
                pop(s1);
            }
            break;
        case 5:
            return 0;
        default:
            printf("Wrong choice Try again !!!!\n");
        }
    }

    return 0;
}