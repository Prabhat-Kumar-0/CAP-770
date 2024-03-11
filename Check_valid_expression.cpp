#include <iostream>
using namespace std;
#define n 10
char stack[n];
int top = -1;

void push(int data)
{
    if (top == n - 1)
    {
        return;
    }
    top += 1;
    stack[top] = data;
}

void pop()
{
    if (top == -1)
    {
        return;
    }
    top -= 1;
}

bool check(string str)
{

    if (str.length() == 0)
    {
        return true;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        else
        {
            if (str[i] == ')' || str[i] == ']' || str[i] == '}')
            {
                if ((str[i] == ')' && stack[top] != '(') || (str[i] == ']' && stack[top] != '[') || (str[i] == '}' && stack[top] != '{'))
                {
                    return false;
                }
                pop();
            }
        }
    }

    if (top != -1)
    {
        return false;
    }

    return true;
}
int main()
{
    string s = ")))";
    cout << check(s);
}