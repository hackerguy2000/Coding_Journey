#include <bits/stdc++.h>
using namespace std;
class prepinsta
{
private:
    int x, y;

public:
    prepinsta()
    {
        cout << "Default Constructor called" << endl;
    }
    prepinsta(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    prepinsta(const prepinsta &p1)
    {
        x = p1.x;
        y = p1.y;
        cout << "Copy constructor has been called" << endl;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
};
int main()
{
    prepinsta p1(10, 20); // parameterized constructor formed
    prepinsta p2(p1);     // copying all data members and its corresponding value of p1 object to p2 object
    prepinsta p3 = p1;    // same thing copying all of the things of p1 to p3
   // prepinsta p4;
    //p4 = p1;

    cout << "p1.x is " << p1.getX << "p1.y is" << p1.getY << endl;

    return 0;
}