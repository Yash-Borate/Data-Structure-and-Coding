#include<iostream>
using namespace std;


struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int sumofnodes(node* root){
    if(root==NULL){
        return 0;
    }
    return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}
int main(){
    return 0;
}