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
    node*t1=h1,*t2=h1;
    int count = 1;
    while (t1)
    {
        while (t2)
        {
            if ((t1->data+t2->data)==x)
            {
                count++;
            }
            t2=t2->next;
        }
        
        t1=t1->next;
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
    cout<<endl;
}

int main()
{
    node *h1 = NULL;
    push(&h1, 5);
    push(&h1, -1);
    push(&h1, 7);
    push(&h1, 5);
    push(&h1, 1);
    int x = 6, count;

    print(h1);
    count = cout_pair(h1, x);
    cout << " " << count << " ";
    return 0;
}
