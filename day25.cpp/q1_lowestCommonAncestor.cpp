#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int v)
    {
        val = v;
        left = NULL;
        right = NULL;
    }
};

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL || root==p || root==q)
        return root;

    TreeNode *l = lowestCommonAncestor(root->left, p, q);
    TreeNode *r = lowestCommonAncestor(root->right, p, q);

    if (l == NULL)
        return r;
    else if (r == NULL)
        return r;
    else
        return root;
}
int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    // root->right=new TreeNode(3);
    root->left->left = new TreeNode(4);
    // root->left->right=new TreeNode(5);
    // root->right->left=new TreeNode(6);
    // root->right->right=new TreeNode(7);

    return 0;
}