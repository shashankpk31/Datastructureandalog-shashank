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


void insert(node **head ,int item)
{
      node *ptr=push(item);
      ptr->next=*head;
      *head=ptr;
}


node *reverse(node **head)
{
    node *prev = NULL;
    node *curr = *head;
    node *next;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head=prev;
}

node *Add(node *x,node *y,node**head)
{
  node *prev=NULL;
     int carry=0;
     while (x||y)
     {
        int sum=0;
        if(x)
           sum+=x->data;
        if (y)
           sum+=y->data;
        sum+=carry;
        carry =sum/10;
        sum=sum%10;  
        node *ptr=push(sum);
        if (*head==NULL)
        {
            prev=ptr;
            *head=ptr;
        }
        else
        {
            prev->next=ptr;
            prev=ptr;
           
        }
        if (x)
           x=x->next;
        if(y)
            y=y->next;   
     }
     if (carry !=0)
     {
        insert(&(prev->next),carry);
     }
}

node *add_List(node *x,node*y)
{
   node *prev=NULL;
   reverse(&x);
   reverse(&y);
   Add(x,y,&prev);
   reverse(&prev);
   return prev;
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
    int x,y;
    cin>>x>>y;
    node*X=NULL;
    node*Y=NULL;
    while (x)
    {
        insert(&X,x%10);
        x=x/10;
    }
    while (y)
    {
        insert(&Y,y%10);
        y=y/10;
    }
    
    printList(add_List(X,Y));

    return 0;
}
