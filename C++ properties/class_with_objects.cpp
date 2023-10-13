#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()// member function of class 
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle obj;
    obj.length = 10,
    obj.breadth = 20;
    cout << "The area of the rectangle is  " << obj.area() << endl;

    return 0;
}