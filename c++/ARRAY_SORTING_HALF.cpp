#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int min;
    int max;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 0)
    {
        min = arr[0];
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = i + 1; j < n / 2; j++)
            {
                if (arr[j] < arr[i])
                {
                    swap(arr[j], arr[i]);
                    min = arr[j];
                }
            }
        }
        int m=n/2;
        max=arr[m+1];
         for (int i = n/2; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    swap(arr[j], arr[i]);
                    max = arr[j];
                }
            }
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"  ";
    }

    return 0;
}