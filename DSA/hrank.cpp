#include<bits/stdc++.h>
using namespace std;
int main()
{
int queries[3][3]={{1,2,100},
                 {2,5,100},
                 {3,6,100}};

int n;
cin>>n;
int arr[n]={0};
    int m_row=3;
    int m_col=3;
    int z;
    int j;
    int index_start=0;
    int index_end=0;
    int addend;
    for(int i=0;i<m_row;i++)
    {
       // z=m_col-1;
        for(j=0;j<m_col;j++)
        {
            if(j==m_col-1)
            {
            addend=queries[i][j];
            }
            if(j==m_col-2)
            {
            index_end=queries[i][j];
            }
            if(j==0)
            {
            index_start=queries[i][j];
            }
        }
        for(int k=0;k<n;k++)
        {
            if((k>=index_start-1)&&(k<=index_end-1))
           {
              arr[k]=arr[k]+addend;
           }
        }
    }
    for(int l=0;l<n;l++)
    {
        cout<<arr[l]<<" ";

    }
    cout<<endl;
    sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
return 0;
}
