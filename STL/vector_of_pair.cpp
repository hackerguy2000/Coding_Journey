#include <bits/stdc++.h>
using namespace std;

void print_vec(vector<pair<int, char>> &v)
{
    cout << "The size of the vector v is::" << v.size() << endl;

     cout<<"The Vector with pair is::"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "      " << v[i].second << endl;
    }
}

int main()
{
    vector<pair<int, char>> v;

    int n;
    cout << "Number of pair you want to form inside the vector::" << endl;
    cin >> n;
    int x;
    char y;
   
    for (int i = 0; i != n; i++)
    {
        cout << "Enter the value of the pair::" << endl;
        cin >> x;
        cin >> y;
        v.push_back(make_pair(x,y));
    }
    print_vec(v);

    return 0;
}