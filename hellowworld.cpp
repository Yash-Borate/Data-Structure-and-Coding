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

void push(node* &head,int val){
    node * a=new node(val);
    a->next=head;
    head=a;
}
void end(node * &head,int val){
    node* s=new node(val);
    if(head==NULL){
        head=s;
        return;
    }

    node *n=head;
    while(n->next!=NULL){
        n=n->next;
    }
    n->next=s;
}
bool search(node* head,int key){
    node* q=head;
    while(q!=NULL){
        if(q->data==key){
            return true;
        }
        q=q->next;
    }
    return false;
}
void deletion(node* head){
    node* w=head;
    head=head->next;
    delete w;
}
void deletev(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deletion(head);
        return;
    }
    node* t=head;
    while(t->next->data!=val){
        t=t->next;
    }
    node* v=t->next;
    t->next=t->next->next;
    delete v;
}
node* reverse(node* head){
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    return prev;
}

node* reverseR(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* b=reverseR(head->next);
    head->next->next=head;
    head->next=NULL;
    return b;
}

node* reverseK(node* &head,int k){
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    int count=0;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next=reverseK(nextptr,k);
    }
    return prev;
}