#include<stdio.h>
int takenumber();
int main()
{
int c;
c=takenumber();
printf("The number entered is : %d",c);

}
int takenumber()
{
    int i;
    printf("Enter the number you want :");
    scanf("%d", &i);
    return i;

}