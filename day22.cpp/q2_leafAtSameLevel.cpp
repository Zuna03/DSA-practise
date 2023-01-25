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

bool checkUtil(Node *root, int level, int *leafLevel)
{
    if (root->left == NULL && root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level;
            return true;
        }
        return (level == *leafLevel);
    }
    return checkUtil(root->left, level + 1, leafLevel) &&
           checkUtil(root->right, level + 1, leafLevel);
}

bool check(Node *root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}

int main()
{
    Node *tree = new Node(5);
    tree->left = new Node(3);
    tree->right = new Node(6);
    // tree->left->left = new Node(2);
    // tree->left->right = new Node(4);

    cout << check(tree);

    return 0;
}