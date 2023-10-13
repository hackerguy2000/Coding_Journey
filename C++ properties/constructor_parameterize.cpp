#include <iostream>
using namespace std;
class Prepinsta
{
    int x, y;

public:
    void display()
    {
        cout << "      The values are::   " << x << "    and    " << y << endl;
    }
    Prepinsta(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
};

int main()
{
    
    Prepinsta myobj(10, 20);
    myobj.display();
    myobj = {100, 200}; // conversion constructor of having 2 parameter will be declared as this
    myobj.display();
    return 0;

}