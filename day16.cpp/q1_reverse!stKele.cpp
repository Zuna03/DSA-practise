#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;
    int i = 0;
    while (i < k)
    {
        s.push(q.front());
        q.pop();
        i++;
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    for (i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
}

void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    display(q);
    queue<int> res = modifyQueue(q, 3);
    display(res);

    return 0;
}