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

TreeNode *invertTree(TreeNode *root)
{
    TreeNode *temp = root;
    TreeNode *newNode;
    if (temp == NULL)
        return NULL;
    // if (temp->left && temp->right)
    // {
    newNode = temp->left;
    temp->left = temp->right;
    temp->right = newNode;
    //}
    // else if (temp->left)
    // {

    //     temp->right = newNode;
    //     newNode->val = temp->left->val;
    //     temp->left = NULL;
    // }
    // else if (temp->right)
    // {
    //     TreeNode *newNode;
    //     temp->left = newNode;
    //     newNode->val = temp->right->val;
    //     temp->right = NULL;
    // }
    // else
    // {
    //     return root;
    // }
    invertTree(temp->left);
    invertTree(temp->right);
    return root;
}
void preOrder(TreeNode *temp)
{
    if (temp == NULL)
        return;

    cout << temp->val << " ";
    preOrder(temp->left);
    preOrder(temp->right);
}
int main()
{
    TreeNode *temp = new TreeNode(1);
    // temp->left = new TreeNode(2);
    // temp->right = new TreeNode(3);
    // temp->right->right = new TreeNode(4);
    preOrder(temp);
    cout << endl;
    TreeNode *ans = invertTree(temp);
    preOrder(ans);

    return 0;
}