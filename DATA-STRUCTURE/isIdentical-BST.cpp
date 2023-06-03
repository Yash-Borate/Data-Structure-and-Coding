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

bool isIdentical(node* root1, node* root2){

    if(root1==NULL && root2==NULL){
        return true;
    }

    else if(root1==NULL || root2==NULL){
        return false;
    }

    else{
        
        bool cond1=root1->data==root2->data;
        bool cond2=isIdentical(root1->left,root2->right);
        bool cond3=isIdentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }

        return false;
    }

}


int main()
{
    
    return 0;
}