#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[] = "India", str2[] = "russia", str3[] = "united kingdom";
    char str4[18];
    char str5[] = "New Delhi", str6[] = "moscow", str7[] = "London";
    cout << "enter the name of the country::" << endl;
    gets(str4);

    if (strcmp(str4, str1) == 0)
    {
        cout << "The captial is::" << str5 << endl;
    }
    else if (strcmp(str4, str2) == 0)
    {
        cout << "The captial is::" << str6 << endl;
    }
    else if (strcmp(str4, str3) == 0)
    {
        cout << "the capital is::" << str7 << endl;
    }
    else
    {
        cout << "The record is not in our directory!!" << endl;
    }

    return 0;
}