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
node* searchBST(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data <key){
        return searchBST(root->right,key);
    }
    return searchBST(root->left,key);
}

int main()
{
    // CREATE A BINARY TREE
    int key;
    node* root;

    if(searchBST(root,key)==NULL){
        cout<<"key doesnt exist "<<endl;
    } 
    else{
        cout<<"key is exist in binary tree"<<endl;

    }
    
    return 0;
}