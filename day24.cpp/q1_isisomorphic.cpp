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
bool isIsomorphic(Node *root1, Node *root2)
{
    Node *temp;
    // add code here.
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL && root2 == NULL)
        return false;
    if (root1->data != root2->data)
        return false;

    return (isIsomorphic(root1->left, root2->left) && isIsomorphic(root1->right, root2->right)) || (isIsomorphic(root1->left, root2->right) && isIsomorphic(root1->right, root2->left));
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

    return 0;
}