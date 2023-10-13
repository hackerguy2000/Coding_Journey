#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    map<string, int> m;
    int n;
    cout << "number of string u want to enter::" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cout << "Enter the string::" << endl;
        cin >> str;
        m[str]++;
    }
    cout << "The map is now::" << endl;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "  " << it->second << endl;
    }
    cout<<"through different style of printing elements of map"<<endl;
    for(auto v:m)
    {
        cout<<v.first<<"   "<<v.second<<endl;
    }

    return 0;
}