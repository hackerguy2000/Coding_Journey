#include <bits/stdc++.h>
using namespace std;
void permute(string str)
{
    sort(str.begin(), str.end());
    cout<<"The permutation of the string is"<<endl;
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin, str);
    permute(str);

    return 0;
}