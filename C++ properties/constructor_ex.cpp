#include <iostream>
using namespace std;
class A
{
    int i = 15;

public:
    A()
    {
        i = 19;
        cout << "The constructor has been called" << endl;
    }

    int return_value()
    {
        return i;
    }
};
int main()
{
    // cout<<"The value of i before obeject gets called is::"<<i<<endl;
    A object; // object has been formed
    cout << "The value of i after the object has been formed is::" << object.return_value() << endl;

    return 0;
}