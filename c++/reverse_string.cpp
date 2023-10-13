#include<iostream>
using namespace std;

int main()
{
    int count=0;
char arr[11];
char rev[11];
gets(arr);
while(arr[count]!='\0')
{
    count++;//9
}
int j=count-1;
cout<<count<<endl;
for(int i=0;i<count;i++)
{
    rev[i]=arr[j];
    j--;
}
cout<<"The STring is now:"<<rev;



    return 0;
}