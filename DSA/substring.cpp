#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    string s1="Rahulshawisagoodboy";
    string s2="good";
    int flag=0;


    for(int i=0;i<(s1.length()-s2.length());i++)
    {
        if(s2[0]==s1[i])
        {
            int k=0;
            for(int j=i;j<i+s2.length();j++)
            {
                if(s2[k++]!=s1[j])
                {
                   flag=1;
                   break;
                }
                else{
                    continue;
                }
            }
        }
    }
    if(flag==1)
    {
    cout<<"Not Found"<<endl;
    }
    else if(flag==0)
    {
        cout<<"Found"<<endl;
    }


    return 0;
}