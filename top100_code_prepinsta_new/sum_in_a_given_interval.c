#include<stdio.h>


/*
int main()
{
    int a,b;
    printf("Enter the value of a & b ::\n");
    scanf("%d%d",&a,&b);
    int sum=0;

    for(int i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("The sum is::%d",sum);
return 0;
}
*/



//using recursion

int getresult(int a,int b,int sum)
{
      if (a>b)
      {
 return sum;
      }

   else{
       return sum+getresult(a+1,b,sum);
   }

}



int main()
{
int a,b;
    printf("Enter the value of a & b ::\n");
    scanf("%d%d",&a,&b);
    int sum=0;
    int result= getresult(a,b,sum);
    printf("%d",result);

}