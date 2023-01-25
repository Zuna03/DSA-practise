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

void removeDuplicates(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    unordered_set<int> seen;

    while (curr != NULL)
    {
        if (seen.find(curr->data) != seen.end())
        {
            prev->next = curr->next;
            delete (curr);
        }
        else
        {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
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
    Node *n2 = new Node(5);
    Node *n3 = new Node(1);
    Node *n4 = new Node(2);
    Node *head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    printNode(head);
    removeDuplicates(head);
    printNode(head);

    return 0;
}