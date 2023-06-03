#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// struct node{
// int data;
// node* left;
// node* right;
// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorderp(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorderp(root->left);
//     cout<<root->data<<" ";
//     inorderp(root->right);

// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* buildtree(int preorder[],int inorder[],int start,int end){
//     if(start>end){
//         return NULL;
//     }
//     int static idx=0;
//     int curr=preorder[idx];
//     idx++;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);
//     n->left=buildtree(preorder,inorder,start,pos-1);
//     n->right=buildtree(preorder,inorder,pos+1,end);
//     return n;
// }
// // void inorder(node* root){
// //     if(root==NULL){
// //         return ;
// //     }
// //     inorder(root->left);
// //     cout<<root->data<<" ";
// //     inorder(root->right);
// // }
// int main()
// {
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};
//     node* root=buildtree(preorder,inorder,0,4);
//     inorderp(root);
//     return 0;
// }
// node*buildTree(int postorder[],int inorder[],int start,int end){
//     static int idx=4;
//     if(start>end){
//         return NULL;
//     }
//     int curr=postorder[idx];
//     idx--;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos =search(inorder,start,end ,curr);
//     n->right=buildTree(postorder,inorder,pos+1,end);
//     n->left=buildTree(postorder,inorder,start,pos-1);
//     return n;

// }
// void levelorder(node* root){
//     if(root==NULL)
//     {
//         return;
//     }
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node* n=q.front();
//         q.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
//             if(n->left){
//                 q.push(n->left);
//             }
//             if(n->right){
//                 q.push(n->right);
//             }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// int sumAtk(node* root,int k){
//     if(root==NULL){
//         return -1;
//     }
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     int sum=0,level=0;
//     while(!q.empty()){
//         node* n=q.front();
//         q.pop();
//         if(n!=NULL){
//             if(level==k){
//                 sum+=n->data;
//             }
//             if(n->left){
//                 q.push(n->left);
//             }
//             if(n->right){
//                 q.push(n->right);
//             }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }
// int countndes(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return countndes(root->left)+countndes(root->right)+1;
// }
// int sumofnodes(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
// }
// int heightoftree(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lh=heightoftree(root->left);
//     int rh=heightoftree(root->right);
//     return max(lh,rh)+1;
// }
// int calheight(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return max(calheight(root->left),calheight(root->right))+1;
// }
// int caldiameter(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lheight=calheight(root->left);
//     int rheight=calheight(root->right);

//     int currdiameter=lheight+rheight+1;

//     int ldiameter=caldiameter(root->left);
//     int rdiameter=caldiameter(root->right);

//     return max(currdiameter,max(ldiameter,rdiameter));

// }

// void sumreplace(node* root){
//     if(root==NULL){
//         return;
//     }
//     sumreplace(root->left);
//     sumreplace(root->right);
//     if(root->left!=NULL){
//         root->data+=root->left->data;
//     }
//     if(root->right!=NULL){
//         root->data+=root->right->data;
//     }
// }

// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1],b[n2];

//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+j+1];
//     }
//     int i=0;
//     int j=0;
//     int k=l;

//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//         arr[k]=a[i];
//         i++,k++;}

//         else{
//         arr[k]=b[j];
//         k++,j++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         i++,k++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         k++,j++;
//     }

// }

// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }

// class node{
//     public:
//     int data;
//     node* next;
//     // node(int val){
//     //     data=val;
//     //     next=NULL;
//     // }  
// };
// void printlist(node* n){
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// }
// int main(){
//     node* head=NULL;
//     node* first=NULL;
//     node* second=NULL;

//     head=new node();
//     second=new node();
//     first=new node();

//     head->data=10;
//     head->next=first;

//     first->data=20;
//     first->next=second;

//     second->data=30;
//     second->next=NULL;

//     printlist(head);
    

// }
// node* reverseL(node* head){
    
//     node* previous=NULL;
//     node* curr=head;
//     node* nextptr;
//     while(curr!=NULL){
//         nextptr=curr->next;
//         curr->next=previous; 
//         curr=nextptr;
//         previous=curr;

//     }
//     return previous;
// }
// node* reverseR(node* head){
//     if(head==NULL && head->next==NULL){
//         return head;
//     }
//     node* R=reverseR(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return R;
// }
// #define n 10
// class stack{
//     int * arr;
//     int top;
//     public:
//     stack(){
//         arr=new int [n];
//         top=-1;
//     }
//     void push(int val){
//         if(top==n-1){
//             cout<<"stack has full ";
//             return;
//         }
//         arr[top]=val;
//         top++;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"stack is empty";
//             return;
//         }
//         top--;
//     }
// };

// void reverse(string s){
//     stack<string> st;
//     string word=" ";
//     for(int i=0;i<s.length();i++){
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

// int prefix(string s){
//     stack<int>st;
//     for(int i=-s.length()-1;i<=0;i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;
//             }
//         }
//     }
// }

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }

    if(val < root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;

}
bool searchBST(node* root ,int key){
     if(root==NULL){
         return false;
     }
    if (key==root->data){
        return true;
    }
    if(key < root->data){
      return searchBST(root->left,key);
    }
    return searchBST(root->right,key);
}

node * inordersucc(node* root){
    node* temp=root;

    while(temp && temp->left !=NULL){
        temp=temp->left;
    }
    return temp;
}

node* deleteBST(node* root , int key){

    if(key < root->data){
        root->left=deleteBST(root->left,key);
    }
    else if(key > root->data){
        root->right=deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right,key);
    }
    return root;
}

node* constructBST(int preorder[],int *preorderIDX,int key , int min ,int max,int n){
    if(*preorderIDX >=n){
        return NULL;
    }
    node* root=NULL;

    if(key> min && key< max){
        root=new node(key);
        *preorderIDX+=1;

        if(*preorderIDX<n){
            root->left=constructBST(preorder,preorderIDX,preorder[*preorderIDX],min,key,n);
        }
        if(*preorderIDX<n){
            root->right=constructBST(preorder,preorderIDX,preorder[*preorderIDX],key,max,n);
        }
    }
    return root;
}
bool IsBST(node* root,node* min=NULL,node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){
        return false;
    }
    if(max!=NULL && root->data >=max->data){
        return false;
    }
    bool leftvalid=IsBST(root->left,min,root);
    bool rightvalid=IsBST(root->right,root,max);

    return leftvalid && rightvalid;
}
node* sortedBST(int arr[],int start,int end){
    if(start>end){
        return NULL;

    }
    int mid=(start+end)/2;

    node* root=new node(arr[mid]);
    node* left=sortedBST(arr,start,mid-1);
    node* right=sortedBST(arr,mid+1,end);
    return root;
}
int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}
    


