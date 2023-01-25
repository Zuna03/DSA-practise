#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void createNode(int val, Node *head)
{
    Node *n = new Node(val);
    Node *temp = head;

    if (head = NULL)
    {
        head = n;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}
Node *segregate(Node *head)
{
    Node *temp = head;
    int n0 = 0, n1 = 0, n2 = 0;
    while (temp != NULL)
    {
        if (temp->data == 0)
            n0++;
        else if (temp->data == 1)
            n1++;
        else
            n2++;

        temp = temp->next;
    }
    int i = 0;
    Node *res = new Node(0);
    while (i < n0 - 1)
    {
        createNode(0, res);
        i++;
    }
    while (i < n0 + n1-1)
    {
        createNode(1, res);
        i++;
    }

    while (i < n0 + n1 + n2-1)
    {
        createNode(2, res);
        i++;
    }
    return res;
}

void printNode(Node *node)
{

    Node *temp = node;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    createNode(0, head);
    createNode(2, head);
    createNode(1, head);
    createNode(2, head);
    createNode(0, head);
    createNode(0, head);
    createNode(2, head);

    printNode(head);
    Node *res = segregate(head);

    printNode(res);

    return 0;
}