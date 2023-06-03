#include<iostream>
using namespace std;

// class node{
// public:
// int data;
// node* next;
// node* prev;
// node(int val){
//     data=val;
//     next=NULL;
//     prev=NULL;
// }
// };
// void insertAthead(node* &head,int val){
//     node* n= new node(val);
//     node* a=head;
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     head=n;
// }
// void insertASTtail(node* &head,int val){
//     node* n=new node(val);
//     node* a=head;
//     if(head==NULL){
//         insertAthead(head,val);
//         return;
//     }
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
//     n->prev=a;
// }
// void deleteAthead(node* &head){
//     node* a=head;
//     head=head->next;
//     head->prev=NULL;
//     delete a;
// }
// void deletion(node* &head,int pos){
//     if(head==NULL){
//         return;
//     }
//     if(pos==1){
//         deleteAthead(head);
//         return;
//     }
//     node* a=head;
//     int count=1;
//     while(a->next!=NULL && count!=pos){
//         a=a->next;
//         count++;
//     }
//     a->prev->next=a->next;
//     if(a->next!=NULL){
//         a->next->prev=a->prev;
//     }
//     delete a;
// }
// void display(node* a){
//     while(a!=NULL){
//         cout<<a->data<<" ";
//         a=a->next;
//     }
// }
// int length(node* head){
//     int l=0;
//     node* a=head;
//     while(a!=NULL){
//         a=a->next;
//         l++;
//     }
//     return l;
// }
// node* kappend(node* &head,int k){
//     node* newhead;
//     node* newtail;
//     node* tail=head;
//     int l=length(head);
//     int count=1;
//     k=k%l;
//     while(tail->next!=NULL){
//         if(count==l-k){
//             newtail=tail;
//         }
//         if(count==l-k+1){
//             newhead=tail;
//         }
//         tail=tail->next;
//         count++;
//     }
//     newtail->next=NULL;
//     tail->next=head;
//     return newhead;
// }
// int intersection(node* &head1,node* &head2){
//     int l1=length(head1);
//     int l2=length(head2);
//     int d=0;
//     node* ptr1;
//     node* ptr2;
//     if(l1>l2){
//         d=l1-l2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     else{
//         d=l2-l1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while(d!=0){
//         ptr1=ptr1->next;
//         if(ptr1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(ptr1!=NULL && ptr2!=NULL){
//         if(ptr1==ptr2){
//             return ptr1->data;
//         }
//         ptr1=ptr1->next;
//         ptr2=ptr2->next;
//     }
//     return -1;
// }
// void intersect(node* &head1, node* &head2,int pos){
//     node* n=head1;
//     while(pos--){
//         n=n->next;
//     }
//     node* t=head2;
//     while(t->next!=NULL){
//         t=t->next;
//     }
//     t->next=n;
// }
// node* merge(node* &head1,node* &head2){
//     node* p1=head1;
//     node* p2=head2;
//     node* dummynode=new node(-1);
//     node* p3=dummynode;
//     while(p1!=NULL && p2!=NULL){
//         if(p1->data>p2->data){
//             p3->next=p1;
//             p1=p1->next;
//         }
//         else{
//             p3->next=p2;
//             p2=p2->next;
//         }
//         p3=p3->next;
//         while(p1!=NULL){
//             p3->next=p1;
//             p1=p1->next;
//             p3=p3->next;
//         }
//         while(p2!=NULL){
//             p3->next=p2;
//             p2=p2->next;
//             p3=p3->next;
//         }
        
//     }
//     return dummynode->next;
// }
// node* mergeRecursive(node* &head1,node* &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head2;
//     }
//     node* result;
//     if(head1->data>head2->data){
//         result=head1;
//         result->next=mergeRecursive(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=mergeRecursive(head1,head2->next);
//     }
//     return result ;
// }
#define n 100
class stack{
int *arr;
int top;
public:
stack(){
    arr=new int[n] ;
    top=-1;
}
void push(int x){
    if(top== n-1){
        cout<<"stack overflow "<<endl;
        return;
    }
    top++;
    arr[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"no element in stack "<<endl;
        return;
    }
    top--;
}
int Top(){
    if(top==-1){
        cout<<"no element in top"<<endl;
        return -1;
    }
    return arr[top];
}
bool empty(){
    return top==-1;
}

};
       
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    return 0;
}