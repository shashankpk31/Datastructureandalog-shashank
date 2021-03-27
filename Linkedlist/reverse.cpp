#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct Linklist
{
    node *head;
    Linklist()
    {
        head = NULL;
    }

    void reverse()
    {
        node *curr = head;
        node *prev = NULL, *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void ins(int data)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    Linklist l1;
    l1.ins(20);
    l1.ins(21);
    l1.ins(22);
    l1.ins(23);
    l1.ins(24);
    cout << "Given linked list\n";
    l1.print();
    l1.reverse();
    cout << "reverse linked list\n";
    l1.print();
}