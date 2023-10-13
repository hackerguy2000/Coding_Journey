#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 5, 7, 6, 1, 99, 3, 7, 1, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    int temp =0;
    for (int i = 0; i < n / 2; i++)
    {
        for (j = i + 1; j < n / 2; j++)
        {
            if (arr[j]<arr[i])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
        
    }
      for (int i = n/2; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j]>arr[i])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
        }
        
    }
    cout<<"after ascending first half and descending the other half::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }


    return 0;
}