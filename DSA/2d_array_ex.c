#include <stdio.h>
int main()
{
    int marks[2][7] = {{52, 56, 99, 58, 56, 99, 88}, 
                       {92, 98, 65, 35, 75, 68, 69}};
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            printf("\nThe marks of the %d, %d number student:::%d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}