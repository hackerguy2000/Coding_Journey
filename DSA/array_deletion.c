#include <stdio.h>

int deletion_at_index(int array[], int size, int index)
{
  /*  if (size >= capacity)
    {
        return -1;
    }*/
    for (int i = index ; i < size; i++)
    {
        array[i] = array[i+1];
    }
 
    return 1;
}
int display(int array[], int size1)
{
    for (int i = 0; i <= size1 - 1; i++)
    {
        printf("  %d", array[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100] = {1,2,5,7,8,9,11};
    int size = 7, element = 89, index = 2;
    display(arr, size);
    printf("\nThe size of the array right now is:::%d\n",size);
    deletion_at_index(arr, size, index);
    size -= 1;
    display(arr, size);
    printf("\nThe size of the array after deletion is:%d\n",size);
    return 0;
}