#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[10];
    gets(str);
    int len = strlen(str);
    cout << "the size of the string is" << len;
    
    char arr[len];
    int i;
    int j = 0;

    for(i=0;i<len;i++)
    {
        if (str[i] != ' ')
        {
            arr[j++] = str[i];
        }
    }
    arr[j] = '\0';
    cout << "the new string after removing all of the spaces:::" << arr << endl;

    return 0;
}