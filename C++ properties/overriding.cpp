#include <bits/stdc++.h>
using namespace std;

class A
{

    virtual function1()
    {
        cout << "I have called the virtual function!!" << endl;
    }

    function1()
    {
        cout << "The normal function has been called!!" << endl;
    }
};

int main()
{
    A.a;
    a *ptr;
    function(&ptr);

    return 0;
}