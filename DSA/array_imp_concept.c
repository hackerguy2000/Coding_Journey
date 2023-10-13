#include<stdio.h>
int main()
{
int arr[]={1,8,45,85,66,21};
printf("The value of array in 5th position:%d\n", arr[4]);
printf("The address of the 1st element of the array is::%d\n", &arr[0]);
printf("The address of the 2nd element of the array is::%d\n", &arr[1]);/*the difference in the address of the array will decide the type of architechture in the system, here the difference comek 4 so size of int here is 4*/
printf("The address of the 1st element of the array logically:::%d\n", arr);//coz the pointer arr points the address of the 1st element of the array by default
printf("The address of the 2nd element of the array logically:::%d", arr+1);
return 0;

}