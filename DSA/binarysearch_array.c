#include <stdio.h>

int binarysearch(int arr[], int size, int element)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int array[] = {2, 4, 8, 32, 66, 100, 104, 200, 400};
    int element = 200;
    int size = sizeof(array) / sizeof(int);//method to find the size of the array

    int search_result = binarysearch(array, size, element);

    printf("The element founded by binary search is::%d at index %d", element, search_result);
}