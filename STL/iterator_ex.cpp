#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {4, 5, 44, 1, 256};
    vector<int> arr1 = {40, 11, 12, 132};
    vector<int>::iterator itr;

    itr = arr1.begin();

    advance(itr, 3);

    copy(arr.begin(), arr.end(), inserter(arr1, itr));

    for (auto i = arr1.begin(); i != arr1.end(); i++)
    {
        cout << " " << *i;
    }
    cout << endl;
    for (auto i = arr1.rbegin(); i != arr1.rend(); i++)
    {
        cout << " " << *i;
    }

    return 0;
}