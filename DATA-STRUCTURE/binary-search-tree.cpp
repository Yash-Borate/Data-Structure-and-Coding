#include<iostream>
using namespace std;

struct node{
int data;
node* left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

node* insertATbst(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val < root->data ){
        root->left=insertATbst(root->left,val);
    }
    else{
        root->right=insertATbst(root->right,val);
    }
    return root;
}

void inorderBST(node * root){
    if(root==NULL){
        return;
    }
    inorderBST(root->left);
    cout<<root->data<<" ";
    inorderBST(root->right);
}

int main()
{
    node* root=NULL;
    root=insertATbst(root,5);
    insertATbst(root,1);
    insertATbst(root,3);
    insertATbst(root,4);
    insertATbst(root,2);
    insertATbst(root,7);
    return 0;
}