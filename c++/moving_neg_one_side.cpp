#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    set<int> s(v.begin(), v.end());
   set<int>::iterator it;
   it=s.begin();
   for (it=s.begin();it!=s.end();it++)
   {
    cout<<*it<<" ";
   }
    
    return 0;
}