#include <bits/stdc++.h>
using namespace std;
void print_array(int arr[], int size, int i)
{
    if (i == size)
    {
        return;
    }
    else
        cout << arr[i] <<" ";
    
    print_array(arr,size,++i);
}
int main()
{
    int arr[6] = {11, 225, 36, 44, 29, 95};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n, 0);

    return 0;
}