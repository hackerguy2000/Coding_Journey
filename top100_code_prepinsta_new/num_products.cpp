#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n_product;
    cin >> n_product;
    int price, dis;
    string str;
    int discount;
    int mini = INT_MAX;
    unordered_map<string, int> u_map;
    for (int i = 0; i < n_product; i++)
    {
        cin >> str;
        cin >> price;
        cin >> dis;
        discount = (price * dis) / 100;
        u_map[str] = discount;
        mini = min(mini, discount);
    }
    unordered_map<string, int>::iterator it;
    for (it = u_map.begin(); it != u_map.end(); it++)
    {
        if (it->second == mini)
        {
            cout << it->first;
        }
    }

    return 0;
}