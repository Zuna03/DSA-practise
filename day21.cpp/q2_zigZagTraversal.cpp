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
int n = 0;
vector<int> zigZagTraversal(Node *root)
{

    // Code here
    vector<int> res;
    if (root == NULL)
        return res;

    stack<Node *> cl;
    stack<Node *> nl;
    bool lr = true;
    cl.push(root);

    while (!cl.empty())
    {
        Node *temp = cl.top();
        cl.pop();
        if (temp)
        {
            res.push_back(temp->data);
            if (lr)
            {
                if (temp->left)
                    nl.push(temp->left);
                if (temp->right)
                    nl.push(temp->right);
            }
            else
            {
                if (temp->right)
                    nl.push(temp->right);
                if (temp->left)
                    nl.push(temp->left);
            }
        }
        if (cl.empty())
        {
            lr = !lr;
            swap(cl, nl);
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

    vector<int> ans = zigZagTraversal(root);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}