#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    while (i < j)
    {
        do
        {
            i++;

        } while (arr[i] <= pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void quicksort(int arr[], int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quicksort(arr, l, j);
        quicksort(arr, j + 1, h);
    }
}
void display(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[] = {11, 2, 66, 25, 37, 85, 6, 12};
    cout << "We need to sort these elements by Quick sort" << endl;
    // n = n + 1;
    int m = INT_MAX;
    int array[] = {11, 2, 66, 25, 37, 85, 6, 12, INT_MAX};
    int n = sizeof(array) / sizeof(array[0]);

    int l = 0;
    int h = n;
    quicksort(array, l, h);
    display(array, n);
    return 0;
}