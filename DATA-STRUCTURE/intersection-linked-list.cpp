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
void end(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *q = head;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = n;
}
int length(node *head)
{
    int l = 0;
    node *n = head;
    while (n != NULL)
    {
        n = n->next;
        l++;
    }
    return l;
}
int insertion(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *ptr1;
    node *ptr2;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d != 0)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

void intersect(node *&head1, node *&head2, int pos)
{
    node *n = head1;
    pos--;
    while (pos--)
    {
        n = n->next;
    }
    node *y = head2;
    while (y->next != NULL)
    {
        y = y->next;
    }
    y->next = n;
}
void display(node *f)
{
    while (f != NULL)
    {
        cout << f->data << " ";
        f = f->next;
    }
}
int main()
{
    node *head = NULL;
    node *head1 = NULL;
    node *head2 = NULL;

    end(head1, 10);
    end(head1, 20);
    end(head1, 30);
    end(head1, 40);
    end(head1, 50);
    end(head2, 70);
    end(head2, 80);
    cout << "\nhead1 linked list:" << endl;
    display(head1);
    cout << "\nhead2 linked list : " << endl;
    display(head2);
    intersect(head1, head2, 3);
    cout << "\nhead1 linked list:" << endl;
    display(head1);
    cout << "\nhead2 linked list : " << endl;
    display(head2);
    cout << "\n intersection point is :" << endl;
    cout << insertion(head1, head2);

    return 0;
}
