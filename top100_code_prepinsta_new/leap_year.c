#include <stdio.h>

int main()
{
    int ly = 0;
    printf("Enter the Leap Year:\n");
    scanf("%d", &ly);

    if ((ly % 4 == 0 && ly % 100 != 0) || (ly % 4 != 0 && ly % 100 == 0))
    {
        printf("Leap year!!!\n");
    }
    else
    {
        printf("not a ly!!\n");
    }

    return 0;
}