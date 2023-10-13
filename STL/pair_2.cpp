#include <bits/stdc++.h>
using namespace std;

int main()

{
    pair<int, string> p_array[4];
    p_array[0] = {8, "Rahul Shaw a good guy with humor"};
    p_array[1] = {11, "Rahul take a chill pill"};
    p_array[2] = {13, "Don't feel low you are still much more worthy than you ever can think of"};
    p_array[3] = {29, "Just be honest to yourself and do a lot of practice with presence of mind"};
    cout << "INTEGER NUMBER"
         << "            "
         << "STRING STATEMENT" << endl;
    for (auto i = 0; i < 4; i++)
    {
        cout << "    " << p_array[i].first << "                  " << p_array[i].second << endl;
    }

    return 0;
}