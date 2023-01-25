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

void mirrorify(Node *root, Node **mirror)
{
    if (root == NULL)
    {
        mirror = NULL;
        return;
    }

    // Create new mirror node from original tree node
    *mirror = new Node(root->data);
    mirrorify(root->left, &((*mirror)->right));
    mirrorify(root->right, &((*mirror)->left));
}
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int n = 0;

int main()
{
    Node *tree = new Node(5);
    tree->left = new Node(3);
    tree->right = new Node(6);
    tree->left->left = new Node(2);
    tree->left->right = new Node(4);

    inorder(tree);
    cout << endl;
    Node *ans;
    mirrorify(tree, &ans);
    inorder(ans);
    return 0;
}