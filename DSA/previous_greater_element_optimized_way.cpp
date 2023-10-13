#include <bits/stdc++.h>
using namespace std;

void prev_greater(int arr[], int size)
{
    stack<int> s;
    s.push(arr[0]);
    cout << " - "
         << "  ";
    for (int i = 1; i < size; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            cout << " - "
                 << " ";
        }
        else
        {
            cout << s.top();
        }
        s.push(arr[i]);
    }
}

    int main()
    {
        int arr[] = {11, 10, 12, 9, 3, 4, 19, 8};
        int size = sizeof(arr) / sizeof(arr[0]);
        prev_greater(arr, size);

        return 0;
    }