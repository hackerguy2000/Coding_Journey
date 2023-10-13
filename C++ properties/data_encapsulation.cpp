#include <iostream>
using namespace std;

class encapsulation
{

private:
    int x; // data is hidden from the outside world

public:
    void setter(int a) // this is a setter by which I have set the value
    {
        x = a; // we want to set the value of x which is a private member of the class
    }
    int getter()
    {
        return x;
    }
};

int main()
{
    encapsulation obj;

    obj.setter(45);
    cout << "the value of x  is ::" << obj.getter;

    return 0;
}