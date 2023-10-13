#include <bits/stdc++.h>
using namespace std;
int print_array(int arr[], int size, int i, int val)
{
    if (i == size)
    {
        return;
    }
    else
        cout << arr[i] << " ";
    if (arr[i] == val)
    {
        return i;
    }

    print_array(arr, size, ++i);
    cout<<endl;
}
int main()
{
    int arr[8] = {11, 225, 36, 44, 29, 95, 225, 316};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Searching for the first occurance of an element" << endl;
    cout << "Enter the element you want :" << endl;
    cout << "At " << print_array(arr, n, 0, 225) << "index element found";

        return 0;
}