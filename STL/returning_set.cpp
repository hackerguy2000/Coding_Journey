#include <bits/stdc++.h>
using namespace std;

unordered_set<int> func1(int arr[], int n)
{

    unordered_set<int> uset;
    for (int i = 0; i < n; i++)
    {
        uset.insert(arr[i]);
    }

    return uset;
}

int main()
{
    int arr[] = {11, 20, 11, 20, 51, 14, 51, 3, 66, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (auto i : func1(arr, n))
    {
        cout << i << "  ";
    }
}