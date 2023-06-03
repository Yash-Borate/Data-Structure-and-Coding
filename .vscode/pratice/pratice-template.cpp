#include <iostream>
using namespace std;
// #include<string>
// template<class T>
// class yash{
//     public:
//     T a;
//     yash(T x){
//         a=x;
//     }
//     void print(){
//         cout<<"value of a = "<<a<<endl;
//     }
// };
// int main(){
//     yash<char> obj('e');
//     obj.print();
//     yash<float> z(1.1);
//     z.print();
//     return 0;
// }

// class node{
//     public:
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
//     node* n=new node(val);
//     node* a=head;
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     head=n;
// }
// void display(node* n){
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// }
// void insserton(node* &head,int val){
//     node* n=new node(val);
//     node* p=head;
//     if(head==NULL){
//         insertAthead(head,val);
//         return;
//     }
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=n;
//     n->prev=p;

// }
// void deleton(node* &head){
//     node* n=head;

//     head=head->next;
//     head->prev=NULL;
//     delete n;
// }
// void deletion(node* &head, int pos){
//     if(head==NULL){
//         return;
//     }
//     if(pos==1){
//         deleton(head);
//         return;
//     }
//     node* n=head;
//     int count=1;
//     while(n!=NULL && count!=pos){
//         n=n->next;
//         count++;
//         n->prev->next=n->next;
//         if(n->next!=NULL){
//             n->next->prev=n->prev;
//         }
//         delete n;
//     }

// }
// int length(node* head){
//     int l=0;
//     node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//         l++;
//     }
//     return l;
// }
// node* kappend(node* &head,int k){
// node* newtail;
// node* newhead;
// node* tail=head;
// int count=1;
// int l=length(head);
// k=k%l;
// while(tail->next!=NULL){
//     if(count==l-k){
//         newtail=tail;
//     }
//     if(count==l-k+1){
//         newhead=tail;
//     }
//     count++;
//     tail=tail->next;

// }
// newtail->next=NULL;
// tail->next=head;
// head=newhead;
// return newhead;


// }
// int intresection(node* &head1,node* &head2){
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
// void intersectionD(node* &head1,node* &head2,int pos){
//     node* n=head1;
//     pos--;
//     while(pos--){
//         n=n->next;
//     }
//     node* t=head2;
//     while(t!=NULL){
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
//         if(p1->data<p2->data){
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
//             }
//     }
//     return dummynode->next;
// }
// node* recursiveR(node* &head1,node* &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     node* result;
//     if(head1->data<head2->data){
//         result=head1;
//         result->next=recursiveR(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=recursiveR(head1,head2->next);
//     }
//     return result;
// }

struct node{
int data;
struct node* left;
struct node* right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildtree(int preorder[],int inorder[],int start,int end){
   static int idx=0;
   if(start>end){
       return NULL;
   }
   int curr=preorder[idx];
   idx++;
   node* n=new node(curr);
   if(start==end){
       return n;
   }
   int pos=search(inorder,start,end,curr);
   n->left=buildtree(preorder,inorder,start,pos-1);
   n->right=buildtree(preorder,inorder,pos+1,end);

   return n;

}
node* build(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos = search(inorder,start,end,curr);
    n->right=build(postorder,inorder,pos+1,end);
    n->left=build(postorder,inorder,start,pos+1);

    return n;

}