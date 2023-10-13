#include <bits/stdc++.h>
#include <string.h>
using namespace std;

class addition_string
{
public:
    char string1[20] = "prep";
    char string2[20] = "Insta";

    void operator+()
    {
        string result=strcat(string1, string2);
        cout << "The concatenation is::::::" <<result << endl;
    }
    void operator++()
    {
        string result=strcpy(string1,string2);
        cout<<"The concatination of the two string is::"<<result<<endl;
    }
};

int main()
{
    addition_string obj;
    +obj;
    ++obj;
    // obj.print();

    return 0;
}