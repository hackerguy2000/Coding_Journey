#include <stdio.h>

int main()
{
    int a = 345;
    float b = 8.33332;
    void *ptr; // void pointer has been declared
    ptr = &a;
    printf("The value of a is :::%d\n\n", *((int *)ptr));//typecasting of void pointer to get the value the void pointer points to.
    ptr = &b;
    printf("The value of b is :::%f", *((float*)ptr));
    return 0;
}