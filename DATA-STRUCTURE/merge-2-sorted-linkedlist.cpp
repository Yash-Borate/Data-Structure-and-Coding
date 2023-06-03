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
    node *s = head;
    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = n;
}
void display(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

// NON RECURSIVE WAY :

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummynode->next;
}

// USING RECURSION : 

node* mergeRecursive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;

    if(head1->data<head2->data){
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    return result;

}

int main()
{

    node *head = NULL;
    node *head1 = NULL;
    node *head2 = NULL;
    int arr1[] = {1, 3, 5, 6};
    int arr2[] = {2, 4, 7};
    for (int i = 0; i < 4; i++)
    {
        end(head1, arr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        end(head2, arr2[i]);
    }
    cout << "\n linked list 1 :" << endl;
    display(head1);
    cout << "\n linked list 2 :" << endl;
    display(head2);
    //NON RECURSIVE WAY :
    node *newhead = merge(head1, head2);
    cout << "\n merge sorted array , non recursive way : " << endl;
    display(newhead);
    // USING RECURSION :
     node *newheadR = mergeRecursive(head1, head2);
    cout << "\n merge sorted array ,using recursive way : " << endl;
    display(newheadR);
    return 0;
}