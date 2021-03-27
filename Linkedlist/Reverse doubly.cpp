#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
};

void push(node **head, int item)
{
    node *ptr = new node;
    ptr->data = item;
    ptr->next = *head;
    ptr->prev = NULL;
    if ((*head) != NULL)
    {
        (*head)->prev = ptr;
    }

    *head = ptr;
}

void Rotate(node **h1)
{
    node *temp = NULL;
    node *curr = *h1;

    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != NULL)
    {
        *h1 = temp->prev;
    }
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
    node *head = NULL;

    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout << "LinkList::";
    print(head);
    Rotate(&head);
    cout << "LinkList::";
    print(head);

    return 0;
}
