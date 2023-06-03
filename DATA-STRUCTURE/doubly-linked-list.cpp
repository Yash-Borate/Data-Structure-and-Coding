#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next, *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insert(node *&head, int val)
{
    node *n = new node(val);

    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertT(node *&head, int val)
{
    node *a = new node(val);
    node *q = head;
    if (head == NULL)
    {
        insert(head, val);
        return;
    }
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = a;
    a->prev = q;
}

void deletehead(node *&head)
{
    node *n = head;
    head = head->next;
    head->prev = NULL;
    delete n;
}

void deletion(node *&head, int pos)
{
    if (head == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        deletehead(head);
        return;
    }
    node *n = head;
    int count = 1;
    while (n != NULL && count != pos)
    {
        n = n->next;
        count++;
    }
    n->prev->next = n->next;

    if (n->next != NULL)
    {
        n->next->prev = n->prev;
    }
    delete n;
}

void display(node *e)
{
    while (e != NULL)
    {
        cout << e->data << " ";
        e = e->next;
    }
}

int main()
{

    node *head = NULL;

    insertT(head, 10);
    insertT(head, 20);
    insertT(head, 30);
    insertT(head, 40);
    insert(head, 90);
    display(head);
    cout << endl;
    deletion(head, 1);
    display(head);
    cout << endl;

    return 0;
}