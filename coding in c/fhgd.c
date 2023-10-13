#include<stdio.h>
int main()
{
printf("Helllo world\n");
int i,age;
for(i=0;i<18;i++)
{
printf("Enter your age:%d\n\n",i);
scanf("%d",&age);
    if(age>18)
    {
        continue;
        
    }

    printf("Continue statement print will be there when condition gets false\n\n");
}



return 0;
}