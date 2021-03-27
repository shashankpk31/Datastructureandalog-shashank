#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void *push(node **head, int item)
{
    node *ptr = new node;
    ptr->data = item;
    ptr->next = *head;
    *head = ptr;
}

node *insection(node *h1, node *h2)
{
    node *p1 = h1, *p2 = h2;
    if (p1 == NULL || p2 == NULL)
    {
        return NULL;
    }
    while (p1 != p2)
    {
        p1 = p1->next;
        p2 = p2->next;
        if (p1 == p2)
        {
            return p1;
        }
        if (p1 == NULL)
        {
            p1 == h2;
        }
        if (p2 == NULL)
        {
            p2 == h1;
        }
    }
    return p1;
}

void print(node *head)
{
    if (head == NULL)
        cout << 'NULL';
    while (head->next != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << head->data;
}

int main()
{
    node *h1 = NULL, *h2 = NULL;
    push(&h1, 30);
    push(&h1, 15);
    push(&h1, 9);
    push(&h1, 6);
    push(&h1, 3);

    push(&h2, 30);
    push(&h2, 15);
    push(&h2, 10);
    push(&h2, 4);

    print(h1);
    cout << endl;
    print(h2);

    
    return 0;
}