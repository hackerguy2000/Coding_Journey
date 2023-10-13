#include <bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "  ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector" << endl;
    cin >> n;
    cout << "Enter the elemets of vector" << endl;
    int x;
    for (int i = 0; i < n; i++)
    {
        cout << "The size of the vector is ::" << v.size() << endl;
        cin >> x;
        v.push_back(x);
    }
    print_vector(v);
    v.pop_back();
    cout<<endl<<"after popback vector is like:"<<endl;
     print_vector(v);
     vector<int> v2=v;
     v2.push_back(555);
     cout<<"after copying to  new vector nd adding an element to it"<<endl;
     print_vector(v2);


    return 0;
}