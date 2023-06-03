#include<iostream>
using namespace std;

class node{
public:
int data;
node * next;
node(int val){
    data=val;
    next=NULL;
}
};

void end(node* &head,int val){
    node * n=new node(val);
    
    if(head==NULL){
        head=n;
        return;
    }
    
    node* d=head;
    while(d->next!=NULL){
        d=d->next;
    }
    d->next=n;
}
//  REVERSE LINKED LIST FUNCTION USING ITERATIVE METHODE

node * reverse(node* &head){
    node* prevptr=NULL;
    node* curr=head;
    node * nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prevptr;
        prevptr=curr;
        curr=nextptr;
    }
    return prevptr;
}

// REVERSE A LINKED LIST USING RECURSIVE METHODE :

node * reversiverecursive(node* &head){
    
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newnode=reversiverecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newnode;
}

void display(node * a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}

int main(){

    node * head=NULL;

    end(head,10);
    end(head,20);
    end(head,30);
    end(head,40);
    display(head);

    cout<<"reverse a linked list : "<<endl;

    node* sol=reversiverecursive(head);
    cout<<"\nby using iterative methode : "<<endl;
    display(sol);

    cout<<"\nby using recursive methode : "<<endl;
    node* newd=reversiverecursive(head);
    display(newd);

    return 0;
}