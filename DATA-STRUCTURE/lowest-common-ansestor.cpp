#include<iostream>
using namespace std;

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
node* LCA(node* root,int n1,int n2){
    if(root==NULL){
        return;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* lcaleft=LCA(root->left,n1,n2);
    node* lcaright=LCA(root->right,n1,n2);
    if(lcaleft && lcaright){
        return root;
    }
    if(lcaleft!=NULL){
        return lcaleft;
    }
    return lcaright;
}

int main()
{
    
    return 0;
}