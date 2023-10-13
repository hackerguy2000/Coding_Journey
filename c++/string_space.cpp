#include <iostream>
using namespace std;

int main()
{
    char str[20];
    gets(str);
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    int len = count;
    for (int i = 0; i < len; i++)
    {
        if (str[i]==' ')
        {
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }
    cout << "string is::" << str;

    return 0;
}