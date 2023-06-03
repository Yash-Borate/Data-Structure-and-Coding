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
int height(node* root){
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool balanced(node* root){
    if(root==NULL){
        return true;
    }
    if(balanced(root->left)==false){
        return false;
    }
    if(balanced(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    return 0;
}