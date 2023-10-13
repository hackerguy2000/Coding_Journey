#include <iostream>
#include <algorithm>

using namespace std;

int countdistinct(int arr[], int n)
{
    sort(arr, arr + n); // sorting algorithm to sort the array in ascending order though <algorithm> in cpp
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        while ((i < (n - 1)) && (arr[i] = arr[i + 1]))
            i++;
        count++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 4, 8, 9, 23, 44, 55, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count=countdistinct(arr, n);
    cout<<"distinct elements are::"<<count;

        return 0;
}