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

void display(node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void insert(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

int main()
{
    node *head = NULL;

    insert(head, 80);
    insert(head, 30);
    insert(head, 60);

    display(head);

    return 0;
}