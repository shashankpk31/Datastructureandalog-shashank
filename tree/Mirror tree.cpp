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

void mirror(node *root)
{
    if (root)
    {
        mirror(root->left);
        mirror(root->right);
        node *temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

int main()
{
     struct node *root = newnode(1); 
    root->left = newnode(2); 
    root->right = newnode(3); 
    root->left->left = newnode(4); 
    root->left->right = newnode(5); 
    cout << "Inorder traversal of tree ";
    inorder(root);
    mirror(root);
    cout << "Inorder traversal of mirror tree ";
    inorder(root);
    cout << endl;
    return 0;
}
