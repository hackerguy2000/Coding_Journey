#include <bits/stdc++.h>
using namespace std;

int find_number(int arr[], int n)
{
    unordered_map<int, int> umap;

    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    unordered_map<int, int>::iterator it;
    for (it = umap.begin(); it != umap.end(); it++)
    {
        if (it->second % 2 != 0)
        {
           // cout << "The element is :::" << it->first;
            return it->first;
        }
        else
            continue;
    }

    return 0;
}
int main()
{
    int n;
    cout << "Enter number of elements want in array:" << endl;
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of array:::"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The number which occured odd number of time is::::" << find_number(arr, n);

    return 0;
}