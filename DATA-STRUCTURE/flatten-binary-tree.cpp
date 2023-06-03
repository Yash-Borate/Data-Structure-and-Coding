#include<iostream>

using namespace std;

class node{
public:
int data;
node *left,*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}

};

void flatten(node* root){
    
    if(root->left!=NULL){
        
        flatten(root->left);
        
        node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        node* t=root->right;
        while(t->right!=NULL){
            t=t->right;
        }
        t->right=temp;


    }
    flatten(root->right);
}


int main()
{
    

    return 0;
}