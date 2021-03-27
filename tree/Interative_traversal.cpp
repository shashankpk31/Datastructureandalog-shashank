#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void inorder(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (curr || s.empty() == false)
    {
        while (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    stack<node *> s;
    s.push(root);

    while (!s.empty())
    {
        node *node = s.top();
        cout << node->data<<" ";
        s.pop();
        if (node->right)
            s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
    cout << endl;
}

void postorder(node *root)
{
    stack<node *> s1, s2;
    s1.push(root);
    node *node;
    while (!s1.empty())
    {
        node = s1.top();
        s1.pop();
        s2.push(node);
        if (node->left)
        {
            s1.push(node->left);
        }
        if (node->right)
        {
            s1.push(node->right);
        }
    }
    while (!s2.empty())
    {
        node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
    cout<<endl;
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}