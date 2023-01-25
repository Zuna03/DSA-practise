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
int maxDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int lh = maxDepth(root->left);
    int rh = maxDepth(root->right);

    return max(lh, rh) + 1;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);

    cout << maxDepth(root);

    return 0;
}