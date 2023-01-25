#include <bits/stdc++.h>
using namespace std;

class Stack
{

    queue<int> q1, q2;

public:
    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        int x;
        while (q1.size() != 1)
        {
            x = q1.front();
            q2.push(x);
            q1.pop();
        }
        x = q1.front();
        q1.pop();

        queue<int> q = q1;
        q1 = q2;
        q2 = q;

        return x;
    }

    int top()
    {
        int x;
        while (q1.size() != 1)
        {
            x = q1.front();
            q2.push(x);
            q1.pop();
        }
        x = q1.front();
        q1.pop();

        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return x;
    }

    bool empty()
    {
        if (q1.size() == 0 && q2.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    return 0;
}