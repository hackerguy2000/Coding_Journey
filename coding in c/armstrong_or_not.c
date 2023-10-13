#include <stdio.h>
#include <math.h>

int order(int x)
{
    int len = 0;
    while (x != 0)
    {
        len++;
        x = x / 10;
    }
    return len;
}
int armstrong(int num, int len)
{
    int sum = 0, temp, digit; // temp taken so that we do not lose our num
    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, len);
        temp = temp / 10;
    }
    if (num == sum)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    int num , len;
  scanf("%d",&num);
    len = order(num);
    if (armstrong(num, len))
        printf("%d is armstrong\n", num);
    else
        printf("%d is not armstrong\n", num);
    return 0;
}