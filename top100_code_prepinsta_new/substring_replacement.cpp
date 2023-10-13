#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    string str3;
    getline(cin, str3);
    str1.replace(str1.find(str2), str2.length(), str3);
    cout << "The string after replacement is::" << endl
         << str1;

    return 0;
}