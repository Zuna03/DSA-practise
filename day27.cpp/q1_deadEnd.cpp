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

void storeNodes(Node *root, unordered_set<int> &leafNode, unordered_set<int> &allNodes)
{
    if (root == NULL)
        return;

    allNodes.insert(root->data);
    if (root->right == NULL && root->left == NULL)
    {
        leafNode.insert(root->data);
        return;
    }
    storeNodes(root->left, leafNode, allNodes);
    storeNodes(root->right, leafNode, allNodes);
}

bool isDeadEnd(Node *root)
{
    // Your code here
    if (root == NULL)
        return false;
    unordered_set<int> leafNode, allNodes;
    allNodes.insert(0);

    storeNodes(root, leafNode, allNodes);
    for (auto i = leafNode.begin(); i != leafNode.end(); i++)
    {
        int x = *i;
        /* code */
        if (allNodes.find(x + 1) != leafNode.end() && allNodes.find(x - 1) != leafNode.end())
            return true;
    }
    return false;
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