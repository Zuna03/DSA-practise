#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }
};

int minValue(Node *root)
{
    // Code here
    Node* curr=root;
    while (curr->left !=NULL)
    {
        curr=curr->left;
    }
    return curr->data;
}


int main()
{

    return 0;
}