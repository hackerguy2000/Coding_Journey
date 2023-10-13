#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Geeks for geeks";
    cout << "The capacity of the string is :::" << str.capacity() << endl;

    str.resize(10);
    cout << "the string after rezise turned into::" << str << endl;
    cout << "The capacity of the string is :::" << str.capacity() << endl;
    str.shrink_to_fit();
    cout << "The capacity of the string after string to fit is ::" << str.length() << endl;
    string::iterator itr;
    string::iterator itr2;
    for (itr = str.begin(); itr != str.end(); itr++)
    {
        cout << *itr;
    }
    cout<<endl;
    for (itr2 = str.rbegin(); itr2 != str.rend(); itr2++)
    {
        cout << *itr2;
    }

    return 0;
}