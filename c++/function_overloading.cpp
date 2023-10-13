#include <bits/stdc++.h>
using namespace std;

class geek
{
public:
    void func(int a)
    {
        cout << "Rahul is a good boy" << a << endl;
    }

    void func(double b)
    {
        cout << "Rahul is not a bad guy" << b << endl;
    }
};

int main()
{
    geek obj;

    obj.func(8.2); // try with 8 as parameter to do it with by parameter integer type

    return 0;
}