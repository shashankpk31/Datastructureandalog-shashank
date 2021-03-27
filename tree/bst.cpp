#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};

int max(int a, int b) {
  return (a > b) ? a : b;
}



struct node *newnode(int item)
{
    struct node *Node = new node;
    Node->data = item;
    Node->left = Node->right = NULL;
    return Node;
}

void *inorder(node *cur)
{
    if (cur == NULL)
    {
        return;
    }
    inorder(cur->left);
    cout << cur->data;
    inorder(cur->right);
}

node *findMinnode(node *cur)
{
    while (cur->left != NULL)
    {
        cur = cur->left;
    }
    return cur;
}

node *insertion(node *cur, int item)
{
    if (cur == NULL)
    {
        return newnode(item);
    }
    if (item < cur->data)
    {
        cur->left = insertion(cur->left, item);
    }
    else
    {
        cur->right = insertion(cur->right, item);
    }
    return cur;
}

void *search(node *cur, int item, node *parent)
{
    while (cur != NULL && cur->data != item)
    {
        parent = cur;
        if (item < cur->data)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
}

void *deletion(node *root, int item)
{
    node *parent = NULL;
    node *cur = root;
    search(cur, item, parent);
    if (cur == NULL)
    {
        return;
    }
    if (cur->left == NULL && cur->right == NULL)
    {
        if (cur != root)
        {
            if (parent->left == cur)
            {
                parent->left = NULL;
            }
            else
            {
                parent->right = NULL;
            }
        }
        else
        {
            root = NULL;
        }

        free(cur);
    }
    else if (cur->left && cur->right)
    {
        node *succ = findMinnode(cur->right);
        int val = succ->data;
        deletion(root, succ->data);
        cur->data = val;
    }
    else
    {
        node *child = (cur->left) ? cur->left : cur->right;
        if (cur != root)
        {
            if (cur == parent->right)
            {
                parent->right = child;
            }
            else
            {
                parent->left = child;
            }
        }
        else
        {
            root = child;
        }
        free(child);
    }
}

int main()
{
    struct node *root = NULL;
    root = insertion(root, 50);
    insertion(root, 30);
    insertion(root, 20);
    insertion(root, 40);
    insertion(root, 70);
    insertion(root, 60);
    insertion(root, 80);
    inorder(root);

    return 0;
}