#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; // integer pointer by which we can allocate dynamic memory
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {

        return 1;
    }
    else
    {

        return 0;
    }
}

void show(struct stack *ptr)
{
    for (int i = ptr->top; i >= 0; i--)
    {
        printf("The value of %d th element in array is %d\n", i, ptr->arr[i]);
    }
    if (ptr->top == -1)
    {
        printf("Stack is empty\n");
    }
}
void push(struct stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("the stack is in overflow condition");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value; // value mein jo h wo ptr->arr[ptr->top] mein dedo
    }
}
int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("the stack is underflow;");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top - i + 1];
    }
}

int stack_top(struct stack *ptr)
{

    return ptr->arr[ptr->top]; // why not only top in arr[]
}

int stack_bottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int main()
{ /*

    struct stack s;// s is a variable of type structure  stack
    s.size=80;//size of the array would be 80
    s.top=-1;// the top would be initialized with -1 implies that the stack is empty
    s.arr=(int*)malloc(s.size*sizeof(int)); //alloation of the stack through malloc

    */

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack)); // allocation has taken place in heap, work will be done in heap as well
    // pointer is taken of type struct stack so that it can be passed through function easily and an easily get modified so that we can use call by reference concept
    sp->size = 80;                                   // size of the stack
    sp->top = -1;                                    // indicator whether the stack is empty or not
    sp->arr = (int *)malloc(sp->size * sizeof(int)); // allocation of array in stack of size of the stack
    push(sp, 55);
    push(sp, 66);
    push(sp, 77);
    push(sp, 88);
    show(sp);
    int popped = pop(sp);
    printf("After poping the element the stack is like::\n");
    show(sp);
    printf("The value after doing the operation peek is::%d\n", peek(sp, 2));

    printf("The top element of the stack is:: %d\n",stack_top(sp));

    return 0;
}