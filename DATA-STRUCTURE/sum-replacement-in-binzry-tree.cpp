#include<iostream>
using namespace std;
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

void sumredudant(node* root){


    if(root==NULL){
        return;

    }

    sumredudant(root->left); // goes the bottom of left tree
    sumredudant(root->right); // goes the bottom of lefts - right leaves
    
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
}
// function for printing value in preorder manner


void preorder(node* root){
    
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){

struct node* root=new node(1);

root->left=new node(2);
root->right=new node(3);

root->left->left=new node(4);
root->left->right=new node(5);

root->right->left=new node(6);
root->right->right=new node(7);

cout<<"/n";

preorder(root);
cout<<"/n";
sumredudant(root);
cout<<"/n";
preorder(root);
    return 0;
}