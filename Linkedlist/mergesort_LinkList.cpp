#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void push(node **head, int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = *head;
    *head = ptr;
}

void printList(node*head)
{
     cout<<endl;
    while (head)
    {
      cout<<head->data<<" ";
      head=head->next;
    }
     cout<<endl;
}
// here we create  afunction  for merge sort in Linklist
node *sortedmerge(node *a, node *b);
void splitLink(node *source, node **a, node **b);

void mergesort(node **headref)
{
    node *head = *headref;
    node *a, *b;
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    splitLink(head, &a, &b); //split link is used here to split two linklist into half
    //sort both of them .
    mergesort(&a);
    mergesort(&b);
    //assigning sorted merge to headref for merging splited link list

    *headref = sortedmerge(a, b);
}

void splitLink(node *source, node **f, node **b)
{
    node *fast, *slow;
    slow = source;
    fast = source->next;
    while (fast)
    {
        fast = fast->next;
        while (fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *f = source;
    *b = slow->next;
    slow->next = NULL;
}

node *sortedmerge(node *a, node *b)
{

    node *r = NULL;
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;

    if (a->data <= b->data)
    {
        r = a;
        r->next = sortedmerge(a->next, b);
    }
    else
    {
        r = b;
        r->next = sortedmerge(a, b->next);
    }

    return r;
}

int main()
{
    node*a=NULL;
    push(&a,15);
    push(&a,10);
    push(&a,5);
    push(&a,20);
    push(&a,3);
    push(&a,2);
    printList(a);
    mergesort(&a);
    cout<<"sorted LinkList is::\n";
     printList(a);

    return 0;
}