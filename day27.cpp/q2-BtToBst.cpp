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

void storeInorder(Node *root, vector<int> &inorder)
{
    if (root == NULL)
        return;

    storeInorder(root->left, inorder);
    inorder.push_back(root->data);
    storeInorder(root->right, inorder);
}

void inorderBST(Node *root, vector<int> inorder, int &v)
{
    if (root == NULL)
        return;

    inorderBST(root->left, inorder, v);
    root->data = inorder[v];
    v++;
    inorderBST(root->right, inorder, v);
}

Node *binaryTreeToBST(Node *root)
{
    vector<int> inorder;
    storeInorder(root, inorder);

    sort(inorder.begin(), inorder.end());

    int i = 0;
    inorderBST(root, inorder, i);

    return root;
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return 0;
}