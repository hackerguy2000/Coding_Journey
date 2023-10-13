#include <bits/stdc++.h>
using namespace std;
int ispalindrome(int arr, int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if(n==rev)
    {
        return 1;
    }
    else
    continue;
}

int main()
{
    int n;
    int arr[n];
    int result = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (ispalindrome(arr[i], n) && result < arr[i])
        {
            result = arr[i];
        }
    }
    if (result == INT_MIN)
    {
        result == -1;
    }
    cout << result;

    return 0;
}