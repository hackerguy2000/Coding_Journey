#include <stdio.h>

#define size 10

int stack[size], top;
void push(int[], int); /* Function Prototype */
void pop(int[]);       /* Function Prototype*/
void peek(int[]);
void display(int[]);

int main()
{
    // int num = 0;
    // int option = 0;
    top = -1;
    int option = 0;

    int exitProgram = 0; // Set this to 1 to exit the loop and terminate the program

    while (!exitProgram) // Alternative to while(1), loop will run until exitProgram becomes true (1)
    {
        printf("\n1: Push \n2: Pop \n3: Display \n4: Peek \n5: Exit\n Enter one of your choices:");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter the item you want to insert in stack :");
            int num;
            scanf("%d", &num);
            push(stack, num);
            break;

        case 2:
            pop(stack);
            break;

        case 3:
            display(stack);
            break;

        case 4:
            peek(stack);
            break;

        case 5:
            exitProgram = 1; // Set exitProgram to 1 to exit the loop and terminate the program
            break;

        default:
            printf("\nPlease enter a correct option\n");
            break;
        }
    }
return 0;
}
    void push(int stack[], int num)
    {
        if (top == size - 1)
        {
            printf("The stack is full , can not push any element now\n");
        }
        stack[++top] = num;
    }
    void pop(int stack[])
    {
        if (top == -1)
        {
            printf("The stack is empty and nothing to pop\n");
            return;
        }
        int val = stack[top--];
        printf("The value of the popped element is ::%d", val);
    }
    void peek(int stack[])
    {
        if (top == -1)
        {
            printf("the stack is empty and nothing to show\n");
            return;
        }
        int value = stack[top];
        printf("The top element of the stack is ::%d\n", value);
    }
    void display(int stack[])
    {
        for (int i = top; i > -1; i--)
        {
            printf("%d", stack[i]);
        }
    }


