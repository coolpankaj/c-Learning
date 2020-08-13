#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printlist(struct node *ptr)
{
    while (ptr)
    {
        printf("data:  %d\n", ptr->data);
        // printf("data:  %d\n", ptr);

        ptr = ptr->next;
    }
}

int main()
{
    // printf("%d\n", sizeof(int));

    // printf("%d\n", sizeof(struct node));

    struct node *head = (struct node *)malloc(sizeof(struct node));
    // struct node *first   =    (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    printlist(head);

    return 0;
}