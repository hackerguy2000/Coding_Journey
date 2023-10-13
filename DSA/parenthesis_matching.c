#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr1)
{
    if (ptr1->top == -1)

        return 1;

    else
        return 0;
}
int isFULL(struct stack *ptr)
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
void push(struct stack *ptr1, char value)
{
    if (isFULL(ptr1))
    {
        printf("The stack is Full, you can't push further more!");
    }
    else
    {
        ptr1->top++;
        ptr1->arr[ptr1->top] = value;
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int parenthesis_matching(char *ptr)
{
    struct stack *sp; // making poitnter to access structure elements
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == '(')
        {
            push(sp, '(');
        }
        else if (ptr[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }
}

int main()

{
    char *str = "(ui3)he(ui3e89370)39(e3)";
    // char *ptr = str;
   // parenthesis_matching(str);
    if (parenthesis_matching(str))
    {
        printf("matching!!!");
    }
    else
    {
        printf("Not matching!!!!!");
    }
    return 0;
}