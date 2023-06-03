#include<bits/stdc++.h>
using namespace std;

// struct node{
// int data;
// struct node* left;
// struct node* right;
// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };

// int calheight(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return max (calheight(root->left)+calheight(root->right)) + 1 ;
// }


// int main(){

//     return 0;
// }
// #define n 10
// class Stack{
// int *arr;
// int top;
// public:
// Stack(){
//     arr=new int[n];
//     top=-1;
// }

// void push(int x){
//     if(top==n-1){
//         cout<<"stack is full "<<endl;
//         return;
//     }
//     top++;
//     arr[top]=x;
// }
// void pop(){
//     if(top==-1){
//     cout<<"stack is empty"<<endl;
//     return ;
//     }
//     top--;
// }
// int Top(){
//     if(top==-1){
//         cout<<"no element in stack"<<endl;
//         return 0;
//     }
//     return arr[top];
// }
// bool empty(){
//     return top==-1;
// }
// };

// int main(){
// Stack st;
// st.push(8);
// st.push(4);
// st.push(3);
// st.push(2);

// // cout<<st.Top()<<endl;

// while(!st.empty()){
//     cout<<st.Top();
//     st.pop();
// }

//     return 0;
// }