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

int cout_pair(node *h1, int x)
{
    int count = 0;
    while (h1)
    {
        if ((h1->data) == x)
        {
            count++;
        }
        h1 = h1->next;
    }
    return count;
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
    cout << endl;
}

int main()
{
    node *h1 = NULL;
    push(&h1, 1);
    push(&h1, -1);
    push(&h1, 1);
    push(&h1, 5);
    push(&h1, 1);
    int x = 1, count;

    print(h1);
    count = cout_pair(h1, x);
    cout << " " << count << " ";
    return 0;
}
