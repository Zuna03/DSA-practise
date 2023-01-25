#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

long long multiplyTwoLists(Node *l1, Node *l2)
{
    int num1 = 0, num2 = 0;
    while (l1 || l2)
    {
        if (l1)
        {
            num1 = num1 * 10 + l1->data;
            l1 = l1->next;
        }
        if (l2)
        {
            num2 = num2 * 10 + l2->data;
            l2 = l2->next;
        }
    }

    return num1 * num2;
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
    Node *n1 = new Node(1);
    Node *n2 = new Node(5);
    Node *n3 = new Node(1);

    Node *n4 = new Node(2);
    Node *n5 = new Node(3);

    Node *head1 = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    Node *head2 = n4;
    n4->next = n5;
    n5->next = NULL;

    cout << multiplyTwoLists(head1, head2);
    return 0;
}