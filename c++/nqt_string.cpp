#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1, sub_str, str2;
    cout << "Enter the str1" << endl;
    getline(cin, str1);
    cout << "Enter the str2(to convertable string)::" << endl;
    getline(cin, str2);
    int j = 0;
    int n = str1.size();
    int arr[n];
     if (str1.size() == str2.size())
    {
        for (int i = 0; i < str1.size(); i++)
        {
            if (str1[i] != str2[i])
            {
                sub_str[j] = str1[i];
                arr[n] = i;

                j++;
                for (int k = 0; k < sub_str.size(); k++)
                {
                    char min = 'z';
                    if (sub_str[k] <= min)
                    {
                        min = sub_str[k];
                    }
                }
                for (int m = 0; m < sub_str.size(); m++)
                {
                    if (sub_str[m] != min)
                    {
                        min = sub_str[k];
                    }
                }
                for (int l = 0; l < str1.size(); l++)
                {
                    if (str1[l] != str2[l])
                    {
                        str1[l] = sub_str[arr[l]];
                    }
                }

                
            }
        }
    }

    return 0;
}