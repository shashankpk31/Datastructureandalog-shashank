#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

// node *newNode(int item)
// {
//     node *ptr = new node;
//     ptr->data = item;
//     ptr->next = NULL;
//     return ptr;
// }

void *push(node **head, int item)
{
    node *ptr = new node;
    ptr->data = item;
    ptr->next = *head;
    *head = ptr;
}

bool is_present(node *head, int data)
{
    node *t = head;
    while (t != NULL)
    {
        if (t->data == data)
        {
            return 1;
        }
        t = t->next;
    }
    return 0;
}

node *intersection(node *h1, node *h2)
{
    node *R = NULL;
    node *t1 = h1, *t2 = h2;
    while (t1)
    {
        if (is_present(t2, t1->data))
        {
            push(&R, t1->data);
        }

        t1 = t1->next;
    }
    return R;
}

node *unions(node *h1, node *h2)
{
    node *R = NULL;
    node *t1 = h1, *t2 = h2;
    while (t1)
    {
        push(&R, t1->data);
        t1 = t1->next;
    }
    while (t2)
    {
        if (!is_present(R, t2->data))
        {
            push(&R, t2->data);
        }
        t2 = t2->next;
    }
    return R;
}

void printList(struct node *head)
{
    cout<<endl;
    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node *h1 = NULL, *h2 = NULL, *i = NULL, *u = NULL;
    push(&h1, 20);
    push(&h1, 4);
    push(&h1, 15);
    push(&h1, 10);

    push(&h2, 10);
    push(&h2, 2);
    push(&h2, 4);
    push(&h2, 8);

    i = intersection(h1, h2);
    u = unions(h1, h2);

    cout << "head1 elements";
    printList(h1);
    cout << "head2 elements";
    printList(h2);
    cout << "int elements";
    printList(i);
    cout << "union elements";
    printList(u);
    return 0;
}