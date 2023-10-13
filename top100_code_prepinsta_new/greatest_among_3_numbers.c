#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("ENter 3 nos::\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("n1 is Greatest!\n");
        }
        else
            printf("n1 is not greatest\n!");
    }
    else if (n2 > n3)
    {
        if (n2 > n1)
        {
            printf("n2 is the greatest!\n");
        }
        else
            printf("n2 is not greatest!\n");
    }
    else if (n3 > n1)
    {
        if (n3 > n2)
        {
            printf("n3 is the greatest!\n");
        }
        else
            printf("n3 is not greatest!\n");
    }
    else
    {
        printf("No one is greatest!\n");
    }

    return 0;
}
