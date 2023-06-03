#include<iostream>
#include<algorithm>
#include<climits>
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

node* buildBST(int preorder[],int *preorderIdx,int key , int min, int max,int n){
    
    if(*preorderIdx>=n){
        return NULL;
    }

    node* root=NULL;
    if(key>min && key<max){
        root=new node(key);
        *preorderIdx+=1;

        if(*preorderIdx < n){
            root->left=buildBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        }
        if(*preorderIdx < n){
            root->right=buildBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
        }
    }
    return root;
}

void printpreorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int main()
{   
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderIdx=0;

    node* root=buildBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
    printpreorder(root);
    
    return 0;
}