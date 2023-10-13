#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[] = "SAMPLE STRING";
    char str2[20], str3[20];
    strncpy(str2, str1,sizeof(str2));//boudning the size of str2 so that not more than that character str2 can hold
    cout << str2<<endl;
    strncpy(str3, str1, 9);
    str3[9]='\0';
    cout << str3;

    return 0;
}