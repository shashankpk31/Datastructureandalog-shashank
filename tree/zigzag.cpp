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

void countPairs(node *root)
{
    if (!root)
        return;
    stack<node *> curr;
    stack<node *> newlevel;
    curr.push(root);
    bool lefttoright = true;
    while (!curr.empty())
    {
        node *temp = curr.top();
        curr.pop();
        if (temp)
        {
            cout << temp->data << " ";
        }
        if (lefttoright)
        {
            if (temp->left)
                newlevel.push(temp->left);
            if (temp->right)
                newlevel.push(temp->right);
        }
        else
        {
            if (temp->right)
                newlevel.push(temp->right);
            if (temp->left)
                newlevel.push(temp->left);
        }
        if (curr.empty())
        {
            lefttoright = !lefttoright;
            swap(curr, newlevel);
        }
    }
}

int main()
{
    struct node* root1 = newNode(1); 
    root1->left = newNode(2); 
    root1->right = newNode(3); 
    root1->left->left = newNode(7); 
    root1->left->right = newNode(6); 
    root1->right->left = newNode(5); 
    root1->right->right = newNode(4); 
    cout << "ZigZag Order traversal of binary tree is \n"; 
    countPairs(root1);

    return 0;
}