#include <bits/stdc++.h>
using namespace std;

// function to find the first element
// occurring k number of times
int firstElement(int arr[], int n, int k)
{

    // unordered_map to count
    // occurrences of each element
    map<int, int> count_map;
    for (int i = 0; i < n; i++)
    {

        count_map[arr[i]]++;
    }
    // count_map[arr[i]]++;

    for (int i = 0; i < n; i++) // if count of element == k ,then
                                // it is the required first element
    {
        if (count_map[arr[i]] == k)
            return arr[i];
    }
    return 0;
}
// Driver code
int main()
{
    int arr[] = {1, 7, 4, 3, 4, 1, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << (firstElement(arr, n, k));
    return 0;
}