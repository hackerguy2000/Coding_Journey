#include <bits/stdc++.h>
#include <string>
using namespace std;

// driver code
int main()
{
    string str1;
    getline(cin, str1);
    string str2;
    getline(cin, str2);
    char ch[30];
    // str1.copy(ch,13,2);
    // cout<<"the new copied character array is::"<<ch<<endl;
    cout << "swapping::" << endl;
    str1.swap(str2); // swapping str1 by str 2;
    cout << "After swapping the string 1 becomes::" << endl
         << str1 << endl;

    cout << "after swapping the string 2 becomes::" << endl
         << str2;

    return 0;
}