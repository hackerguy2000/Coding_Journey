#include <stdio.h>

int result(int i,int m,int j, int n, int m1[i][j], int m2[m][n])
{
    for (int k = 0; k < i; k++)
    {
        for (int z = 0; z < n; z++)
        {
            // Calculate the result
            for (int q = 0; q < 14; q++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int i = 0, j = 0, m = 0, n = 0;
    int matrix1[10][15];
    int matrix2[15][18];
    int resultant_matrix[10][18];
    printf("Enter the no. of rows and columns you want in matrix1:::\n");
    scanf("%d%d", &i, &j);
    printf("Enter the no. of rows and columns you want in matrix2:::\n");
    scanf("%d%d", &m, &n);

    if (j == m)
    {
        printf("Multiplication possible!!\n");

        printf("Enter the elements in matrix1::\n");
        for (int r = 0; r < i; r++)
        {

            for (int c = 0; c < j; c++)
            {

                scanf("%d", &matrix1[r][c]);
            }
        }
        printf("Enter the elements in matrix2::\n");
        for (int r = 0; r < m; r++)
        {

            for (int c = 0; c < n; c++)
            {

                scanf("%d", &matrix2[r][c]);
            }
        }

        printf("The elements of 1st matrix::");

        for (int r = 0; r < i; r++)
        {

            for (int c = 0; c < j; c++)
            {

                printf(" %d", matrix1[r][c]);
            }
            printf("                    \n");
        }

        // result(j, n, matrix1, matrix2);
    }
    else
    {
        printf("Multiplication not possible!!!\n");
    }
    return 0;
}