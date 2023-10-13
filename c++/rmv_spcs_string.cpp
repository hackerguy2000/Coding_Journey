#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[10];
    gets(str);
    int len = strlen(str);
    char new[10];
    int i = 0, j = 0;

    while (str[i] != 0)
    {
        if (str[i] != '\0')
        {
            new[j] = str[i];
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << "the new string after removing all of the spaces" << new;

    return 0;
}