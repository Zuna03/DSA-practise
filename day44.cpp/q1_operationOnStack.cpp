#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
node *head = NULL;
node *mid = NULL;
int cnt = 0;

void push(int val)
{
    node *newnode = new node(val);
    if (cnt == 0)
    {
        head = newnode;
        mid = newnode;
        head = head->next;
    }
    head->next = newnode;
    newnode->prev = head;
    head = head->next;
    if (cnt % 2 == 1)
        mid = mid->next;
    cnt++;
}
int pop()
{
    int res = 0;
    if (cnt == 0)
        return -1;
    else
    {
        res = head->data;
        if (cnt == 1)
        {
            head = NULL;
            mid = NULL;
        }
        else
        {
            head = head->prev;
            head->next = NULL;

            if (cnt % 2 == 0)
                mid = mid->prev;
        }
        cnt--;
    }
    return res;
}
int middle()
{
    if (cnt == 0)
        return -1;
    return mid->data;
}

int main()
{

    return 0;
}