#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int temp;
    int arr[] = {22, 3, 4, 5, 65, 6, 767, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    for (int i = 0; i < size - 1; i++)//i is pass here
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    display(arr, size);
    return 0;
}