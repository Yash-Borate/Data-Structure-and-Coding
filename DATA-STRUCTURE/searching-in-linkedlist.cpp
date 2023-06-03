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

bool search(node * head,int key){
    node * q=head;
    while(q->next!=NULL){
        if(q->data==key){
            return true;
        }
        q=q->next;
    }
    return false;
}

void end(node* &head,int val){
    node* p=new node(val);
    
    if(head==NULL){
        head=p;
        return;
    }

    node *s=head;
    while(s->next!=NULL){
        s = s->next;
    
    }
    s->next=p;
}
void display(node * a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}
int main(){
    node* head=NULL;

    end(head,10);
    end(head,20);
    end(head,30);
    end(head,40);
    
    search(head,30);
    display(head);
    return 0;
}