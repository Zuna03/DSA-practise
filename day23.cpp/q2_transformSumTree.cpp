#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        data = data;
        left = NULL;
        right = NULL;
    }
};
int sum = 0;
int toSumTree(Node *node)
{
    // Your code here
    int old = node->data;
    node->data = toSumTree(node->left) + toSumTree(node->right);

    return old + node->data;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    // root->right=new Node(3);
    root->left->left = new Node(4);
    // root->left->right=new Node(5);
    // root->right->left=new Node(6);
    // root->right->right=new Node(7);

    toSumTree(root);

    return 0;
}