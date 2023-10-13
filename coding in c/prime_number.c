#include <stdio.h>
// checking whether a number is prime or not
// optimization by break condition
int main()
{
    int n;
    int rem = 0;
    int isprime = 1; // boolean flag initialized and it is supposed that the number is prime.
    printf("Enter the number you want to check::\n");
    scanf("%d", &n);
    if (n < 2) // the negative and less than the number 2 is considered as prime
    {
        isprime = 0; // not prime as is prime now is false
    }
    for (int i = 2; i < n; i++) // loop is running for 2 to n-1 bcz 1 and n would be usless
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime)
    {
        printf("The %d number is prime!", n);
    }
    else
    {
        printf("The %d number is not prime!", n);
    }


return 0;
}