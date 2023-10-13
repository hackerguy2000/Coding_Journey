#include <stdio.h>

int main()
{
    int num = -70;

    /*if(num>=0)
    {
        if (num==0)
        {
            printf("The number is zero!\n");
        }
        else{
            printf("The number is positive!\n");
        }

    }
    else{
        printf("The number is negative!!\n");
    }*/

    if (num == 0)
    {
        printf("The number is zero!!\n");
    }
    else
        (num > 0) ? printf("Positive") : printf("Negative");

    return 0;
}