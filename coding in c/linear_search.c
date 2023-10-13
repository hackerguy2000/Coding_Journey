#include <stdio.h>
#include <stdlib.h>
void linearsearch(int *ptr, int len, int item)
{
    for (int i = 0; i < len; i++)
    {
        if (*(ptr + i) == item)
        {
            printf("The element has been found at %d th position\n", i);
            exit(0);
        }
    }

    printf("could not found the element!!!");
}
int main()
{
    int array[] = {4, 5, 12, 22, 3, 6, 9};
    int *ptr = array;
    int len = sizeof(array) / sizeof(array[0]);
    int item = 12;

    linearsearch(ptr, len, item);

    return 0;
}