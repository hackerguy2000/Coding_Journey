#include<stdio.h>
#include<stdlib.h>

struct Node
{
int data;//to store the data part of a node 
struct Node *next;//to point next structure type node of the linked list // Self referential structure
struct Node *prev;

};
void linkedlistTraversal(struct Node *head)//head is accepted as pointer ptr
{
    struct Node *ptr=head;
    do
    {
     printf("\tThe data is:::%d\n",ptr->data);
     ptr=ptr->next;
    } while (ptr!=NULL);
    

}
struct Node *insert_at_first(struct Node *head,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    head->prev=ptr;

    ptr->prev=NULL;

head=ptr;
return head;
}
struct Node *insert_at_an_index(struct Node *head, int data,int index)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    
   //struct Node *p2=head->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        p2=p2->next;
        i++;
    }
    ptr->data=data;
  ptr->next=p->next;
    ptr->prev=p;
    p->next=ptr;
    p2->prev=ptr;
    /*ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    ptr->prev=p;
    ptr=ptr->next;
    ptr->prev=p->next;*/

    return head;
    
  printf("the data of the newly created node is::::%d",ptr->data);
    return head;
}
    struct Node *insert_after_given_node(struct Node *head,struct Node *prev_node, int data)
    {
       struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
       ptr->data=data;
       ptr->next=prev_node->next;
       prev_node->next=ptr;
       
      ptr->prev=prev_node;

      
      return head;

    }

struct Node *deletion_at_index(struct Node*head,int index)
{//index is like which connections do you want to break
    struct Node *p=head;
    struct Node *p2=head->next;
    int i=0;
    while(i!=index-1)
    {
       p=p->next;
       p2=p2->next;
       i++;
    }
    p->next=p2->next;
    p2->next=p;
    free(p2);
    return head;

}






int main()
{
    //example of creating 3 nodes to create a linked list        
    struct Node *N1;
    struct Node * N2;
    struct Node *N3;
    struct Node *N4;//three pointer variable has been declared in order to create 3 node as these are self referential pointer so we need to take strcut data type
    struct Node *head;
     //and name as the structure we made...
    
    
    N1=(struct Node *)malloc(sizeof(struct Node));//dynamically memory allocated for 1st node pointed by head
    N2=(struct Node *)malloc(sizeof(struct Node));
    N3=(struct Node *)malloc(sizeof(struct Node));
     N4=(struct Node *)malloc(sizeof(struct Node));

    N1->data=12;
    N1->prev=NULL;
    N1->next=N2;
    

    N2->data=45;
    N2->prev=N1;
    N2->next=N3;

    N3->data=75;
    N3->prev=N2;
    N3->next=N4;
    
    N4->data=833;
    N4->prev=N3;
    N4->next=NULL;

    head=N1;
    linkedlistTraversal(head);//head is a pointer which points the first node of the linked list passing so that linked list can be accessed
head=insert_at_first(head,999);
printf("The new linked list after insertion at beginning is:::");
 linkedlistTraversal(head);
 head=insert_at_an_index(head,100,3);
 printf("The new linked list after insertion is at a given index:::");
 linkedlistTraversal(head);
 head=insert_after_given_node(head,N2,786);
 printf("The new linked list after insertion after a given Node:::\n");
 linkedlistTraversal(head);
head=deletion_at_index(head,3);
printf("The new linked list after deletion at a given index:::\n");
 linkedlistTraversal(head);
return 0;

}
