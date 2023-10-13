#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<string, string> p[3];

    p[0] = {"India", "Delhi"};
    p[1] = {"russia", "moscow"};
    p[2] = {"united kingdom", "London"};

    string str;
    getline(cin, str);

    for (int i = 0; i < 3; i++)
    {
        if (str.compare(p[i].first)==0)
        {
            cout << p[i].second;
        }
    }

    return 0;
}