#include<stdio.h>



int main()
{
    int count=0;
    
 int arr[]={5,10,12,15,5,3,10};
 int n=sizeof(arr)/sizeof(arr[0]);
 for(int i=0;i<n;i++)
 {
     int flag=0;
     for(int j=i+1;j<n;j++)
     {
         if (arr[i]==arr[j])
         {
             flag=1;
             break;
         }
     }
     if(flag==0)
     {
         count++;
     }
 }
printf("The number of distinct element are:::::%d",count);
return 0;


}