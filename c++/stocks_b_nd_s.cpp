#include <bits/stdc++.h>

using namespace std;

int main()

{
    int arr[] = {10, 1, -4, 44, 1, 2, 82, 4, 93};
    int i = 0;
    int j=0;
    int profit = 0;
    int smallest = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    int main_profit;

    for (i = 0; i < n; i++)
    {
       for(j=i+1; j<n; j++)
       {
        if ((j > i) && arr[j] > arr[i])
        {
            profit = arr[j] - arr[i];
            if (profit > smallest)
            {
                smallest = profit;
            }
        }
        else
        continue;
       }
    }
    main_profit = smallest;
    cout << "the highest profit can be::" << main_profit;

    return 0;
}