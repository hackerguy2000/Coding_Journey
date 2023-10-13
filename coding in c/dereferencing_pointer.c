#include <stdio.h>  
int main()  
{  
    int x=19;  
    int *ptr;  
    ptr=&x;  
    *ptr=28;  
    printf("value of x is : %d\n", *ptr); 
    printf("The address of the variable x is:::%d\n", ptr);
    printf("The address of the variable x is ::%d", &x);
    return 0;
}