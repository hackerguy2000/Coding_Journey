#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];//last element of an array considered as pivot
    int swapIndex = low - 1;//checking from the low-1 so that we can consider 1st element swapping if necessary 
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            swapIndex++;
            swap(arr[swapIndex], arr[j]);
        }
    }
    swap(arr[swapIndex + 1], arr[high]);
    return (swapIndex + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int indexPI = partition(arr, low, high);
        quicksort(arr, low, indexPI - 1);  // left partition and indexPI-1 because of the pivot would be the last element of the left partition
        quicksort(arr, indexPI + 1, high); // right partition and indexPI+1
    }
}

int main()
{
    int arr[] = {70, 90, 10, 30, 50, 20, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    quicksort(arr, 0, size - 1);
    display(arr, size);

    return 0;
}