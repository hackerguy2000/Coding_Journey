#include<stdio.h>

#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning%d\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1,2)); // Testing the function
    int (*fPtr) (int, int); // Declaring a function pointer that takes two integer value as arguments (as two integers are taking two value of sum function)
    fPtr = &sum; // Creating a function pointer that points to a function called sum
    int d = (*fPtr)(8, 6); // Dereferencing a function pointer
    printf("The value of d is %d\n", d);
    return 0;
}