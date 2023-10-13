#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    int max;
    int *arr;

public:
    Stack(int x)
    {
        top = -1;
        max = x;
        arr = new int[max];
    }
    bool push(int x);
    int pop();
    void peek();
    void display();
    int isEmpty();
    int isFull();
};
 bool Stack::push (int x)
{
     if (top >= (max- 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        arr[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
int Stack::pop()
{
    if(top<0)
    {
        cout<<"The stack is underflow"<<endl;
        return 0;
    }
    else{
        cout<<"The popped element is ::"<<endl;
        int x=arr[top--];
        return x;
    }
    
}
void Stack::peek()
{
    if(top<0)
    {
        cout<<"The stack is underflow, nothing to peek"<<endl;
        exit(0);
    }
    else
    {
        cout<<"The peeked value of the stack is::"<<arr[top]<<endl;

    }
}
void Stack::display()
{
    cout<<"The stack is::"<<endl;
    for(int i=top;i>=0;i--)
    {
        cout<<"  "<<endl<<arr[i];
    }
    cout<<endl;
}

int main()
{
    Stack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.display();
    cout<<s.pop()<<endl;
    s.display();
    s.peek();


    return 0;
}