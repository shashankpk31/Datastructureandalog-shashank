#include <bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left, *right;
};

node *newnode(int item)
{
    node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

node *insert(node *root, int key)
{
    if (root == NULL)
        return newnode(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);
    return root;
}
int height(node *root)
{
    int lDepth = height(root->left);
    int rDepth = height(root->right);

    /* use the larger one */
    if (lDepth > rDepth)
        return (lDepth + 1);
    else
        return (rDepth + 1);
}

int odd_even(node *root)
{
    if (!root)
    {
        return 0;
    }
    queue<node *> q;
    q.push(root);
    int level = 0;
    int evensum = 0, oddsum = 0;
    while (!q.empty())
    {
        int size = q.size();
        level += 1;
        while (size > 0)
        {
            node *temp = q.front();
            q.pop();
            if (level % 2 == 0)
                evensum += temp->key;
            else
                oddsum += temp->key;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            size -= 1;
        }
    }
    return (oddsum - evensum);
}

int main()
{
    node* root = newnode(5); 
    root->left = newnode(2); 
    root->right = newnode(6); 
    root->left->left = newnode(1); 
    root->left->right = newnode(4); 
    root->left->right->left = newnode(3); 
    root->right->right = newnode(8); 
    root->right->right->right = newnode(9); 
    root->right->right->left = newnode(7); 
    cout<<"Answer";
    int value=odd_even(root);
    cout << value<<endl;
    return 0;
}
