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

struct node *insert(struct node *node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);
    /* Otherwise, recur down the tree */
    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    /* return the (unchanged) node pointer */
    return node;
}

int countPairs(node *root1, node *root2)
{
    int count = 0;
    node *p1, *p2;
    p1 = root1;
    p2 = root2;
    while (p1)
    {
        while (p2)
        {
            if (p1->data == p2->data)
            {
                count++;
            }
            inorder(p1->left);
            inorder(p1->right);
        }
        inorder(p2->left);
        inorder(p2->right);
    }
    return count;
}

int main()
{
    struct node *root1 = NULL;
    root1 = insert(root1, 50);
    insert(root1, 30);
    insert(root1, 20);
    insert(root1, 40);
    insert(root1, 70);
    insert(root1, 60);
    insert(root1, 80);
    struct node *root2 = NULL;
    root2 = insert(root2, 50);
    insert(root2, 30);
    insert(root2, 20);
    insert(root2, 40);
    insert(root2, 70);
    insert(root2, 60);
    insert(root2, 80);

    int count = countPairs(root1, root2);
    return 0;
}