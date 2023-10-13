#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Rahul,is ,a ad,good, boy";
    string word;
    stringstream ss(str);
  
    while(getline(ss,word,','))
    {
        cout << word<<endl;
    }

    return 0;
}