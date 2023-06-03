#include<iostream>
#include<algorithm>
#include<cmath>
#include<bits/stdc++.h>
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
int calheight(node* root){
    if(root==NULL){
        return 0;
    }
   int lh=calheight(root->left);
   int rh=calheight(root->right);
   return max(lh,rh)+1;
}


int main(){
    return 0;
}