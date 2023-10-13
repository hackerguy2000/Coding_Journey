#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number you want to check::\n");
    scanf("%d", &num);
    int result=(num % 2 == 0) ? printf("EVEN") : printf("ODD");
    return 0;
}