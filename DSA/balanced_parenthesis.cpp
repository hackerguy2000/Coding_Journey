#include <bits/stdc++.h>
using namespace std;
bool check_pair(char top, char exp)
{
    if ((top = '(' && exp == ')') || (top == '{' && exp == '}') || (top == '[' && exp == ']'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool check_expression(string exp)
{
    stack<char> s;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if ((exp[i] == '(') || (exp[i] == '{') || (exp[i] == '['))
        {
            s.push(exp[i]);
           // continue;
        }

        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (check_pair(s.top(), exp[i]))
            {
                s.pop();
                continue;
            }

            return false;
        }
    }
    return s.empty();
}

int main()
{
    string str = "{}()[";

  if(!check_expression(str))
  {
    cout<<"The expression is balanced"<<endl;

  }
  else{
    cout<<"The expression is not balanced at all"<<endl;
  }
    return 0;
}