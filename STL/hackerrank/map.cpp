#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
map<string,int>m;
int q;
cin>>q;
int t;
string str;
int marks;
while(q--)
{
    cin>>t;
    if(t==1)
    {
        cin>>str>>marks;
        map<string,int>::iterator it=m.find(str);
        if(it==m.end())
        {
            m.insert(make_pair("str",marks));
        }
        else {
        m[str]=m[str]+marks;
        }
    }   
    else if(t==2)
    {
        cin>>str;
        m.erase(str);
    }
 
    else if(t==3)
    {
      cin>>str;
      cout<<m[str]<<endl;
    }
}
    return 0;
}
