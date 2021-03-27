#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *push(int item)
{
    node *ptr;
    ptr = new node();
    ptr->data = item;
    ptr->next = NULL;
    return ptr;
}

node *reverse(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node *Add_1(node *head)
{
    node *res = head;
    node *temp, *prev = NULL;
    int carry = 1, sum;
    while (head)
    {
        sum = carry + head->data;
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        head->data = sum;
        temp = head;
        head = head->next;
        /* code */
    }
    if (carry > 0)
    {
        temp->next = push(carry);
    }
    return res;
}

node *add_one(node *head)
{
    head = reverse(head);
    head = Add_1(head);
    return reverse(head);
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
    head = push(1);
    head->next = push(2);
    head->next->next = push(3);
    cout << "Linked list before moving last to front\n";
    printList(head);
    head = add_one(head);
    printList(head);
    return 0;
}
