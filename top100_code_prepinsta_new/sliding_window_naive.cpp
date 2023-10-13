#include<bits/stdc++.h>
using namespace std;


int main()
{

  int arr[]={4,1,3,2,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3;
  int max=0;
  for(int i=0;i<n-k+1;i++)
  {
    max=arr[i];
    for(int j=i+1;j<i+3;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    cout<<max<<" ";
  }


    return 0;
}