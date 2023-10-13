#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("data elements are :::%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr!= head); // here we can't use while loop bcz this condition will get satisfied firstly and will get out of the while loop,but do while loop will executes at least once!
}

struct node *insert_at_first(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head->next;
    ptr->data = data;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;

    head=ptr;
    return head;



}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = head;
    printf("-------------------::The linked list is::-----------------\n");
    linkedlistTraversal(head);//here we can't do head= traversal function call bcz the traversal function is void type
    printf("After Linked list Traversal::::");
    head = insert_at_first(head,59);
    printf("linked list after insertion at first::\n");
    linkedlistTraversal(head);


    return 0;
}