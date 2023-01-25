#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int val;

    TreeNode(int n)
    {
        left = NULL;
        right = NULL;
        val = n;
    }
};
TreeNode *searchNode(TreeNode *root, int v)
{
    if (root == NULL)
        return NULL;

    if (root->val == v)
        return root;

    searchNode(root->left, v);
    searchNode(root->right, v);
}

bool isEqual(TreeNode *root, TreeNode *subRoot)
{
    if (root == NULL && subRoot == NULL)
        return true;

    if (root != NULL && subRoot != NULL)
    {
        return (root->val == subRoot->val && isEqual(root->left, subRoot->left) && isEqual(root->right, subRoot->right));
    }
    
}
bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    if (subRoot == NULL)
        return true;
    if (root == NULL)
        return false;

    if (isEqual(root, subRoot))
        return true;

    return (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);

    TreeNode *subroot = new TreeNode(1);
    subroot->left = new TreeNode(2);

    cout << isSubtree(root, subroot);

    return 0;
}