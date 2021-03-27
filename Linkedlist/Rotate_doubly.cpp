#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node*prev;
    node *next;
};

void push(node **head, int item)
{
    node *ptr = new node;
    ptr->data = item;
    ptr->next = *head;
    ptr->prev=NULL;
    if ((*head)!=NULL)
    {
        (*head)->prev=ptr;
    }
    
    *head = ptr;
}

 void Rotate(node **h1, int n)
{
    if ((n==0))
     return ;
    node*curr=*h1;
    int count=1;
    while (count<n && curr)
    {
       curr=curr->next;
       count++;
    }
    if (curr==NULL)
        return;
    node*nthnode=curr;

    while (curr->next!=NULL)
       curr=curr->next;
    curr->next=*h1;
    (*h1)->prev=curr;
    *h1=nthnode->next;
    (*h1)->prev=NULL;
    nthnode->next=NULL;
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
    cout<<endl;
}

int main()
{
     node*head=NULL;

     push(&head,8);
     push(&head,7);
     push(&head,6);
     push(&head,5);
     push(&head,4);
     push(&head,3);
     push(&head,2);
     push(&head,1);
     int n=3;
     cout<<"LinkList::";
     print(head);
     Rotate(&head,n);
     cout<<"LinkList::";
     print(head);

    return 0;
}
