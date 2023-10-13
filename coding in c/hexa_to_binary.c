#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int convert(char *hex[])
{
    int len = strlen(hex);
    int decimal = 0, pos = 0;

    for (int i = len - 1; i >= 0; i--)
    {

        if (hex[i] >= '0' && hex[i] <= '9')
        {

            int digit = atoi((hex[i])) - 48;
            decimal += digit * pow(16, pos);
            pos++;
        }

        else if (hex[i] >= 'A' && hex[i] <= 'F')
        {

            int digit = atoi((hex[i])) - 55;
            decimal += digit * pow(16, pos);
            pos++;
        }
    }
    return decimal;
}

int main()
{
    char *hex[20];
    printf("Enter the char::");
    scanf("%s", &hex);

    printf("%d", convert(hex));
    return 0;
}