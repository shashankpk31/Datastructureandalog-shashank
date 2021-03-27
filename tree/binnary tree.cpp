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
        cout << root->key;
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

node *minintree(node *root)
{
    node *curr = root;
    while (curr->left && curr)
    {
        curr = curr->left;
    }
    return curr;
}

node *deletenode(node *root, int key)
{
    if (root == NULL)
        return root;
    if (key<root->key)
    {
       root->left=deletenode(root->left,key);
    }
    else if (key>root->key)
    {
        root->right=deletenode(root->right,key);
    }
    else
    {
        if (root->left==NULL)
        {
           node*temp=root->right;
           free(root);
           return temp;
        }
        else if (root->right==NULL)
        {
            node*temp=root->left;
           free(root);
           return temp;
        }
        node *temp=minintree(root->right);
        root->key=temp->key;
        root->right=deletenode(root->right,temp->key);
    }
    return root;
}

int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    cout<<"Inorder traversal of tree";
    inorder(root);
   
    cout << "\nDelete 20\n";
    root = deletenode(root, 20);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 30\n";
    root = deletenode(root, 30);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    cout << "\nDelete 50\n";
    root = deletenode(root, 50);
    cout << "Inorder traversal of the modified tree \n";
    inorder(root);
 
    return 0;
}