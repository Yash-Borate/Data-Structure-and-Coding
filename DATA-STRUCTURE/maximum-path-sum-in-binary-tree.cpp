#include<iostream>
#include<climits>
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
int maxpathsumutil(node* root,int & ans){
    if(root==NULL){
        return 0;
    }
    int left=maxpathsumutil(root->left,ans);
    int right=maxpathsumutil(root->right,ans);
    int nodemax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right));
    ans=max(ans,nodemax);

    int singlepathsum=max(root->data,max(root->data+left,root->data+right));
    return singlepathsum;

}
int maxpathsum(node* root){
    int ans=INT_MIN;
    maxpathsumutil(root,ans);
    return ans;
}

int main()
{
    
    return 0;
}