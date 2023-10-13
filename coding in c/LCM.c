#include<stdio.h>
#include<math.h>
int max(int num1,int num2)
{
    if(num1>num2)
    return num1;
    else
    return num2;
}
int main()
{
    int num1,num2,lcm;
    printf("Enter two numbers:::\n");
    scanf("%d%d",&num1,&num2);
    for(int i=max(num1,num2);i<=num1*num2;i++)
    {
       if(i%num1==0&&i%num2==0)
       {
           lcm=i;
       break;
       }
    }
    printf("the lcm is %d",lcm);
    return 0;
}