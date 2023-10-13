#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
     int length;
     int breadth;
     int area;
};
int main()
{
Rectangle obj;//object has been created of rectangle class
obj.length=10, //value of length is assigned to the object
obj.breadth = 25 ;// value of breadth is assigned to the object
obj.area=obj.length*obj.breadth;
cout<<"The area of the rectangle "<<obj.area<<endl;

    return 0;
}