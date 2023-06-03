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
void display(node *s)
{
    while (s != NULL)
    {
        cout << s->data << " ";
        s = s->next;
    }
}
void push(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
// DELETE AT HEAD NODE FUNCTION :

void deleteAThead(node *&head)
{
    node *todelete = head;
    head = todelete->next;
    delete todelete;
}

void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteAThead(head);
        return;
    }
    node *t = head;
    while (t->next->data != val)
    {
        t = t->next;
    }
    node *del = t->next;
    t->next = t->next->next;
    delete del;
}

int main()
{    node *head = NULL;

    push(head, 10);
    push(head, 20);
    push(head, 30);
    // deleteAThead(head);
    display(head);
    cout << "deletion of node : " << endl;
    deletion(head, 20);
    return 0;
}