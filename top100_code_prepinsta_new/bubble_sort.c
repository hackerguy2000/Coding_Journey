#include <stdio.h>

void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
} // swapping wala function

void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    { // for pass , as pass happens from 0 to array_size-1
        int swapped = 0;

        for (j = 0; j < n - i - 1; j++) // for internal rotation due to swapping
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;
            }
        }

        if (!swapped)
            break;
    }
}

void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

int main()
{
    int array[] = {5, 20, 105, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Before Bubble sort::\n");
    display(array, size);

    bubble_sort(array, size);
    printf("After Bubble sort::\n");
    display(array, size);
    return 0;
}