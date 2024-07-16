#include<stdio.h>

struct node{
    int data;
    struct node *next;
};


int main(){
    struct node *head, *middle, * last;

    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 10;
    middle->data = 20;
    last->data = 30;

    head->next = middle;
    middle->next = last;
    last->next = NULL;

    struct node *temp;
    temp = head;

    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }


}