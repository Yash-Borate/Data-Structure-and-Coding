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
node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
        return root;
    }
}
int main()
{
    
    return 0;
}