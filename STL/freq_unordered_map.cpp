#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int arr[n];

    cout << "number of element you want in the array!!" << endl;
    cin >> n;
    cout << "Elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++; // mapped value though key is increasing so that we can calculate the freq of elements
    }
    cout << "Element"
         << "  "
         << "Frequency" << endl;
    for (auto i : umap)
    {

        cout << i.first << "          " << i.second << endl;
    }

    return 0;
}