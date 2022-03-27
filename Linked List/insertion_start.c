#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// function for Traversal
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// function to insert at First
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

int main()
{
    // Initializing Node Pointers
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate to Heap Memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Putting Value in Node Pointers
    head->data = 12;
    head->next = second;

    second->data = 25;
    second->next = third;

    third->data = 39;
    third->next = NULL;

    // running Insert At First
    head = insertAtFirst(head, 90);

    // running Travesal
    linkedListTraversal(head);

    return 0;
}