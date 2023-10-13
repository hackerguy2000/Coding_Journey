#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("\nThe value of nodes are respectively::%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insert_at_first(struct node *ptr1, int data) // I have accepted the address of the head node in ptr1 variable
// the type of the function is of struct node bcz it is returning a pointer head;
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // to allocate memory and point it to create new node which will be new head of our linked list
    ptr->data = data;                                              // data of the ptr =data which accepted the function
    ptr->next = ptr1;                                              // here ptr1=pointer of the head node accepted in the function argument
    return ptr;
}
struct node *insert_at_index(struct node *head, int data, int index) // which is nothing but at an index
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    printf("The value of the index(inserted at) and the data of newly node is :::%d %d", index, ptr->data);
    return head;
}

struct node *insert_at_end(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insert_after_a_given_node(struct node *head, struct node *prev_node, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prev_node->next;
    prev_node->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 78;
    head->next = second;

    second->data = 88;
    second->next = third;

    third->data = 101;
    third->next = NULL;
    printf("The linked list is::\n");
    linkedlistTraversal(head);
    head = insert_at_first(head, 59);
    printf("Now the data of the new head node after inserting at first is :%d \n", head->data);
    linkedlistTraversal(head);

    head = insert_at_index(head, 99, 2);
    printf("After inserting a node at a given index the linked list is:\n\n\n");
    linkedlistTraversal(head);
    head = insert_at_end(head, 1987);
    printf("the linked list after adding a node at last:::");
    linkedlistTraversal(head);
    head = insert_after_a_given_node(head, second, 975);
    printf(" inserting After a given node::::\n");
    linkedlistTraversal(head);

    return 0;
}