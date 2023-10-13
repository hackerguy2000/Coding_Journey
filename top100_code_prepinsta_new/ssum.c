#include <stdio.h>

int getSum(int sum,int n)
{
    if(n==0) 
        return sum;
    else 
    return n+getSum(sum,n-1);
}

int main()
{
    int n, sum = 0; 
    printf("Enter the value of n:::\n");
    scanf("%d",&n);

    printf("%d",getSum(sum, n));
    
    return 0;
}