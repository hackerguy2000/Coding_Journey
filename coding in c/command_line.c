#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is::%d\n\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The value at index %d is :::%s\n", i, argv[i]); // this will print the whole path of the program as the whole path of the program is the only default argument the code is having
    }
    return 0;
}