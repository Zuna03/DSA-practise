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
} * head;

void deleteNode(Node *node)
{
    Node *prev;
    if (node == NULL)
        return;
    else
    {
        while (node->next != NULL)
        {
            node->data = node->next->data;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
    }
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
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    printNode(head);
    deleteNode(n1);
    printNode(head);

    return 0;
}