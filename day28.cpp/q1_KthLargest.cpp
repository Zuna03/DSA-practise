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
int ans;
void solve(Node *root, int &idx, int k)
{
    if (root == NULL)
        return;

    solve(root->right, idx, k);
    if (idx == k)
    {
        ans = root->data;
        idx++;
        return;
    }
    else
        idx++;
    solve(root->left, idx, k);
}
int kthLargest(Node *root, int K)
{
    int idx = 1;
    ans = -1;
    solve(root, idx, K);
    return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);

    return 0;
}