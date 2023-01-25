#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int v)
    {
        key = v;
        left = NULL;
        right = NULL;
    }
};

Node *inpre(Node *root)
{
    Node *p = root->left;
    while (p->right)
    {
        p = p->right;
    }
    return p;
}
Node* insuc(Node* root)
{
    Node* s=root->right;
    while (root->left)
    {
        /* code */
        root=root->left;
    }
    return s;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root)
    return;
    if(root->key==key)
    {
        pre=inpre(root->left);
        suc=insuc(root->right);
        return;
    }
    if(key > root->key)
    {
        pre=root;
        findPreSuc(root->right,pre,suc,key);
    }
    else if(key < root->key)
    {
        suc=root;
        findPreSuc(root->left,pre,suc,key);
    }

}

int main()
{

    return 0;
}