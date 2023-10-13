#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int num1) // write some code to return 1 or 0 to the if else statement in the main function in order to check palindrome or not
{
    int reversed = 0;
    int originalnumber = num1;
    while (num1 != 0)
    {
        reversed = reversed * 10 + num1 % 10;
        num1 = num1 / 10;
    }
    printf("The reversed number is %d\n", reversed);

    if (originalnumber == reversed)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is palindrome or not::");
    scanf("%d", &number);
    if (ispalindrome(number))
    {

        printf("The number is palindrome!!!");
    }
    else
    {
        printf("The number is not palindrome!!!!");
    }
    return 0;
}