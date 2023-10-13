#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cin>>n;
    string str;
    int arr[6];

int i=0;
    do
    {
        n=n%10;
        arr[i]=n;
        n=n/10;
        i++;
    }while(n!=0);
int ca=sizeof(arr)/sizeof(arr[0]);

   for(int i=0;i<ca;i++)
   {
    cout<<arr[i]<<"  ";
   }



    return 0;
}