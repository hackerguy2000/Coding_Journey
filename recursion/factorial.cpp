#include <bits/stdc++.h>
using namespace std;
int factori(int n)
{
    if (n != 1)
    {
        return n * factori(n - 1);
    }
    else
        return 1;
}

int main()
{
    long long n;
    cout << "Enter the number you want factorial:" << endl;
    cin >> n;

    cout << factori(n);

    return 0;
}