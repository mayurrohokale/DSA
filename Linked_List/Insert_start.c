#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;


void addFirst(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;

    head = newnode;
}

int main()
{

    struct node  *middle, *last, *temp;
   
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 1;
    middle->data = 2;
    last->data = 3;

    head->next = middle;
    middle->next = last;
    last->next = NULL;

    temp = head;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    
    addFirst(20);
    temp = head;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}