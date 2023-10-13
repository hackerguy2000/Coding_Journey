#include<stdio.h>
int func(int array[])
{
for (int i=0;i<3;i++)
{
    printf("the value at %d is %d\n", i,array[i]);
}
array[2]=101;
return 0;
}

int main()
{
int arr[]={12,54,85};
printf("The value at index 0 is : %d\n", arr[0]);
func(arr);
printf("The value at index 3 after func function runnning is : %d\n", arr[2]);
}
//by passing array as arguments in the function , it automatically passes through address by default pointer . so we can change the vlue of the array in function and it will be changed as well 