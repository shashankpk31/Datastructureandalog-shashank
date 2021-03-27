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

void Lb(node *root)
{
    if (!root)
        return;
    cout << root->data;
    Lb(root->left);
}
void rb(node *root)
{
    
    if (!root)
    {
        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }
    }

}
void Lb(node *root)
{
    if (!root)
        return;
    cout << root->data;
    Lb(root->left);
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