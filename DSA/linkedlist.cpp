#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void print_linkedlist(struct node *ptr)
{
    if(ptr->next==NULL)
    {
        cout<<"The linked list is empty"<<endl;
    }
    while (ptr != NULL)
    {
        cout << "The data value of the first node is::" << ptr->data << endl;
        ptr=ptr->next;
    }
}

int main()
{ // declaring pointer pointing each node
    struct node *head;
    struct node *second;
    struct node *third;
//dynamically allocating memory for each node
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data=105;
    head->next=second;
    second->data=222;
    second->next=third;
    third->data=12;
    third->next=NULL;

    print_linkedlist(head);

    return 0;
}
