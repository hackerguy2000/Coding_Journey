#include <stdio.h>

int getresult(int sum, int n)
{
    if (n == 0)
    
        return sum;
    
    else
    
        return sum+getresult(sum,n-1);
    
}
int main()
{
    int n, sum = 0;
    printf("Enter the number to which you want the sum::\n");
    scanf("%d", &n);

    printf("the sum is :%d ", getresult(sum, n));
    return 0;
}