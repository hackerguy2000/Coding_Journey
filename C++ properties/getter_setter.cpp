#include <iostream>
using namespace std;
class shape
{
    int height, width; // height and width of shape class is private here, so it cannot be accessed outside this class.
                       // so in order to use height and width we need to use getter and setter

public:
    void setheight(int h)
    {
        height = h; // setters
    }
    void setwidth(int w)
    {
        width = w; // setters
    }
    int getheight()
    {
        return height; // getters
    }
    int getwidth()
    {
        return width; // getters
    }
};
int main()
{
    shape obj;
    obj.setheight(150);
    obj.setwidth(180);
    cout << "The height of the object is::" << obj.getheight() << endl;
    cout << "The width of the object is:::" << obj.getwidth() << endl;

    return 0;
}