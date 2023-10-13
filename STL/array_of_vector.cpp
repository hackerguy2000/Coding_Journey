#include <bits/stdc++.h>
using namespace std;
void printvector(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    int N;
    cout << " Number of element you want in array " << endl;
    cin >> N;//the number of elements of array and each array element consist of a vector
    vector<int> v[N]; // array of vector declared here
    int m=0;
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Number of element in a vector you want of " <<++m<<" th array element" << endl;

        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[j].push_back(x);
        }
    }
    for(int k=0;k<N;k++)
    {
        printvector(v[k]);
    }

    return 0;
}