#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[][7] = {"rahul", "nisha", "rupali", "rinki"};
    char str2[10];
    for (int n = 0; n < 4; n++)
    {
        gets(str2);
        if (strncmp(str1[n], "nisha",strlen(str2)) == 0)
        {
            cout << "found" << str2 << endl;
        }
    }

    return 0;
}