#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int count = 1;

    char str[20];
    gets(str);

    int j = 0;
    int len = strlen(str);
    int visited[len] = {0};
    for (int i = 0; i < len; i++)
    {
        count = 1;
        if (visited[i] == 0)
        {
            for (j = i + 1; j < len; j++)
            {
                if (str[j] == str[i])
                {
                    visited[j] = 1;
                    count++;
                }
            }
            cout << "the occurance of element " << str[i] << " is " << count << "times" << endl;
        }
    }

    return 0;
}