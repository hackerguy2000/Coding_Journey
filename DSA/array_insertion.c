#include <stdio.h>

int insertion_at_index(int array[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
    return 1;
}
int display(int array[],int size1)
{
    for (int i = 0; i <=size1-1; i++)
    {
        printf("  %d",array[i]);
    }
    printf("\n");
    
}
int main()
{
    int arr[100] = {1, 55, 44, 25, 65, 32, 45};
    int size = 7, element = 89, index = 4;
    display(arr,size);
    insertion_at_index(arr, size, element, index, 100);
    size+=1;
    display(arr,size);
    return 0;
}