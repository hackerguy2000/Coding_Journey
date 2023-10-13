#include <iostream>
using namespace std;
int main()
{
    char str[10];
    int sum=0;
gets(str);
//int len=strlen(str);
for(int i=0;str[i]!='\0';i++)
{
    if((str[i]>=48)&&(str[i]<=57))
    {
        sum=sum+(str[i]-48);
    }
}
cout<<"the sum is::"<<sum;

    return 0;
}