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

node* inordersucc(node* root){
    node* curr=root;
    while(curr && curr->left !=NULL){
        curr=curr->left;
    }
    return curr;
}

node* deleteBST(node* root,int key){
    if(key<root->data){
        root->left=deleteBST(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->right;
            free(root);
            return temp;
            
        }
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right,key);

    }
    return root;
}


int main()
{
    
    return 0;
}