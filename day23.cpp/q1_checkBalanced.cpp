#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int data;

    Node(int n)
    {
        left = NULL;
        right = NULL;
        data = n;
    }
};

int height(Node *root)
{
    if (root == NULL)
        return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
        return true;
    if (isBalanced(root->left) == false)
        return false;
    if (isBalanced(root->right) == false)
        return false;

    //  Your Code here
    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) >= 1)
        return false;

    return true;
}

int main()
{
    Node *tree = new Node(5);
    tree->left = new Node(3);
    // tree->left->right = new Node(3);
    tree->right = new Node(6);
    tree->right->left = new Node(6);
    tree->right->right = new Node(6);
    // tree->left->left = new Node(2);
    // tree->left->right = new Node(4);

    cout << isBalanced(tree);

    return 0;
}