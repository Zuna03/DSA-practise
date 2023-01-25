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

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
        return true;

    if (p == NULL || q == NULL || p->val != q->val)
        return false;

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    struct TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    // root2->right = new TreeNode(3);

    cout << isSameTree(root2, root);

    return 0;
}