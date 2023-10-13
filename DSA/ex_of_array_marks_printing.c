#include<stdio.h>
int main()
{
 int marks[10];
for(int i=0;i<10;i++)
{
    printf("Enter the marks of the  students :");
    scanf("%d", &marks[i]);
}
for(int i=0;i<10;i++)
{
    printf("\nThe marks of the %d number student are::%d\n",i+1,marks[i]);
}
 return 0;

}