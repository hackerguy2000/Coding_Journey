#include<stdio.h>
void main()
{
 int num;
 printf("enter the number you want multiplication table::::",num);
 scanf("%d",&num);
printf("The multiplication table is:::\n");
for(int i=1;i<11;i++)
{
    printf("%d * %d= %d\n",num,i,num*i);
}

}