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
void display(node *a)
{
    while (a != NULL)
    {
        cout << a->data << " ";
        a = a->next;
    }
}
void end(node *&head, int val)
{
    node *t = new node(val);
    node *h = head;
    if (head == NULL)
    {
        head = t;
    }
    while (h->next != NULL)
    {
        h = h->next;
    }
    h->next = t;
}
void makecycle(node *&head, int pos)
{
    node *temp = head;
    node *nextnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            nextnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = nextnode;
}
bool detectcycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    node *head = NULL;
    end(head, 10);
    end(head, 20);
    end(head, 30);
    end(head, 40);
    end(head, 50);
    makecycle(head, 30);
    cout << detectcycle(head);

    return 0;
}