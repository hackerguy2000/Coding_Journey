#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int x;
    int k;
    cout << "enter the value of k::" << endl;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    set<int> s(v.begin(), v.end()); // the elements has been sotred automatically in the set as it is the character of set
    set<int>::iterator it = s.begin();

    cout << "kth minimum element is::" << endl;
    advance(it, k - 1);
    cout << "kth minimum value " << *it << endl;
    it = s.begin();
    cout << "kth maximum element is::" << endl;
    advance(it, n - k);
    cout << "kth maximum value " << *it << endl;

    return 0;
}