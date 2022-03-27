#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    char programName;

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate Node to Heap Memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 9;
    head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 26;
    third->next = fourth;

    fourth->data = 35;
    fourth->next = fifth;

    fifth->data = 42;
    fifth->next = NULL;

    linkedListTraversal(head);

    return 0;
}