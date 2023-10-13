#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Helo";
   // getline(str, cin);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'l')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}