#include <stdio.h>
int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}
int fib_iterative_logically(int n)
{
    int x = 0, y = 1, z = 0;
    if (n == 0)
    {
        printf("You Have enterd wrong position:::%d!", n);
    }
    else if (n == 1)
    {
        printf("The fib number is using iterative approach::::%d\n");
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            z = x + y;

            x = y;
            y = z;
        }
    }
}
int main()
{
    int num;
    int c;
    printf("Enter the nth number of position for which you want the fib series :::");
    scanf("%d", &num);
    printf("The fib number is using recurssive approach::::%d\n", fib_recursive(num));
    fib_iterative_logically(num);
    return 0;
}
