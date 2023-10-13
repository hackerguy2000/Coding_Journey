#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
};

int main()
{
    Rectangle rectobj;
    rectobj.length = 10;
    rectobj.breadth = 20;
    cout << "area is:" << rectobj.length * rectobj.breadth<< endl;

    return 0;
}