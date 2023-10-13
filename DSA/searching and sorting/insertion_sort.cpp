#include <bits/stdc++.h>
using namespace std;

void display(int arr[],int size)
{
 for(int i=0;i<size;i++)
 {
    cout<<arr[i]<<" ";
 }
 cout<<endl;
}

int main()
{
    int j=0;
    int array[] = {12, 3, 4, 14, 54, 65, 13};
    int temp;
    int size = sizeof(array) / sizeof(array[0]);
    for(int i=1;i<size;i++)
    {
        temp=array[i];
        j=i-1;
        while(j>=0 && array[j]>temp)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
display(array,size);
return 0;
}