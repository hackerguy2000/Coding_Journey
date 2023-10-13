#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real, imag;

public:
    void print()
    {
        if (imag > 0)
            cout << real << "+" << imag << "j" << endl;
        else
            cout << real << " " << imag << "j" << endl;
    }
    void getdata()
    {
        cin >> real >> imag;
    }
    void operator++()
    {
        ++real;
        ++imag;
    }
    void operator++(int)//post increment operator overloading function needs a dummy parameter of data type of its data
    {
        real++;
        imag++;
    }
};

int main()
{
    Complex p1;
    p1.getdata();
    cout << "pre increment::" << endl;
    ++p1;
    p1.print();
    cout << "Post increment::" << endl;
    p1++;
    p1.print();

    return 0;
}