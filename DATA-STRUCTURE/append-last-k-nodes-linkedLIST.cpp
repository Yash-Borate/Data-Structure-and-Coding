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
void display(node *g)
{
    while (g != NULL)
    {
        cout << g->data << " ";
        g = g->next;
    }
}

void end(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *s = head;
    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = n;
}

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}
node *kappend(node *&head, int k)
{
    node *newhead;
    node *newtail;
    node *tail = head;
    int l = length(head);
    int count = 1;
    k = k % l;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
}

int main()
{
    node *head = NULL;
    end(head, 10);
    end(head, 20);
    end(head, 30);
    end(head, 40);
    end(head, 50);
    node *t = kappend(head, 3);
    display(t);
    return 0;
}