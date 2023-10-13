#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num_course;
    cout << "Enter number of course:" << endl;
    cin >> num_course;
    string str[num_course];
    string str2;
    int flag=0;
    if (num_course == 0)
    {
        cout << "Invalid range" << endl;
        exit(0);
    }
    cout<<"Enter the name of the courses::"<<endl;
    for (int i = 0; i < num_course; i++)
    {
       cin>>str[i];
    }
    cout << "Enter the course to be searched::" << endl;
    cin>>str2;
    for (int i = 0; i < num_course; i++)
    {
        if (str2==str[i])
        {
            cout << str2 << " Course is available";
            flag=1;
        }
        
    }
    if(flag==0)
    {
        cout<<"Course is not available"<<endl;
    }

    return 0;
}