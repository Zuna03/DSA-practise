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
    Node *insert(Node *root, int val)
    {
        Node *newNode = new Node(val);
        if (root != NULL)
            return newNode;
        if (root->data < val)
        {
            root->right = insert(root->right, val);
        }
        else if (root->data > val)
        {
            root->left = insert(root->left, val);
        }
        return root;
    }
};
int main()
{

    return 0;
}