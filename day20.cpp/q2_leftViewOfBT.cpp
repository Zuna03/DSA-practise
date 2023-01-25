#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *left;
    Node *right;
    int val;

    Node(int n)
    {
        left = NULL;
        right = NULL;
        val = n;
    }
};
int n = 0;
vector<int> leftView(Node *root)
{

    vector<int> res;
    queue<Node *> q;
    q.push(root);

    if (root == NULL)
        return res;

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (i == 0)
            {
                res.push_back(curr->val);
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }

            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }

    return res;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);

    vector<int> ans = leftView(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}