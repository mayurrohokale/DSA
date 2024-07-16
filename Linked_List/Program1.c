#include<stdio.h>

struct node {
    int data;
    struct node* next;
};

void display(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
        }
}

int main()
{
    struct node* first ;
    struct node* second ;
    struct node* third ;
    struct node* fourth;

    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(first);


    return 0;

}