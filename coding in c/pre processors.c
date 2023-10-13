#include <stdio.h>
#include "functionex.c"              //accessing all scrpit of the program functionex.c
#define pi 3.14                      // defining a fix value of a variable before compilation
#define SQUARE_FORMULA(rad) rad *rad // macros

int main2()
{
    printf("The multiplication of two numbers are::%d", MUL(4, 8));
    return 0;
}
