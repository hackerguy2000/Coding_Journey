#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int data)
{
    if (isFull(top))
    {
        printf("Stack Overflow!");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = data;
        n->next = top;
        top = n;
    }
    return top;
}
int pop(struct node *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack Underflow!!!!!");
    }
    else
    {
        struct node *n = ptr;
        top = ptr->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int peek(int pos)
{
    struct node *ptr = top;
    for (int i = 0; i < (pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int main()
{
    // there is nothing in the linked list
    top = push(top, 67);
    top = push(top, 7);
    top = push(top, 8);
    linkedListTraversal(top);

    int popped = pop(top);
    printf("Popped element is %d\n", popped);
    linkedListTraversal(top);
    for (int i = 1; i <= 2; i++)
    {
        printf("Value at position %d is : %d\n", i, peek(i));
    }
    return 0;
}