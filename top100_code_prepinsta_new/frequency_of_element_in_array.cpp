#include <iostream>
#include <algorithm>
using namespace std;

void countfrequency(int arr[], int n)
{
    sort(arr, arr + n);
    int i=0;
    for (i = 0; i < n; i++)
    {
        int count = 1;
        while (( i< n - 1) && (arr[i] = arr[i + 1]))
        {
            i++;
            count++;
        }
        cout << arr[i] << ":" << count << endl;
    }
}

int main()
{

    int arr[] = {1, 4, 3, 6, 1, 5, 1, 6, 7, 99, 7, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countfrequency(arr, n);

    return 0;
}