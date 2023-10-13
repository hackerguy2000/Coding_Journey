#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p1;
    pair<int, string> p2;
    pair<int, string> p3;
    p1 = {29, "Rahul shaw is the best coder and he can definitely improve his coding through PRACTICE "};
    p2 = {31, "Rahul is the coolest guy!"};
    p3 = {21, "Rahul , take a chill pill"};
    cout << p1.first << "   " << p1.second << endl;
    cout << p2.first << "   " << p2.second << endl;
    cout << p3.first << "   " << p3.second << endl;

    pair<int, int> p_array[3]; // for example element of 2 arrays are related
    p_array[0] = {11, 101};
    p_array[1] = {12, 102};
    p_array[2] = {13, 103};
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "     " << p_array[i].second << endl;
    }

    return 0;
}