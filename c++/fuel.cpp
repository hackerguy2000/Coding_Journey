#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fuel;
    int distance;
    float result;
    cin >> fuel;
    cin >> distance;
    if ((fuel == 0 || fuel < 0) || (distance == 0 || distance < 0))
    {
        cout << "Its an invalid input!" << endl;
    }
    result = (fuel / distance) * 100;
    cout << "In indian format::" << result;
    fuel = fuel * 0.2642;
    distance = distance * 0.6241;
    result = (fuel / distance) * 100;
    cout << "In us format::" << result;

    return 0;
}