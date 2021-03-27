
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

void fillmap(node *root, int d, int l, map<int, pair<int, int>> &m)
{

    if (root == NULL)
    {
        return;
    }
    if (m.count(d) == 0)
    {
        m[d] = make_pair(root->data, l);
    }
    else if (m[d].second > l)
    {
        m[d] = make_pair(root->data, l);
    }
    fillmap(root->left, d - 1, l + 1, m);
    fillmap(root->right, d + 1, l + 1, m);
}
void topView(node *root)
{

    map<int, pair<int, int>> m;
    fillmap(root, 0, 0, m);
    for (auto i = m.begin(); i != m.end(); i++)
    {
        cout << i->second.first << " ";
    }
}
int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);

    topView(root);

    return 0;
}