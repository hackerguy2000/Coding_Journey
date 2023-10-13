#include <stdio.h>
// checking whether a number is prime or not
// optimization by break condition
int main()
{
    int n;
    int rem = 0;
    int isprime = 1;
    printf("Enter the number you want to check::\n");
    scanf("%d", &n);
    if (n < 2)
    {
        isprime = 0;
    }
    for (int i = 2; i < n; i++)
    {
        rem = n % i;
        if (rem == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime)
    {
        printf("The number is prime", n);
    }
    else{
        printf("Not prime!!!!",n);
    }

    return 0;
}