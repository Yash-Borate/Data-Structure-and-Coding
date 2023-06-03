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

void evenAfterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenpos=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;

    }
    odd->next=evenpos;
    if(odd->next!=NULL){
        even->next!=NULL;
    }
}
void display(node* a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }
}
void end(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* a=head;
    while(a->next!=NULL){
        a=a->next;
    }
    a->next=n;

}

int main(){
node* head=NULL;
end(head,1);
end(head,2);
end(head,3);
end(head,4);
end(head,5);
end(head,6);
display(head);
cout<<endl;
evenAfterodd(head);
display(head);
    return 0;
}