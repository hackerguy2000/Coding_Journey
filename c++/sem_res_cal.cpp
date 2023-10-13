#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_sem;
    cin >> num_sem;
    int num_of_sub;
    int max;


    for (int j = 1; j <= num_sem; j++)
    {
        cout << "Enter number of subject in " << j << " th,st,nd sem" << endl;
        cin >> num_of_sub;
        int marks[num_of_sub];
        for (int i = 0; i < num_of_sub; i++)
        {
            cout << "Enter marks of subject "<< i+1 <<" ::"<< endl;
            cin >> marks[i];
            max = marks[0];
            if (marks[i] > marks[0])
            {
                max = marks[i];
            }
        }
        cout << "Maxium marks in " << j << " th sem is" << max<<endl;
    }

    return 0;
}