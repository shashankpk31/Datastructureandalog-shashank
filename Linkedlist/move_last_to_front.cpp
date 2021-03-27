#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void push(node **head, int item)
{
    node *ptr;
    ptr = new node();
    ptr->data = item;
    ptr->next = *head;
    *head = ptr;
}
void Move_to_front(node **head)
{
    if (*head == NULL || (*head)->next == NULL)
        return;

    node *last = *head, *seclast = NULL;

    while (last->next != NULL)
    {
        seclast = last;
        last = last->next;
    }
    seclast->next = NULL;
    last->next = *head;
    *head = last;
}

void printList(node *start)
{
    while (start)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    push(&head, 6);

    cout << "Linked list before moving last to front\n";
    printList(head);
    Move_to_front(&head);
    printList(head);
    return 0;
}
