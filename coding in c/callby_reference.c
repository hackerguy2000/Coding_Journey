#include<stdio.h>
int swap(int *x, int *y)
{
int temp;
temp=*x;//dereferencing the pointer x, and storing the value of x in the temp variable
*x=*y;//x is equal to y that is now value of x would be equals to y
*y=temp;
}








int main()
{
int a=12,b=15;
printf("The specified value of a and b is:::%d and %d\n",a,b);
swap(&a,&b);
printf("The new value of a and b is:::%d and %d ",a,b);
return 0;
}