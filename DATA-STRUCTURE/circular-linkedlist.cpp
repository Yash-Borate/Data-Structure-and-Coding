#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};

void display(node* head){
    node * n=head;
    do{
        cout<<n->data<<" ";
        n=n->next;
    }
    while(n!=head);
    cout<<endl;
}

//INSERTION IN CIRCULAR LINKEDLIST :

void insertAThead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* s=head;
    while(s->next!=head){
        s=s->next;
    }
    s->next=n;
    n->next=head;
    head=n;
}
void insertATtail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        insertAThead(head,val);
        return;
    }
    node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=n;
    n->next=head;

}

//DELETION IN CIRCULAR LINKED LIST:

void deleteAThead(node* &head){
    node* n=head;
    while(n->next!=head){
        n=n->next;
    }
    node* todelete=head;
    n->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int pos){
    node* n=head;
    int count=1;
    if(pos==1){
        deleteAThead(head);
        return;
    }
    while(count!=pos-1){
        n=n->next;
        count++;
    }
    node* todelete=n->next;
    n->next=n->next->next;
    delete todelete;
}

int main(){
    node* head=NULL;

    insertATtail(head,10);
    insertATtail(head,20);
    insertATtail(head,30);
    insertATtail(head,40);
    cout<<"\n insertion at tail : "<<endl;
    display(head);
    insertAThead(head,90);
    cout<<"\n insertion at head : "<<endl;
    display(head);
    cout<<"\n deletion : "<<endl;
    // deleteAThead(head);
    deletion(head,3);
    display(head);
    return 0;
}