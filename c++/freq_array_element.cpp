#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    int count = 0;

    cout << "Enter the number of elements want in array::" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array:::::" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int freq[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (freq[i] == 0)
        {
            count = 1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    freq[j] = 1;
                }
            }
            cout << "The frequency of " << arr[i] << " is " << count << endl;
        }
    }

    return 0;
}