#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n;
    int plus_count=0,minus_count=0,zero_count=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the %dth element of the array::"<<endl;
        cin>>arr[i];
    }
      for(int i=0;i<n;i++)
    {
        cout<<"elements of the array:"<<arr[i]<<endl;
       
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        plus_count=plus_count+1;
        else if(arr[i]<0)
        minus_count= minus_count+1;
        else if(arr[i]=0)
        zero_count=zero_count+1;
    }
    cout<<"number of plus ans is :"<<plus_count<<endl;
    cout<<"number of minus ans"<<minus_count<<endl;
    cout<<"number of zero ans"<<zero_count<<endl;



    return 0;
}