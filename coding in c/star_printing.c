#include <stdio.h>
// n=rows here
int star_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int reverse_star_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void main()
{
    int n;
    printf("How many rows do u want::");
    scanf("%d", &n);
    printf("The normal star pattern as above :::\n%c",star_pattern(n));
    printf("The reverse star pattern as above:::\n%c",reverse_star_pattern(n));
    
}