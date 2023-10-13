#include <stdio.h>

int main()
{
    int a = 69;
    int *ptr=&a;
    printf("The address of ptr in memory::%p\n", &ptr);
    printf("The address of a in memory::%p\n", &a);
    printf("The value of a in memory::%d\n", a);
    printf("The address of a in memory from ptr perspective::%p\n", ptr); // coz the ptr pointer holding the adress of a in its value area
    printf("The value of a is :::%d", *ptr);//coz asterik holds the value not address and for %d it actually picking the value but not the address of ptr
    return 0;
}

