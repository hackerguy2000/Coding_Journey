#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num_sem;
    cin >> num_sem;
    int sub[num_sem];
    for (int i = 0; i < num_sem; i++)
    {
        cout << "Enter number of subjects in " << i + 1 << " semester  ";
        cin >> sub[i];
    }
    for (int i = 0; i < num_sem; i++)
    {
        int marks;
        int maxi=0;
        cout << "Marks obtained in sem " << i + 1<<"  ";
        while (sub[i]--)
        {
            cin >> marks;
            if (marks < 0 || marks > 100)
            {
                cout << "Invalid input" << endl;
                exit(0);
            }
            maxi = max(maxi, marks);
        }
        cout << "Maximum marks in sem " << i + 1 << " is" << maxi<<endl;
    }

    return 0;
}