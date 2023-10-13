#include <bits/stdc++.h>
using namespace std;
int max_product(int arr[], int n)
{
    int result = arr[0];
    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];
        for (int j = i + 1; j < n; j++)

        {
            mul = mul * arr[i];
            result = max(result, mul);
        }
    }
    return result;
}
int main()
{
    int arr[7] = {10, -20, -30, 0, 70, -80, -20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_product(arr, n);

    return 0;
}