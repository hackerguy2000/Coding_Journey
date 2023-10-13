#include <bits/stdc++.h>
using namespace std;

int power(long long x, long long n)
{
    if (n != 0)
    {
        return x * power(x, n - 1);
    }
    else

        return 1;
}

int main()
{
    long long x, n;
    cout << "Enter the number you want power" << endl;
    cin >> x;
    cout << "Enter the number you want to power" << endl;
    cin >> n;
    cout << "answer is:::"<<power(x, n);

    return 0;
}