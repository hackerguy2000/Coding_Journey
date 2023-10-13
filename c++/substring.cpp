#include <bits/stdc++.h>
using namespace std;

int findsubstring(char str1[], char str2[], int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        if (str2[0] == str1[i])
        {
            for (int j = 0; j < n2; j++, i++)
            {
                if (str2[j] != str1[i])
                {
                    break;
                }

                else
                {
                    continue;
                }
            }
            return i-n2;
        }
    }
    return -1;
}
int main()
{
    char str1[20];
    gets(str1);
    char str2[10];
    gets(str2);
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int index = findsubstring(str1, str2, n1, n2);
    cout << index;

    return 0;
}