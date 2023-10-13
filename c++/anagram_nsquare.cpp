#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];
    gets(str1);
    gets(str2);
    int main_flag = 0;
    //  is_anagram(str1[], str2[]);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int flag[len1] = {0};
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            for (int j = 0; j < len2; j++)
            {
                if (str1[i] == str2[j])
                {
                    flag[i++]++;
                }
            }
        }
        for (int k = 0; k < len1; k++)
        {
            if (flag[k] == 1)
            {
                main_flag = 1;
            }
        }
        if (main_flag == 1)
        {
            cout << "string are anagram!" << endl;
        }
        else
            cout << "strings are not anagram!" << endl;
    }
    else
    {
        cout << "Strings are not anagram as the length of two string are not same!" << endl;
    }

    return 0;
}