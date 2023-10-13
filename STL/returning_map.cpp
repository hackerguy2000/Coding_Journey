#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> func1(int arr[], int n)
{

    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    return umap;
}

int main()
{
    int arr[] = {11, 20, 11, 20, 51, 14, 51, 3, 66, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int,int> umap_main=func1(arr,n);
    for(auto i:umap_main)
    {
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    return 0;
}