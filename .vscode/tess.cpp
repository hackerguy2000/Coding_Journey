#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int len = 0;
    int counting = 0;
    int flag = 0;
    char str[15];
    gets(str);
    len = strlen(str);
    for (int i; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            counting++;
            cout << "the element " << str[i] << " is distinct " << endl;
        }
    }
    cout << "number of distinct element is" << counting << endl;

    return 0;
}