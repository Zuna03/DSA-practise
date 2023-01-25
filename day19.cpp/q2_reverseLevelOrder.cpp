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

vector<int> reverseLevelOrder(Node *root)
{
    vector<int> res;
    queue<Node *> q;
    q.push(root);
    if (root == NULL)
        return res;
    while (!q.empty())
    {
        Node *t = q.front();
        res.push_back(t->val);
        if (t->right)
            q.push(t->right);
        if (t->left)
            q.push(t->left);

        q.pop();
    }
    reverse(res.begin(), res.end());
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);

    vector<int> res = reverseLevelOrder(root);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}