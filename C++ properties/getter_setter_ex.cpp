#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length, breadth;
    int area()
    {
        return length * breadth; // this function is here getters as we are fetching value from this function
    }
};

int main()
{
    Rectangle rectobj;
    rectobj.breadth = 21;
    rectobj.length = 25;
    cout << "The area is:::" << rectobj.area() << endl;

    return 0;
}