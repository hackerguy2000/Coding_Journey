#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {44, 66, 75, 84, 92, 103, 222, 275, 336,455};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int u = n - 1;
    int flag=0;
    int x = 84; // suppose i need to find 275 from the array

    while (l <= u)
    {
        int m = l + (u - l) / 2;
        if (arr[m] == x)
        {
            cout << "Element has been found at " << m << "  position" << endl;
            flag=1;
            return 1;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
        }
        else if (arr[m] > x)
        {
            u = m - 1;
        }
    }
    if(flag==0)
    {
        cout<<"Element could not be found!!"<<endl;
    }

    return 0;
}