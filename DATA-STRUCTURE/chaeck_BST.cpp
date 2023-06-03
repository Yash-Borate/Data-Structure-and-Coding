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
bool isBST(node* root,node* min=NULL,node* max=NULL){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<=min->data){
        return false;
    }
    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool leftBST=isBST(root->left,min,root);
    bool rightBST=isBST(root->right,root,max);

    return leftBST && rightBST;
}


int main()
{
    

    return 0;
}