#include<stdio.h>
int main()
{ 
    printf("Hello World!!!");//*here this hello world would not get printed because the printf for hello world is not under label
    label:
    printf("\nThis is the line of exmple for GoTo Statement!\n");
    goto label;
    return 0;

}