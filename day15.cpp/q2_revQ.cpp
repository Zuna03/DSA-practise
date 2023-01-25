#include <bits/stdc++.h>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> t;
    while (!q.empty())
    {
        t.push(q.front());
        q.pop();
    }
    while (!t.empty())
    {
        q.push(t.top());
        t.pop();
    }

    return q;
}
int main()
{
    queue<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    queue<int> t = rev(s);
    while (!t.empty())
    {
        cout << t.front() << " ";
        t.pop();
    }
    cout << endl;

    return 0;
}