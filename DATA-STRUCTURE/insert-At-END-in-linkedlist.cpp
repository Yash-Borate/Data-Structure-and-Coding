#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertend(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *z = head;
    while (z->next != NULL)
    {
        z = z->next;
    }
    z->next = n;
}

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    node *head = NULL;
    insertend(head, 40);
    insertend(head, 60);
    display(head);
}
