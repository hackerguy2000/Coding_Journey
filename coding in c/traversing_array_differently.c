#include<stdio.h>
int main()
{
int arr[6]={11,12,13,14,15,16};
int *ptr=arr;
for (int i=0;i<6;i++)
{
    printf("The value of the arrays are::%d\n",*(ptr+i));
}
return 0;
}