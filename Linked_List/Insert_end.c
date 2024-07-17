#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

// insert Node At start
void addFirst(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;

    head = newnode;
}

// insert Node at Last
void addLast(int val)
{
    struct node *lastnode = malloc(sizeof(struct node));
    lastnode->data = val;
    lastnode->next = NULL;
    if (head == NULL)
    {
        head = lastnode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = lastnode;
};

int main()
{

    struct node *middle, *last, *temp;

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
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    addFirst(20);
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    addLast(40);
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}