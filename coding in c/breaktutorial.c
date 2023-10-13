#include<stdio.h>
int main()
{
int i,age;
for(i=0;i<18;i++)
{
printf("Enter your age:%d\n\n",i);
scanf("%d",age);
    if(age>18)
    {
        break;
    }
}

return 0;


}