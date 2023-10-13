#include <bits/stdc++.h>
using namespace std;
int main()
{
    int fuel;
    int distance;
    double result;
    cin >> fuel;
    cin >> distance;
    if (fuel == 0 || fuel < 0)
    {
        cout << fuel << "is an invalid input" << endl;
    }
    if (distance == 0 || distance < 0)
    {
        cout << distance << "is an invalid input" << endl;
    }
    if (fuel > 0 && distance > 0)
    {
       float div;
       div=(float)fuel/(float)distance;
        result = div*100;
        cout << "In indian format::" << result << endl;
        fuel = fuel * 0.2642;
        distance = distance * 0.6241;
        div=(float)fuel/(float)distance;
        result = div * 100;
        cout << "In us format::" << result;
    }

    return 0;
}