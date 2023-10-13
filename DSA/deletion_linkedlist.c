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
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
    struct node *ptr = head;

    head = head->next;
    free(ptr);
    return head;
}

// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        qtr = qtr->next; // qtr ek kadam agey hoga ptr sey bcz we have already defined qtr to be prt->next or head->next
        i++;
    }

    ptr->next = qtr->next;
    free(qtr);
    return head;
}

// Case 3: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    while (qtr->next != NULL)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    ptr->next = NULL;
    free(qtr);
    return head;
}
struct Node *delete_at_given_value(struct Node *head, int value)
{
    struct Node *ptr = head;
    struct Node *qtr = head->next;
    while (qtr->data != value && qtr->next != NULL)
    {
        ptr = ptr->next;
        qtr = qtr->next;
    }
    if (qtr->data == value)
    {
        ptr->next = qtr->next;
        free(qtr);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    // head = deleteFirst(head); // For deleting first element of the linked list
    head = deleteAtIndex(head, 2);
    head = deleteAtLast(head);

    printf("Linked list after deletion\n");
    linkedListTraversal(head);
    head = delete_at_given_value(head, 3);
    printf("The linked list after deletion at a particular value is::\n");
    linkedListTraversal(head);

    return 0;
}