#include <iostream>
using namespace std;

class Parent // Parent class has defined here
{

public: // public members of parent class which are accessible within this class,outside in other class and within main class as well
    int var1;

protected: // protected members of parent class which are accessible within this class, outside only in child class  but not in the main function
    int var2;

private: // private members of parent class which is only accessible within this class and are not accessible outside the class or in main
    int var3;
};

class child : public Parent // definition technique of child class of a parent class
{
    //here all of the element of the parent class will be inherited without defining them we can use it
  protected:
  int var2;
  void calculation()
  {
    cout<<"The calculation is::"<<var1+var2;//we can use var2 as it is protected
    
  }
};
int main()
{   
child c;
//c.operation();
c.var1=15;
//c.var2=19;   //we can't do this here bcz the var2 is protected from parent class and it is only accessible in the child class only



    return 0;
}
