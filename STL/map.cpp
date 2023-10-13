#include <bits/stdc++.h>
using namespace std;

void print_map(map<int, string> &m)
{
    cout << "The size of the map is::" << m.size() << endl;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << "   " << it->second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[33] = "India is the best";
    m[44] = "Pakistan KMKB";
    m[55] = "China is the father of covid";
    m[66] = "USA is the fake principal of world";
    int key;

    print_map(m);

    cout << "Enter the value of key here:::" << endl;
    cin >> key;

    auto it = m.find(key); // storing the mapped value of key 44 in the iterator of type auto

    if (it == m.end())
    {
        cout << "Key value is not present in the map!!!" << endl;
    }
    else
        cout << "found"
             << "    "
             << it->first << "   " << it->second<<endl;

    m.erase(66);

    print_map(m);

    return 0;
}