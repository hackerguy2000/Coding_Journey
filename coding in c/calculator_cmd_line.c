#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *operation;        // pointer take as character so that we can take the argument add, mul, subs, div in the program as a pointer
    int num1, num2; // for the next two numbers
    operation = argv[0];    // character pointer is taking the char variable as argument from command line
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    printf("The operation is:::%s\n", operation);
    printf("The num1 is:::%d\n", num1);
    printf("The num2 is:::%d\n", num2);
    if (strcmp(operation, "add") == 0)
    {
        printf("The sum is::%d\n", num1 + num2);
    }
    else if (strcmp(operation, "substract") == 0)
    {
        printf("The substraction is ::%d\n", num1 - num2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("The multiplication of two numbers:%d\n", num1 / num2);
    }
    return 0;
}