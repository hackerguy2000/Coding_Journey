#include<bits/stdc++.h>
using namespace std;


int main()
{
   
 string s1="prepinsta";
 string s2="ins";
 int n=s1.length();
 int m=s2.length();
 bool got=true;
for(int i=0;i<n-m;i++)
{
  got=true;
 for(int j=0;j<m;j++)
 {
    if(s1[i+j]!=s2[j])
    {
        got = false ;
      break;
    }
} 
}
if(got==true)
{
    cout<<"found"<<endl;
}
    return 0;
}