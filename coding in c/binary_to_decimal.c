#include <stdio.h>
#include <math.h>
int convert(long long num)
{
    int i = 0, decimal = 0;
    while (num != 0)
    {
        int digit = num % 10;
        decimal = decimal + digit * pow(2, i);
        num = num / 10;
        i++;
    }
    return decimal;
}

int main()
{
    long long bin;
    printf("Enter the value of bin::");
    scanf("%lld", &bin);
    convert(bin);
    printf("The converted value to decimal is:::%lld", bin);

    return 0;
}