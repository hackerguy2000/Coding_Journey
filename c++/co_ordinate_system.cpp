#include <bits/stdc++.h>
using namespace std;

void distance(int co_ordinates[], int n)
{
    int dis = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "co ordinates are::" << co_ordinates[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow((co_ordinates[i + 1] - co_ordinates[i]), 2);
        i++;
    }
    cout << "The distance is:::::: " <<(int) sqrt(sum);
}

int main()
{
    int co_ordinates[6];
    cout << "Enter the co ordinates of sequentially like x1,x2,y1,y2,z1,z2:::::" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> co_ordinates[i];
    }
    distance(co_ordinates, 6);

    return 0;
}
