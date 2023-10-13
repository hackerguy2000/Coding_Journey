#include <iostream>
using namespace std;

char *removeSpaces(char *str)
{
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    return str;
}

// Driver program to test above function
int main()
{
    char str1[] = "gee k ";
    cout << removeSpaces(str1) << endl;

    char str2[] = "      ra   h    ul     ";
    cout << removeSpaces(str2);
    return 0;
}