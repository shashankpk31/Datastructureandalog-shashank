#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *reverse(node *head, int k)
{
    node *curr = head;
    node *join = NULL, *tail = NULL, *prev = NULL, *newnode = NULL, *temp = NULL;
    int t = 0;

    while (curr)
    {
        t = k;
        join = curr;
        prev = NULL;
        while (curr && t--)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        if (!newnode)
        {
            newnode = prev;
        }
        if (tail)
        {
            tail->next = prev;
        }
        tail = join;
    }
    return newnode;
}

void inser(node **head, int item)
{

    node *ptr = new node();
    ptr->data = item;
    ptr->next = *head;
    *head = ptr;
}

void print(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    int k;
    cin>>k;
    struct node *head = NULL;
    inser(&head, 9);
    inser(&head, 8);
    inser(&head, 7);
    inser(&head, 6);
    inser(&head, 5);
    inser(&head, 4);
    inser(&head, 3);
    inser(&head, 2);
    inser(&head, 1);
    print(head);
    head=reverse(head,k);
    print(head);
    return 0;
}
