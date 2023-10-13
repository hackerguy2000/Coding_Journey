#include<stdio.h>
int sum(int a, int b)
{
 return a+b;

}
void printstar(int n)
{
    for( int i=0;i<n;i++)
    {
    printf("%c", '*');
    }
}
int main()
{
int a,b,c;
a=5;
b=21;
c=sum(a,b);
printstar(11);
printf("The value of c is :%d", c);
return 0;

}
