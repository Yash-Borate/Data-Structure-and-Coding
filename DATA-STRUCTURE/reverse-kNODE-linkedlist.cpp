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
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k);
    }
    return prevptr;
}
void display(node * d){
    while(d!=NULL){
        cout<<d->data<<" ";
        d=d->next;
    }
}
int main(){
    node * head=NULL;
    end(head,10);
    end(head,20);
    end(head,30);
    end(head,50);
    display(head);
    
    cout<<"reverse a k node in linked list : "<<endl;
    int k=2;
    node* sol=reversek(head,k);
    display(sol);
    return 0;
}