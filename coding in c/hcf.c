#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int hcf = 0;
    int i = 0;
    int min = (num1<num2) ? num1 : num2;
    printf("Enter two numbers::::");
    for (i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i; // here we will not do break bcz we need the highest number
        }
    }

    printf("the hcf is::::%d", i);

    return 0;
}