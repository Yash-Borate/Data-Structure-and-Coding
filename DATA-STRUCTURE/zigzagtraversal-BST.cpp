#include<bits/stdc++.h>
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

void zigzagTraversal(node* root){
    stack<node*>currlevel;
    stack<node*>nextlevel;

    bool leftToright=true;
    currlevel.push(root);
    while(!currlevel.empty()){
        node* temp=currlevel.top();
        currlevel.pop();

        if(temp){
          cout<<temp->data<<" ";
          if(leftToright){
              if(temp->left){
                  nextlevel.push(temp->left);
              }
              if(temp->right){
                  nextlevel.push(temp->right);
              }
          }
          else{
              if(temp->right){
                  nextlevel.push(temp->right);
              }
              if(temp->left){
                  nextlevel.push(temp->left);
              }

          }

        }

        if(currlevel.empty()){
            leftToright =! leftToright;
            swap(currlevel,nextlevel);
        }

    }
}

int main()
{
    
    return 0;
}
