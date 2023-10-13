#include <bits/stdc++.h>
using namespace std;
int main()
{
    //WRONG PORGRAM LOGIC NT WORKING THIS CODE
    int n;
    cin >> n;
    int arr[n];
    int arr2[n];
    // int freq[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }
    unordered_map<int, int>::iterator it;
    int j = 0;
    for (it = umap.begin(); it != umap.end(); it++)
    {
        it->second = arr2[j];
        j++;
    }
    sort(arr2, arr2 + n);
    int k = 0;
    for (it = umap.begin(); it != umap.end(); it++)
    {
        if (arr2[k] == it->second)
        {
            cout << it->first;
        }
        else
            continue;
    }

    return 0;
}