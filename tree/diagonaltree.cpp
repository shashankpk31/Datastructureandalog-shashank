#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};
node *newNode(int item)
{
    struct node *temp = new node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
struct node *insert(struct node *node, int data)
{

    if (node == NULL)
        return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

void diagnal(node *root, int d, map<int, vector<int>> &diagnalmap)
{
    if (!root)
        return;
    diagnalmap[d].push_back(root->data);
    diagnal(root->left, d + 1, diagnalmap);
    diagnal(root->right, d, diagnalmap);
}

void solve(node *root)
{
    map<int, vector<int>> diagnalmap;
    int d = 0;
    diagnal(root, d, diagnalmap);
    for (auto it : diagnalmap)
    {
        vector<int> v = it.second;
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
}

int main()
{
    node *root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    solve(root);

    return 0;
}