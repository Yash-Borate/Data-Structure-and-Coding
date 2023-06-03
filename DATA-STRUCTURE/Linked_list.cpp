#include<iostream>
using namespace std;

class node{

public:
int data;
node *next;



};

void display(node * p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}


int main(){
    
    node *head=NULL;
    node* second=NULL;
    node*third=NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    
    display(head);



    return 0;
}
