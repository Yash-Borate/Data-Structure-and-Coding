#include<iostream>
#include<climits>
#include<stack>
#include<math.h>
#include<cmath>
#include<queue>
using namespace std;

// class node{
// public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };

// node* reverse(node* &head){
//     node* prevptr=NULL;
//     node* curr=head;
//     node* nextptr;
//     while(curr!=NULL){
//         nextptr=curr->next;
//         curr->next=prevptr;

//         prevptr=curr;
//         curr=nextptr;

//         return prevptr;
//     }
// }

// void display(node* n){
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// }

// node* reverseR(node* &head){
//     if(head==NULL || head->next==NULL){
//         return;
//     }
//     node* r=reverseR(head->next);
//     head->next->next=head;
//     head->next=NULL;

//     return r;
// }

// node* reversek(node* &head,int k){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextptr;
//     int count=0;
//     while(curr!=NULL && count<k){
//         nextptr=curr->next;
//         curr->next=prev;

//         prev=curr;
//         curr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=reversek(nextptr,k);
//     }
//     return prev;
// }

// bool detect(node* &head){
//     node* fast=NULL;
//     node* slow=NULL;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast=slow){
//             return true;
//         }
//         return false;
//     }
// }
// void makecycle(node* &head,int pos){
//         node* n=head;
//         int count=1;
//         node* nextptr;
//         while(n->next!=NULL){
//             if(count==pos){
//                 nextptr=n;
//             }
//             n=n->next;
//             count++;
//         }
//         n->next=nextptr;
// }
// void removecycle(node* &head){
//     node* fast=head;
//     node* slow=head;

//     do{
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     while(slow!=fast);
//     fast=head;
//     if(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     slow->next=NULL;
// }

// class node{
// public:
// int data;
// node* next;
// node* prev;
// node(int val){
//     data=val;
//     next=NULL;
//     prev=NULL;
// }
// };

// void insert(node* &head,int val){
//     node* n=new node(val);
//     node* a=head;
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     head=n;
// }

// void insertAttail(node* &head,int val){
//     node* n=new node(val);
//     node* a=head;
//     if(head==NULL){
//         insert(head,val);
//         return;
//     }
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
//     n->prev=a;
// }
// void deleteion(node* &head){
//     node* n=head;
//     head=head->next;
//     head->prev=NULL;
//     delete n;
// }
// void deletinA(node* &head,int pos){
//     if(head==NULL){
//         return;
//     }
//     if(pos==1){
//         deleteion(head);
//         return;
//     }
//     node* n=head;
//     int count=1;
//     while(n!=NULL && count!=pos){
//         n=n->next;
//         count++;
//     }
//     n->prev->next=n->next;
//     if(n->next!=NULL){
//         n->next->prev=n->prev;
//     }
//     delete n;
// }
// int length(node* &head){
//     int l=0;
//     node* n=head;
//     while(n!=NULL){
//         l++;
//         n=n->next;
//     }
//     return l;
// }

// node* kappend(node* &head,int k){
//     node* newtail;
//     node* newhead;
//     node* tail=head;
//     int l=length(head);
//     k=k%l;
//     int count=1;

//     while(tail->next!=NULL){
//         if(count==l-k){
//             newtail=tail;
//         }
//         if(count==l-k+1){
//             newhead=tail;
//         }
//         tail=tail->next;
//         count++;
//     }
//     newtail->next=NULL;
//     tail->next=head;
//     return newhead;
// }
// int intersection(node* &head1 , node* &head2){
//     int l1=length(head1);
//     int l2=length(head2);
//     int d=0;
//     node* a;
//     node* b;
//     if(l1>l2){
//         d=l1-l2;
//         a=head1;
//         b=head2;
//     }
//     else{
//         d=l2-l1;
//         b=head1;
//         a=head2;
//     }
//     if(d!=0){
//         a=a->next;
//         if(a==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(a!=NULL && b!=NULL){
//         if(a==b){
//             return a->data;
//         }
//         a=a->next;
//         b=b->next;
//     }
//     return -1;
// }
// void intersection(node* &head1,node* &head2,int pos){
//     node* n=head1;
//     pos--;
//     while(pos--){
//         n=n->next;
//     }
//     node* a=head2;
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
// }
// node* merge(node* &head1,node* &head2){
//     node* p1=head1;
//     node* p2=head2;
//     node* dummynode=new node(-1);
//     node* p3=dummynode;
//     while(p1!=NULL && p2!=NULL){
//         if(p1->data>p2->data){
//             p3->next=p1;
//             p1=p1->next;
//         }
//         else{
//             p3->next=p2;
//             p2=p2->next;
//         }
//         p3=p3->next;

//         while(p1!=NULL){
//             p3->next=p1;
//             p1=p1->next;
//             p3=p3->next;
//         }
        
//         while(p2!=NULL){
//             p3->next=p2;
//             p2=p2->next;
//             p3=p3->next;
//         }
//         return dummynode->next;
//     }
// } 

// #define n 100

// class stack{
//     int *arr;
//     int top;
//     public:
//     stack(){
//         arr=new int[n];
//         top==-1;
//     }

//     void push(int x){
//         if(top==-1){
//             cout<<"stack is full "<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"stack is empty"<<endl;
//             return;
//         }
//         top--;
//     }
//     int top(){
//         if(top==-1){
//             cout<<"no element in stack"<<endl;
//             return;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };

// void reversestring(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word="";
//         if(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }

// void insertATbottom( stack<int> &st , int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertATbottom(st,ele);

//     st.push(topele);
// }


// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverse(st);

//     insertATbottom(st,ele);


//     }

// int prefix(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
            
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();

//             switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;
//                 case '-':
//                 st.push(op1-op2);
//                 break;
//                 case '*':
//                 st.push(op1*op2);
//                 break;
//                 case '/':
//                 st.push(op1/op2);
//                 break;
//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             }
//         }
//     }
//     return st.top();
// }

// int postfix(string s){
//     stack<int> st;
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op2=st.top();
//             st.pop();
//             int op1=st.top();
//             st.pop();

//             switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;
//                 case '-':
//                 st.push(op1-op2);
//                 break;
//                 case '*':
//                 st.push(op1*op2);
//                 break;
//                 case '/':
//                 st.push(op1/op2);
//                 break;
//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             }
//         }
//     }
//     return st.top();
// }

// bool isvalid(string s){
//     stack<char> st;
//     int n=s.size();
//     bool ans=true;

//     for(int i=0;i<n;i++){
//         if(s[i]=='(' || s[i]=='{' || s[i]=='['){
//             st.push(s[i]);
//         }
//         else if(!st.empty() && s[i]==')'){
//             if(st.top()=='('){
//                 return true;
//             }
//             else{
//                 return false;
//                 break;
//             }
//         }
//          else if(!st.empty() && s[i]==']'){
//             if(st.top()=='['){
//                 return true;
//             }
//             else{
//                 return false;
//                 break;
//             }
//         }
//          else if(!st.empty() && s[i]=='}'){
//             if(st.top()=='{'){
//                 return true;
//             }
//             else{
//                 return false;
//                 break;
//             }
//         }
//         else{
//             ans=false;
//             break;
//         }
//         if(!st.empty()){
//             ans=false;
//             break;
//         }
//     }
// }
// #define n 100
// class queue{
// int *arr;
// int front;
// int back;
// public:
// queue(){
//     arr=new int [n];
//     front=-1;
//     back=-1;
// }
// void push(int v){
//     if(back==n-1){
//         cout<<"queue if full"<<endl;
//         return;
//     }
//     back++;
//     arr[back]=v;
//     if(front==-1){
//         front++;
//     }
// }

// void pop(){
//     if(front==-1 || front>back){
//         cout<<"no element in queue"<<endl;
//         return;
//     }
//     front++;
// }
// int peek(){
//     if(front==-1 ||front>back){
//         cout<<"no element in stack";
//         return;
//     }
//     return arr[front];
// }
// bool empty(){
//     if(front==-1 ||front>back){
       
//         return true;
//     }
//     return false;
// }
// };

// class node{
// public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };
// class queue{
// node* front;
// node* back;
// public:
// queue(){
//     front=NULL;
//     back=NULL;
// }

// void push(int val){
//     node* n=new node(val);
//     if(front==NULL){
//         back=n;
//         front=n;
//     }
//     back->next=n;
//     back=n;
// }
// void pop(){
//     if(front==NULL){
//         cout<<"queue is empty"<<endl;
//         return;
//     }
//     node* todel=front;
//     front=front->next;

//     delete todel;
// }
// int peek(){
//     if(front==NULL){
//         cout<<"queue is empty"<<endl;
//         return;
//     }
//     return front->data;
// }
// bool empty(){
//     if(front==NULL){
//         return true;
//     }
//     return false;
// }

// };

// class queue{
// stack<int> s1;
// stack<int> s2;
// public:
// void push(int x){
//     s1.push(x);
// }
// int pop(){
//     if(s1.empty() && s2.empty()){
//         cout<<"queue is empty"<<endl;
//         return -1;
//     }
//     if(s2.empty()){
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//     }
//     int topvalue=s2.top();
//     s2.pop();
//     if(s1.empty()){
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//     return topvalue;
// }
// };
// class queue{
// public:
// stack<int> s;
// int pop(){
//     if(s.empty()){
//         cout<<"queue if empty"<<endl;
//         return -1;
//     }
//     int x=s.top();
//     s.pop();

//     if(s.empty()){
//         return x;
//     }
//     int item=pop();
//     s.push(x);
//     return item;
// }
// };    

    // class student{
    //     public:
    //     int roll;
    //     string name;
        
    //     void setdata(int r,string n){
    //         roll=r;
    //         name=n;
    //     }
    //     void print(){
    //         cout<<"roll no : "<<roll<<"\n name : "<<name<<endl;
    //     }
    // };
    // int main(){
    //     student yash[4];
    //     for(int i=0;i<3;i++){
    //         cout<<"roll no : "<<endl;
    //         cin>>yash[i].roll;
    //         cout<<"name : "<<endl;
    //         cin>>yash[i].name;
    //     }
    //     for(int i=0;i<3;i++){
    //         yash[i].setdata(yash[i].roll,yash[i].name);
    //         yash[i].print();
    //     }
       
    //     return 0;
    // }

    // struct employ{
    //     int eid;
    //     string name;
    //     float marks;
    // };
    // int main(){
    //     struct employ yash;
    //     yash.name="yash";
    //     yash.marks=99.99;
    //     yash.eid=1254;

    //     cout<<yash.eid<<endl;
    //     cout<<yash.marks<<endl;
    //     cout<<yash.name<<endl;
    //     return 0;
    // }

    // union omoney{
    //     int rice;
    //     float pounds;
    //     char value;
    // };
    // int main(){
    //     union omoney yash;
    //     yash.rice=1234;
    //     yash.pounds=99.99;
    //     yash.value='y';

    //     cout<<yash.value<<endl;
    //     cout<<yash.rice<<endl;
    //     cout<<yash.pounds<<endl;
    //     return 0;
    // }

//     int sum(int a,int b);
//     int main(){
//         int a,b;
//         cout<<"enter n1 : "<<endl;
//         cin>>a;
//         cout<<"enter n2 : "<<endl;
//         cin>>b;

//         cout<<sum(a,b)<<endl;

        
//     return 0;
// }
// int sum(int a ,int b){
//     int c=a+b;
//     return c;
// }

// class binary{
// public:
// string s;
// void get();
// void check();
// };

// void binary:: get(){
//     cout<<"enter the binary no :"<<endl;
//     cin>>s;
// }

// void binary::check(){
//     for(int i=0;i<s.size();i++){
//         if(s[i]!='1' && s[i]!='0'){
//             cout<<"not binary no"<<endl;
//             exit(0);
//         }
       
        
        
//     }
// }
// int main(){
//     binary yash;
//     yash.get();
//     yash.check();
//     return 0;
// }

// class a{
// public:
// int a;
// void get(){
//     cout<<"enter the a"<<endl;
//     cin>>a;
// }
// };
// class b:public a{
//     public:
//     void set(){
//         cout<<"value of a : "<<a<<endl;
//     }
// };
// int main(){
//     b yash;
//     yash.get();
//     yash.set();
//     return 0;
// }

// class yash{
// public:
// void func(){
//     cout<<"void func"<<endl;
// }
// void func(int a){
//     cout<<"void func of int a"<<endl;
// }
// void func(char s){
//     cout<<"void func of char s"<<endl;
// }
// };
// int main(){

//     yash a;

//     a.func();
//     a.func(10);
//     a.func('a');

//     return 0;
// }

// class employ{
// int id;
// static int count;
// public:
// void getdata();
// void setdata();
// static void getcount(){
//     cout<<"no of employ"<<endl;
// };
// };
// void employ::getdata(){
//     cout<<"enter the id of employ"<<endl;
//     cin>>id;
//     count++;
// }
// void employ::setdata(){
//     cout<<"id of employ is : "<<id<<" and the count of the employ is :"<<count<<endl;
// }
// int employ::count=100;
// int main(){
//     employ yash[4];
//     for(int i=0;i<4;i++){
//         yash[i].getdata();
//         yash[i].setdata();
//         employ::getcount();
//     }
//     return 0;
// }

// class complex{
// int a;
// int b;
// public:
// void setdata(int v1,int v2){
//     a=v1;
//     b=v2;
// }
// void getdata(complex o1,complex o2){
//     a=o1.a+o2.a;
//     b=o1.b+o2.b;
// }
// void print(){
//     cout<<"complex no is "<<a<<" + "<<b<<" I"<<endl;
// }
// };
// int main(){
//     complex a,b,c;
//     a.setdata(10,20);
//     a.print();
//     b.setdata(30,40);
//     b.print();
//     c.getdata(a,b);
//     c.print();
//     return 0;
//}

// class complex{
// int a,b;
// friend complex sumcomplex(complex o1,complex o2);
// public:
// void set(int v1,int v2){
//     a=v1;
//     b=v2;
// }
// void print(){
//     cout<<"complex no : "<<a<<" + "<<b<<" i "<<endl;
// }
// };
// complex sumcomplex(complex o1,complex o2){
//     complex o3;
//     o3.set((o1.a+o2.a),(o1.b+o2.b));
//     return o3;
// }
// int main(){
//     complex a,b,c;
//     a.set(10,20);
//     a.print();
//     b.set(30,40);
//     b.print();
//     c=sumcomplex(a,b);
//     c.print();
//     return 0;
// }

// class complex;
// class calculator{
// public:
// int add(int a,int b){
//     return(a+b);
// }
// int sumrealcomplex(complex,complex);
// int sumcomcomplex(complex , complex);
// };
// class complex{
// int a,b;
// friend int calculator :: sumrealcomplex(complex,complex);
// friend int calculator :: sumcomcomplex(complex , complex);
// public:
// void setdata(int v1,int v2){
//     a=v1;
//     b=v2;
// }
// void print(){
//     cout<<"complex no : "<<a<<"+"<<b<<"i"<<endl;
// }
// };
// int calculator::sumrealcomplex(complex o1,complex o2){
//     return(o1.a+o2.a);
// }
// int calculator::sumcomcomplex(complex o1,complex o2){
//     return (o1.b+o2.b);
// }
// int main(){
//     complex a,b;
//     a.setdata(10,20);
//     a.print();
//     b.setdata(30,40);
//     b.print();
//     calculator yash;
//     int ans=yash.sumrealcomplex(a,b);
//     int cal=yash.sumcomcomplex(a,b);

//     cout<<ans<<" and "<<cal<<endl;
//     return 0;
// }
    
//     class node{
//         public:
//         int data;
//         node* next;
//         node* prev;
//         node(int   val){
//             data=val;
//             next=NULL;
//             prev=NULL;
//         }
//     };


//   void deleteathead(node* &head){
//       node* n=head;
//       head=head->prev;
//       head->prev=NULL;
//       delete n;
//   }
//   void deletion(node* &head,int pos){
//       if(head==NULL){
//           return;

//       }
//       if(pos==1){
//           deleteathead(head);
//           return;
//       }
//       node* n=head;
//       int count=1;

//       while(n->next!=NULL && count!=pos){
//           n=n->next;
//           count++;
//       }
//       n->prev->next=n->next;
//       if(n->next!=NULL){
//           n->next->prev=n->prev;
//       }
//       delete n; 
//   }

// void reversestack(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word="";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
// }
// #define n 10
// class stack{
// int *arr;
// int top;
// public:
// stack(){
//     arr=new int[n];
//     top=-1;
// }
// void push(int x){
//     if(top==n-1){
//         cout<<"stack is full"<<endl;
//         return;
//     }
//     top++;
//     arr[top]=x;

// }

// void pop(){
//     if(top==-1){
//         cout<<"no element in stack"<<endl;
//         return;
//     }
//     top--;
// }
// int Top(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//         return -1;
//     }
//     return arr[top];
// }
// bool empty(){
//     return top==-1;
// }
// };
// int main(){
//     stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     while(!st.empty()){
//         cout<<st.Top()<<endl;
//         st.pop();
//     }
//     return 0;
// }

// void insertAtbottom(stack<int> &st,int ele){
// if(st.empty()){
//     st.push(ele);
//     return;
// }

// int topele=st.top();
// st.pop();
// insertAtbottom(st,ele);
// st.push(topele);

// }

// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverse(st);
//     insertAtbottom(st,ele);
// }

// void reverseR(stack<int> &st){
   
//     int n;
//     stack<int> pt;
//     while(!st.empty()){
//         n=st.top();
//         st.pop();
//         pt.push(n);
//     }
    
//     while(!pt.empty()){
//         cout<<pt.top();
//         pt.pop();
//     }
// }

// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     reverseR(st);
//     return 0;
// }
// void reverseS(stack<int> &st){
//     int ele=st.top();
//     st.pop();
//     reverseS(st);
//     insertAtbottom(st,ele);
// }
// void reverse(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<n){
//         int temp=arr[s];
//         arr[s]=arr[e];
//         arr[e]=temp;
//         s++;
//         e--;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;

//     for(int i=0;i<n;i++){
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<maxNo<< " "<<minNo<< " ";
//     return 0;
// }


// struct node{
// int data;
// struct node* left;
// struct node* right;
// node(int val){
// data=val;
// left=NULL;
// right=NULL;
// }
// };
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data;
// }

// int search(int inorder[],int start,int end,int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]=curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* buildtree(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return;
//     }
//     int curr=preorder[idx];
//     idx++;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);
//     node* left=buildtree(preorder,inorder,start,pos-1);
//     node* right=buildtree(preorder,inorder,pos+1,end);
//     return n;
// }
// node* buildetreep(int postorder[],int inorder[],int start,int end){
//     static int idx=4;
//     if(start>end){
//         return;
//     }
//     int curr=postorder[idx];
//     idx--;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);
//     node* right=buildetreep(postorder,inorder,pos+1,end);
//     node* left=buildetreep(postorder,inorder,start,pos-1);
//     return n;
// }

// void printlevel(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>p;
//     p.push(root);
//     p.push(NULL);
//     while(!p.empty()){
//         node* n=p.front();
//         p.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
//             if(n->left){
//                 p.push(n->left);
//             }
//             if(n->right){
//                 p.push(n->right);
//             }
//         }else if(!p.empty()){
//             p.push(NULL);
//         }
//     }
// }
// void printlev(node * root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node* n=q.front();
//         q.pop();
//         if(n!=NULL){
//         if(n->left){
//             q.push(n->left);
//         }
//         if(n->right){
//             q.push(n->right);
//         }
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }

//     }
// }

// int heighttree(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lh=heighttree(root->left);
//     int rh=heighttree(root->right);

//     return max(lh,rh)+1;
// }

// int caldiameter(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lheight=heighttree(node->left);
//     int rheight=heighttree(node->right);

//     int curr=lheight+rheight+1;

//     int currdiameter=caldiameter(node->left);
// // }
// struct  node{
// int data;
// struct node* left;
// struct node* right;
// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;

// }
// };
// // void sumreplacement(node* root){
//     if(root==NULL){
//         return;
//     }
//     sumreplacement(root->left);
//     sumreplacement(root->right);
//     if(root->left!=NULL){
//         root->data+=root->left->data;

//     }
//     if(root->right!=NULL){
//         root->data+=root->right->data;
//     }
// }
// int height(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     return max(lh,rh)+1;
// }
// int main(){
//     for(int i=0;i<1000;i++){
//         cout<< " i love you very much "<<endl;
//     }
//     return 0;
// }
// class node{
// public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };

// node* reverse(node* &head ){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextptr;
//     while(curr!=NULL){
//         nextptr=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextptr;
//     }
//     return prev;
// }
// void insertAthead(node* &head,int val){
//     node* n=new node(val);
    
//     n->next=head;
//     head=n;
// }
// void end(node* &head,int val){
//      node* a=new node(val);
//     if(head==NULL){
//        head=a;
//         return;
//     }
//     node* n=head;
   
//     while(n->next!=NULL){
//         n=n->next;
//     }
//     n->next=a;


// }
// void display(node* s){
//     while(s!=NULL){
//         cout<<s->data<<" ";
//         s=s->next;
//     }
// }

// node* reverseR(node* &head){
//     if(head==NULL || head->next!=NULL){
//         return head;
//         }
//         node* newnode=reverseR(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newnode;
// }

// // int main(){
// //     node* head=NULL;

// //     end(head,10);
// //      end(head,20);
// //       end(head,30);
// //        end(head,40);

// //        node* q=reverse(head);
       
// //     display(q);

// //     return 0;
// // }

// node* reverseK(node* &head,int k){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextptr;
//     int count=0;
//     while(curr!=NULL && count<k){
//         nextptr=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=reverseK(nextptr,k);
//     }
//     return prev;
// }
// bool detectcycle(node* &head){
   
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         if(fast==slow){
//             return 1; 
//         }
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     return 0;
// }
// void makecycle(node* &head,int pos){
//     node* n=head;
//     node* temp;
//     int count=1;
//     while(n->next!=NULL){
//         if(count==pos){
//             temp=head;
//         }
//         n=n->next;
//         count++;
//     }
//     n->next=temp;
// }
// int deletecycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     node* n=head;
    
//     do{
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     while(fast!=slow);
//     fast=head;

//     while(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     slow->next=NULL;

// }

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
//     node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// void insert(node* &head,int val){
    
//     node* n=new node(val);
//      n->next=head;
//      if(head!=NULL){
//          head->prev=n;
//      }
//      head=n;
     

// }
// void insertAttail(node* &head,int val){
//     node* n=new node(val);
//     node* a=head;
//     if(head==NULL){
//         insert(head,val);
//         return;
//     }
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
//     n->prev=a;
// }
// void deleteAthead(node* &head){
// if(head==NULL){
//     return;
// }
// node* n=head;
// head=head->next;
// delete n;

// }
// void deletion(node* &head,int pos){
//     if(head==NULL){
//         return;
//     }
//     int count=1;
//     if(pos==1){
//         deleteAthead(head);
//         return;
//     }
//     node* n=head;
//     while(n->next!=NULL && count!=pos ){
//         n=n->next;
//         count++;
//     }
   
//     n->prev->next=n->next;
//     if(n->next!=NULL){
//         n->next->prev=n->prev;
//     }
//     delete n;
// }
// int length(node* &head){
//     int l=0;
//     node* n=head;
//     while(n!=NULL){
//         n=n->next;
//         l++;
//     }
//     return l;
// }
// void append_last_kTH_nodes(node* &head,int k){
// node* newtail;
// node* newhead;
// node* n=head;
// int count=1;
// int l=length(head);
// int k=k%l;
// while(n!=NULL){
//     if(count==l-k){
//         newtail=n;
//     }
//     if(count==l-k+1){
//         newhead=n;
//     }
//     count++;
//     n=n->next;
// }
// newtail->next=NULL;
// n->next=head;
// return newhead;

// }
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     struct node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);

//     preorder(root);

//     return 0;

// }

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

// bool isvalid(string s){
//     stack<int> st;
//     int n=s.size();
//     bool ans=true;
//     for(int i=0;i<n;i++){
//         if(s[i]=='('|| s[i]=='{' || s[i]=='['){
//             st.push(s[i]);
//         }
//         else if(!st.empty() && s[i]==')'){
//             if(st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]==']'){
//             if(st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]=='}'){
//             if(st.top()=='{'){

//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         ans=false;
//        }
//        return ans;
// }
// int main(){
//     string s="{[[()]}";
//     if(isvalid(s)){
//         cout<<"balanced parenthesis"<<endl;
//     }
//     else{
//         cout<<"not balanced parenthesis"<<endl;
//     }
    
//     return 0;
// }

// bool isvalid(string s){
//     int n=s.size();
//     stack<char> st;
//     bool ans=true;
//     for(int i=0;i<n;i++){
//         if(s[i]=='{' || s[i]=='[' || s[i]=='('){
//             st.push(s[i]);
//         }
//         else if( s[i]==']'){
//             if( !st.empty() && st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if( s[i]=='}'){
//             if(!st.empty() && st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if( s[i]==')'){
//             if(!st.empty() && st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         ans=false;
//     }
//     return ans;
// }


// int main(){
//     string s="[{()}]";
//     if(isvalid(s)){
//         cout<<"balenced parenthesis"<<endl;
//     }
//     else{
//         cout<<" not balenced parenthesis"<<endl;
//     }
// }

// #define n 20
// class stack{
//     int * arr;
//     int top;
//     public:
//     stack(){
//         arr=new int[n];
//         top=-1;
//     }
// void push(int x){
//     if(top==n-1){
//         cout<<"stack if full "<<endl;
//         return;
//     }
//     top++;
//     arr[top]=x;
// }
// void pop(){
//     if(top==-1){
//         cout<<"stack  is empty "<<endl;
//         return;

//     }
//     top--;
// }
// int top(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     return arr[top];
// }
// bool emmpty(){
//     return top==-1;
// }
// };
// class queue{
// int *arr;
// int front;
// int back;
// public:
// queue(){
//     arr=new int[n];
//     front=-1;
//     back=-1;
// }
// void push(int x){
//     if(back==n-1){
//         cout<<"stack is full "<<endl;
//         return;
//     }
//     back++;
//     arr[back]=x;
//     if(front==-1){
//         front++;
//     }
// }
// void pop(){
//     if(back==-1 || front>back){
//         cout<<"queue is empty"<<endl;
//         return;
//     }
//     front++;

// }
// };
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n)<<endl;
//     return 0;
// }
// int fab(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fab(n-1)+fab(n-2);
// }

// bool sortedarr(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restarray=sortedarr(arr+1,n-1);
//     return (arr[0]<arr[1] && restarray);
// }

// void dec(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<endl;
//     dec (n-1);
// }
// void incr(int n){
//     if(n==0){
//         return ;
//     }
//     incr(n-1);
//     cout<<n<<endl; 
// }

// int firstocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
    
//     if(arr[i]==key){
//         return key;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int firstocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int lastocc(int arr[],int n,int i,int key){
    
//     if(i==n){
//         return -1;
//     }
    
//     int restarr=lastocc(arr,n,i+1,key);
//     if(restarr!=-1){
//         return restarr;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*(n-1);
// }
// int fab(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fab(n-1)+fab(n-2);
// }
// bool sortarr(int arr[],int n){
//     if(n==1){
//         return 1;
//     }
//     bool rest=sortarr(arr+1,n-1);
//     return (arr[0]<arr[1] && rest);
// }
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// void incr(int n){
//     if(n==0){
//         return;
//     }
//     incr(n-1);
//     cout<<n<<endl;
// }
// int firstocc(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }

//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);
// }
// int lastocc(int arr[],int n,int i,int key){
//     if(n==i){
//         return -1;
//     }

//     int rest=lastocc(arr,n,i+1,key);
//     if(rest!=-1){
//         return rest;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }

// void  reverse(string s){
//     if(s.length()==0){
//         return;
//     }
//     string ros=s.substr(1);
//     reverse(ros);
//     cout<<s[0]<<endl;
// }
// void replacepi(string s){
//     if(s.length()==0){
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacepi(s.substr(2));
//     }
//     else{
        
//         cout<<s[0];
//         replacepi(s.substr(1));
       
//     }
// }

// int addtilln(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+addtilln(n-1);
// }
// int power(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     return n*power(n,p-1);
// }
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int fibb(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibb(n-1)+fibb(n-2);
// }
// bool sortarr(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restarr=sortarr(arr+1,n-1);
//     return (arr[0]<arr[1] && restarr);
// }
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// void incr(int n){
//     if(n==0){
//         return;
//     }
//     incr(n-1);
//     cout<<n<<endl;
// }
// int firstoccur(int arr[],int n,int i,int key){
    
//     if(i==n){
//         return -1;
//     }

//     if(arr[i]==key){
//         return i;
//     }
//     return firstoccur(arr,n,i+1,key);
// }
// int lastoccur(int arr[],int n,int i,int key){
//     if(i==n){
//         return -1;
//     }
//     int restarray=lastoccur(arr,n,i+1,key);
//     if(restarray!=-1){
//         return restarray;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }
// #include<string>
// void reversestring(string str)
// {
//     if(str.length()==0){
//         return ;
//     }
//     string ros=str.substr(1);
//     reversestring(ros);
//     cout<<str[0]<<endl;
// }
// void towerofhanoi(int n,char src,char dest,char help){
//     if(n==0){
//         return;
//     }
//     towerofhanoi(n-1,src,help,dest);
//     cout<<"move from "<<src<<" to "<<help<<endl;
//     towerofhanoi(n-1,help,dest,src);
// }
// class node{
//   public:
//   int data;
//   node* next;
//   node(int val){
//       data=val;
//       next=NULL;
//   }  
// };
// node* mergesort(node* &head1,node* &head2){
//     node* ptr1=head1;
//     node* ptr2=head2;
//     node* dummynode=new node(-1);
//     node* ptr3=dummynode;
//     while(ptr1!=NULL && ptr2!=NULL){
//         if(ptr1->data<ptr2->data){
//             ptr3->next=ptr1;
//             ptr1=ptr1->next;
//         }
//         else{
//             ptr3->next=ptr2;
//             ptr2=ptr2->next;
//         }
//         ptr3=ptr3->next;
//     }
//     if(ptr1!=NULL){
//         ptr3->next=ptr1;
//         ptr1=ptr1->next;
//         ptr3=ptr3->next;
//     }
//     if(ptr2!=NULL){
//         ptr3->next=ptr2;
//         ptr2=ptr2->next;
//         ptr3=ptr3->next;
//     }
//     return dummynode->next;
// }
// node* mergesortR(node* &head1,node* &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     node* result;
//     if(head1->data<head2->data){
//         result=head1;
//         result->next=mergesortR(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=mergesortR(head1,head2->next);
//     }
// }
// int length(node* head){
//     int l=0;
//     while(head!=NULL){
//         head=head->next;
//         l++;
//     }
//     return l;
// }
// int intersrection(node* &head1,node* &head2){
//     int l1=length(head1);
//     int l2=length(head2);

//     int d=0;
//     node* p1;
//     node* p2;
//     if(l1>l2){
//         d=l1-l2;
//         p1=head1;
//         p2=head2;
//     }
//     else{
//         d=l2-l1;
//         p1=head2;
//         p2=head1;
//     }
//     while(d){
//         p1=p1->next;
//         if(p1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(p1->next!=NULL && p2->next!=NULL){
//         if(p1==p2){
//             return p1->data;
//         }
//         p1=p1->next;
//         p2=p2->next;
//     }

// }
// node* reverse(node* &head,int k){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextptr;
//     int count=0;
//     while(curr!=NULL && count<k){
//         nextptr=curr->next;
//         curr->next=prev;
//         count++;
//         prev=curr;
//         curr=nextptr;
//     }
//     if(nextptr!=NULL){
//         head->next=reverse(nextptr,k);
//     }
//     return prev;

// }
// #define n 10
// class stack{
// int *arr;
// int top;
// public:
// stack(){
//     arr=new int[n];
//     top=-1;
// }
// void insert(int x){
//     if(top==n-1){
//         return;
//     }
//     top++;
//     arr[top]=x;
// }
// void pop(){
//     if(top==-1){
//         return;
//     }
//     top--;
// }
// int top(){
//     if(top==-1){
//         return;
//     }
//     return arr[top];
// }
// bool empty(){
    
//     return top==-1;
// }

// };
// #include<stack>
// void reversesentense(string s){
//     stack<string> st;
//     string word="";
//     for(int i=0;i<s.length();i++){
//         if(s[i]==' '&& i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty());
    
// }
// void insertAtbottom(stack<int> &st,int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertAtbottom(st,ele);
//     st.push(topele);

// }
// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverse(st);
//     insertAtbottom(st,ele);
// }
// int prefixexpression(string s){
//     stack<int>st;
//     for(int i=s.length()-1;i>=0;i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();

//             switch(s[i]){

//             }
//         }
//     }
// }
// int postfix(string s){
//     stack<int> st;
//     for(int i=0;i<s.length();i++){

//     }
// }
// bool balp(string s){
//     stack<char> st;
//     bool ans=true;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='[' || s[i]=='{' || s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(!st.empty() && s[i]==']'){
//             if(st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]=='}'){
//             if(st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }

//     }
// }
// #define n 10
// class queue{
//     int * arr;
//     int front;
//     int back;
//     public:
//     queue(){
//         arr=new int [n];
//         front=-1;
//         back=-1;
//     }
//     void insert(int x){
//         if(back==n-1){
//             return;
//         }
//         back++;
//         arr[back]=x;
//         if(front==-1){
//             front++;
//         }
//     }
//     void qdelete(){
//         if(front==-1 || front>back){
//             return;
//         }
//         front++; 
//     }
// };
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// class queue{
// node* front;
// node* back;
// public:
// queue(){
//     front=NULL;
//     back=NULL;
// }
// void push(int val){
//     node* a =new node(val);
//     if(front==NULL){
//         back=a;
//         front=a;
//         return;
//     }
//     back->next=a;
//     back=a;
// }
// void pop(){
//     if(front==NULL){
//         return;
//     }
//     node* todel=front;
//     front=front->next;
//     delete todel;
// }
// int peek(){
//     if(front==NULL){
//         return;
//     }
//     return front->data;
// }
// bool empty(){
// return front==NULL;    
//     }


// };
// class queue{
// stack<int> s1;
// stack<int> s2;
// public:
// void push(int x){
//     s1.push(x);
// }
// int pop(){
//     if(s1.empty() && s2.empty()){
//         return -1;
//     }
//     if(s2.empty()){
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//     }
//     int topv=s2.top();
//     s2.pop();
//     return topv;
    
// }
// };

// class node{
// string name;
// long int tel;
// int id;
// friend class hashing;
// public:
// node(){
//     tel=0;
//     id=0;
// }
// };
// class hashing{
// node data[100];
// string n;
// long int t;
// int i,idx;
// public:
// hashing(){
//     t=0;
//     i=0;
// }
// void createRecord(int size){
//     cout<<"\n enter the id :";
//     cin>>i;
//     cout<<"\n enter the name :";
//     cin>>n;
//     cout<<"\n enter the tell no :";
//     cin>>t;

//     idx=i%size;
//     for(int j=0;j<size;j++){
//         if(data[idx].id==0){
//             data[idx].id=i;
//             data[idx].name=n;
//             data[idx].tel=t;
//             break;
//         }
//         else{
//             idx=(idx+1)%size;
//         }
//     }
// }
//     void display(int size){
//         cout<<"\n\t id \t name";
//         cout<<"\t\ttelephone :";
//         for(int j=0;j<size;j++){
//             if(data[j].id!=0){
//                 cout<<"\n\t"<<data[j].id<<"\t"<<data[j].name<<"j"<<data[j].tel;
//             }
//         }

//     }


// };
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
            
//         }
//         counter++;
//     }
//     return 0;
// // }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }
//     return 0;
// }
// int prefix(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;
//                 case '-':
//                 st.push(op1-op2);
//                 break;
//                 case '*':
//                 st.push(op1*op2);
//                 break;
//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             }
//         }
//         return st.top();
//     }
// }
// bool balanced(string s){
//     stack<char> st;
//     bool ans=true;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='[' || s[i]=='{' || s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(!st.empty() && s[i]=='}'){
//             if(st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]==']'){
//             if(st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]==')'){
//             if(st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         if(!st.empty()){
//             ans=false;
//             break;
        
        
//     }
//     if(!st.empty()){
//             ans=false;
//             break;
//         }
// }

// struct node{
//   int data;
//   struct node* left;
//   struct node* right;
//   node(int val){
//       data=val;
//       left=NULL;
//       right=NULL;
//   }  
// };
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }

//     cout<<root->data<<" ";

//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(node * root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// int search(int inorder[],int start,int end,int curr){
    
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* preordertopostorder(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);
//     n->left=preordertopostorder(preorder,inorder,start,pos-1);
//     n->right=preordertopostorder(preorder,inorder,pos+1,end);
//     return n;

// }
// int search(int inorder[],int start,int end,int curr){
//     for(int i=start; i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* pretoin(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);
//     n->left=pretoin(preorder,inorder,start,pos-1);
//     n->right=pretoin(preorder,inorder,pos+1,end);
//     return n;
// }
// node* posttoin(int postorder[],int inorder[],int start,int end)
// {
//     static int idx=4;
//     if(start>end){
//         return NULL;
//     }
//     int curr=postorder[idx];
//     idx--;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);
//     n->right=posttoin(postorder,inorder,pos+1,end);
//     n->left=posttoin(postorder,inorder,start,pos-1);

//     return n;
// }
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// } 

// int sumallnodes(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return sumallnodes(root->left)+sumallnodes(root->right)+root->data;
// }
// int countnodes(node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return countnodes(root->left)+countnodes(root->right)+1;
// }
// int heightN(node* root){
//     if(root==NULL){
//         return 0;
//     }
// }
// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+1+j];
//     }
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             i++;
//             k++;
//         }
//         else{
//             arr[k]=b[j];
//             j++;
//             k++;
//         }
//     }
// }
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }
// class node{
// int id;
// long int tel;
// string name;
// friend class hashing;

// public:
// node(){
//     id=0;
//     tel=0;
// }
// };
// class hashing{
// int i,idx;
// node data[90];
// long int t;
// string n;
// public:
// void set_data(int size){
//     cout<<"\n enter the id : ";
//     cin>>i;

//     cout<<"\n enter the name :  ";
//     cin>>n;

//     cout<<"\n enter the telephone no : ";
//     cin>>t;

//     idx=i%size;
//     for(int a=0;a<size;a++){
//         if(data[idx].id==0){
//         data[idx].id=i;
//         data[idx].name=n;
//         data[idx].tel=t;
//         break;
//         }
//         else{
//             idx=(idx+1)%size;
//         }
        

//     }
// }
// void search(int size){
//     int idx1,key,flag=0;
//     cout<<"\n enter the id key to search :";
//     cin>>key;
//     idx1=key%size;
//     for(int i=0;i<size;i++){
//         if(data[idx1].id==key){
//             flag=1;
//             cout<<"\n key is found : "<<endl;
//             cout<<"\n\t id \t name ";
//             cout<<"\t telephone no : ";
//             cout<<"\n\t"<<data[idx1].id<<"\t"<<data[idx1].name<<"\t"<<data[idx1].tel;
//             break;
            
            
//         }
//         else{
//             idx1=(idx1+1)%size;
//         }
//     }
//     if(flag==0){
//         cout<<"\n key is not found "<<endl;
//     }
// }
// void display(int size){
//     cout<<"\n\t id \t name ";
//     cout<<"\t\t telephone no :";
//     for(int i=0;i<size;i++){
//         if(data[i].id!=0){
//             cout<<"\n\t"<<data[i].id<<"\t"<<data[i].name<<"\t\t"<<data[i].tel;
            
//         }
//     }
// }

// void deleteE(int size){
//     int idx2,key,flag=0;
//     idx2=key%size;
//     for(int i=0;i<size;i++){
//         if(data[i].id==key){
//             flag=1;
//             data[i].id=0;
//             data[i].name="";
//             data[i].tel=0;
//             break;
//         }
//         else{
//             idx2=(idx2+1)%size;
//         }
//     }
//     if(flag==0){
//         cout<<"\n element not deleted , please enter the correct id : "<<endl;
//     }
// }
// };
// int main(){
//     hashing a;
//     int size,ch;
  
//     size=20;

//     do{
//         cout<<"\n 1.create \n 2.search \n 3.display \n 4.delete \n 5.exit "<<endl;
//         cout<<"\n enter the choice : "<<endl;
//         cin>>ch;

//         switch(ch){
//             case 1 :
//             a.set_data(size);
//             break;
//             case 2 :
//             a.search(size);
//             break;
//             case 3:
//             a.display(size);
//             break;
//             case 4:
//             a.deleteE(size);
//             break;
//             case 5 :
//             exit(0);
            

//         }
//     }
//     while(ch!=5);


//     return 0;
// }

// class node{
// int id;
// string name;
// long int tel;
// friend class hashing;
// public:
// node(){
//     id=0;
//     tel=0;
// }
// };
// class hashing{
//     node data[100];
//     int i,idx;
//     long int t;
//     string n;
//     public:
//     void set_data(int size){
//         cout<<"\n enter the id : "<<endl;
//         cin>>i;
//         cout<<"\n enter the name of student : "<<endl;
//         cin>>n;
//         cout<<"\n enter the telephone no : "<<endl;
//         cin>>t;

//         idx=i%size;

//         for(int i=0;i<size;i++){
//             if(data[idx].id==0){
//                 data[idx].id=i;
//                 data[idx].name=n;
//                 data[idx].tel=t;
//                 break;
//             }
//             else{
//                 idx=(idx+1)%size;
//             }
//         }

//     }
//     void search(int size){
//         int idx1,key,flag=0;
//         cout<<"\n enter the value id of key : "<<endl;
//         cin>>key;
//         idx1=key%size;
//         for(int i=0;i<size;i++){
//             if(data[idx1].id==key){
//                 flag=1;
//                 cout<<"\n id : "<<data[idx1].id<<"\n name : "<<data[idx1].name <<"\n telephone no :"<<data[idx1].tel<<endl;
//                 break;
//             }
//             else{
//                 idx1=(idx1+1)%size;
//             }
//         }
//         if(flag==0){
//             cout<<"\n key is not found "<<endl;

//         }
//     }
//     void deleteA(int size){
//         int idx2,key,flag=0;
//         cout<<"\n enter the key value which should be deleted : "<<endl;
//         cin>>key;
//         idx2=key%size;
//         for(int a=0;a<size;a++){
//             if(data[idx2].id==key){
//                 flag=1;
//                 data[idx].id=0;
//                 data[idx2].name="";
//                 data[idx2].tel=0;
//                 cout<<"\n info deleted successfully "<<endl;
//                 break;
//             }
//             else{
//                 idx2=(idx2+1)%size;
//             }
//         }
//         if(flag==0){
//             cout<<"\n please enter the valid info : "<<endl;
//         }
//     }
//     void display(int size){
//         cout<<"\n\t id : \t name ";
//         cout<<"\t\t telephone no : "<<endl;
//         for(int i=0;i<size;i++){
//             if(data[i].id!=0){
//                 cout<<"\n\t"<<data[i].id<<"\t"<<data[i].name<<"\t"<<data[i].tel;
//             }
//         }
//     }
// };
// int main(){
//     int size,ch;
//     size=20;
//     hashing a;
//     do{
//         cout<<"\n 1.create \n 2.search \n 3.display \n 4.delete \n 5.exit"<<endl;
//         cout<<"\n enter the your choice : "<<endl;
//         cin>>ch;

//         switch(ch){
//             case 1:
//             a.set_data(size);
//             break;
//             case 2:
//             a.search(size);
//             break;
//             case 3:
//             a.display(size);
//             break;
//             case 4:
//             a.deleteA(size);
//             break;
//             case 5:
//             exit(0);
//         }

//     }
//     while(ch!=5);
    
    
//     return 0;
// }
// struct node{
// int data;
// struct node* left;
// struct node* right;
// node(int val){
//     left=NULL;
//     right=NULL;
// }
// };
// void sumrepalcement(node* root){
    
//     if(root==NULL){
//         return ;
//     }
    
//     sumrepalcement(root->left);
//     sumrepalcement(root->right);

//     if(root->left!=NULL){
//         root->data+=root->left->data;
//     }
//     if(root->right!=NULL){
//         root->data+=root->right->data;
//     }
// }
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

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
// int hei(node* root){
//     if(root==NULL){
//         return -1;
//     }
//     return max(hei(root->left),hei(root->right))+1;
// }
// bool height(node* root){
//     if(height(root->left)==false){
//         return false;
//     }
//     if(height(root->right)==false){
//         return false;
//     }
//     int lh=hei(root->left);
//     int rh=hei(root->right);

//     if(abs(lh-rh)<=1){
//         return 1;
//     }
//     else{
//         return false;
//     }

// }
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

// int height(node* root){
//     if(root==NULL){
//         return -1;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);

//     return max(lh,rh)+1;

// }

// bool balanced(node* root){

//     if(root==NULL){
//         return true;
//     }

//     if(balanced(root->left)==false){
//         return false;
//     }
//     if(balanced(root->right)==false){
//         return false;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);

//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     return 0;
// }
// void leftview(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
        
//         for(int i=0;i<=n;i++){
//             node* yash=q.front();
//         q.pop();
//             if(i==1){
//                 cout<<yash->data<<" ";
//             }
//             if(yash->left!=NULL){
//                 q.push(yash->left);
//             }
//             if(yash->right!=NULL){
//                 q.push(yash->right);
//             }
//         }
//     }
// }

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
// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(node* root){
//     if(root==NULL){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){

//     // palindrome no program  

//     int n,num;
//     cin>>num;
//     // here store the value of num in n variable
//     n=num;
    
//     int chk=0;

//     // use do while loop beacuse we declear chk=0

//     do{
//         int rev=num%10;
//         chk= (chk*10) +rev;
//         num=num/10;
//     }
//     while(num!=0);
//     // checking values 

//     if(n==chk){
//         cout<<" palindrome number : "<<endl;
//     }
//     else{
//         cout<<"not palindrome number : "<<endl;
//     }
//     // thanks === made by yash
//     return 0;
// }

// #include<string>

// // std universary library
// #include<bits/stdc++.h>

// bool palindrome(string a){
//     string s=a;

//     reverse(s.begin(),s.end());

//     if(s==a){
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// int main(){
//     string a;
//     cin>>a;

//     if(palindrome(a)){
//         cout<<"string is paliindrome "<<endl;
//     }
//     else{
//         cout<<"string is not palindrome "<<endl;
//     }
//     return 0;
// }

// khup steps ahet string chi length find karaychya 
// int main(){
//     string y="yash";
    
//     // step 1

//     cout<<"step 1 , length = "<<y.size()<<endl;

//     // step 2

//     cout<<"step 2 , length = "<<y.length()<<endl;

//     // step 3return 0;
    
//     int i=0;
//     while(y[i]){
//         i++;
//     }
//     cout<<"step 3, length =  "<<i<<endl;

//     // step 4
//     int j,k=0;
//     for(int j=0;j<y.length();j++){
//         k++;
//     }
//     cout<<"step 4, length = "<<k<<endl;
//     return 0;
// }
// int main(){
// int arr1[4]={1,2,3,4};
// int arr2[4]={4,5,6,7};
// int arr3[8]={};
// int i=0,j=0,k=0;
// while(arr1[i]<4 && arr2[j]<4){
//     if(arr1[i]<arr2[j])
//     cout<< arr3[i]<<" ";
//     i++,k++;

//     if(arr1[i]>arr2[j])
//     cout<<arr3[j]<<" ";
//     j++,k++;
//     if(arr1[i]==arr2[j])
//     cout<<"array has intersection point : "<<i<<endl;
//     break;
// }
// while(arr1[i]<4)
// cout<<arr3[i]<<" ";
// i++,k++;
// while(arr2[j]<4)
// cout<<arr3[j]<<" ";
// k++,j++;


// return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     while(n!=0){
//         int lastdigit=n%10;
//         rev=rev*10 +lastdigit;
//         n/=10;
//     }
//     cout<<rev<<endl;

//     return 0;
// }

// int main(){
//     int n,a;
    
//     cin>>n;
//     a=n;
//     int rev=0;
//     while(n>0){
//         int last=n%10;
//         rev=rev +pow(last,3);
//         n/=10;
//     }
//     if(a==rev){
//         cout<<"armstrong no "<<endl;
//     }
//     else{
//         cout<<"not armstrong no"<<endl;
//     }
//     return 0;
// }
// bool isprime(int n){
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++){
//         if(isprime(i)){
//             cout<<i<<endl;
//         }
        
//     }
//     return 0;
// }

// void fab(int n){
//     int t1=0;
//     int t2=1;
//     int nextterm;
//     for(int i=1;i<=n;i++){
//         cout<<t1;
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     fab(n);
//     return 0;
// }
// int fact(int n){
//     int facto=1;
//     for(int i=2;i<=n;i++){
//         facto=facto*i;
//     }
//     return facto;
// }
// int main(){
//     int n;
//     cin>>n;
    
// for(int i=0;i<n;i++){
//     for(int j=0;j<=i;j++){
//         cout<<fact(i)/(fact(j)*fact(i-j))<< " ";
//     }
//     cout<<endl;
// }
//     return 0;
// }
// bool check(int x,int y,int z){
//     int a=max(x,max(y,z));
//     int b,c;
//     if(a==x){
//         b=y;
//         c=z;
//     }
//     else if(a==y){
//         b=x;
//         c=z;
//     }
//     else{
//         b=x;
//         c=y;
//     }
//     if( a*a == b*b+c*c){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(check(a,b,c)){
//         cout<<"pythagorian triplet"<<endl;
//     }
//     else{
//         cout<<"not pythagorian triplet"<<endl;
//     }
//     return 0;
// }


// class node{
// public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };

//===========================================================================================================//

// int linearsearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearsearch(arr,n,key);
//     return 0;
// }

//==================================================================================================================================//

// int binarysearch(int arr[],int n,int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(arr[mid]<key){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binarysearch(arr,n,key);
//     return 0;
// }

// int raisedpow(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     int prevpow=pow(n,p-1);
//     return n*prevpow;
// }

// int main(){
//     int n,p;
//     cin>>n>>p;

//     cout<<raisedpow(n,p);
//     return 0;
// }

// class yash{
// public:
// void fucc(){
//     cout<<"null call";

// }
// void fucc(int x){
//     cout<<"integer call";
// }
// void fucc(char a){
//     cout<<"character call";
// }
// };
// int main()
// {
//     yash ovj;
//     ovj.fucc();
//     ovj.fucc(2);
//     ovj.fucc('s');
//     return 0 ;
// }
// class employ{
// int id;
// static int count;
// public:
// void getdata(){
//     cout<<"enter the employ id"<<endl;
//     cin>>id;
//     count++;
// }
// void display(){
//     cout<<"employs id = "<<id<<endl;
//     cout<<"rolll jo of employ is "<<count<<"\n";
// }
// };
// int employ::count=10;
// int main(){
//     employ yash,karan;
//     yash.getdata();
//     karan.getdata();
//     yash.display();
//     karan.display();
//     return 0;
// }
// void primesieve(int n){
//     int prime[100]={0};
//     for(int i=2;i<=n;i++){
//      if(prime[i]==0){
//          for(int j=i*i;j<=n;j+=i){
//              prime[j]=1;
//          }
//      }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;

//     primesieve(n);

//     return 0;
// }

// void primesieve(int n){
//     int prime[100]={0};
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//     if(prime[i]==0){
//     cout<<i<<" ";}
//     }

// cout<<endl;    
// } 
// int main(){
//     int n;
//     cin>>n;
//     primesieve(n);
//     return 0;
// }
// void printhello(int n){
//     if(n==1){
//         return ;
//     }
//     cout<<"hellow world"<<" ";
//     printhello(n-1);
// }
// int main(){
//     int n;
//     cin >> n;

//    printhello(n);
//     return 0;
// }

// int sumnatural(int n){
//     if(n==0){
//         return 0;
//     }
   
//     return n+sumnatural(n-1);


// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<sumnatural(n);
//     return 0;
// }
// int power(int a,int b){
//     if(b==0){
//         return 1;
//     }
//     return a*power(a,b-1);
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
//     return 0;
// }

// int matrix(int n,int m){
//     if(n==1 || m==1){
//         return 1;
//     }
//     return matrix(n,m-1)+matrix(n-1,m);
// }

// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     cout<<matrix(n,m);
//     return 0;
// }
// bool find(string s,int l,int r){
//     if(l>=r){
//         return true;
//     }
//     if(s[l]!=s[r]){
//         return false;
//     }
//     return find(s,l+1,r-1);

// }
// int main()
// {
    

//     cout<<find("yash",0,3);
//     return 0;
// // }
// int getbit(int n,int pos){
//     return((n&(1<<pos))!=0);
// }
// int setbit(int n,int pos){
//     return(n||(1<<pos));
// }
// int clearbit(int n,int pos){
//     int mask=~(1<<pos);
//     return(mask&n);
// }
// int updatebit(int n,int pos,int val){
//     int mask=~(1<<pos);
//     n=n&mask;
//     return(n|(val<<pos));
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int pos;
//     cin>>pos;
//     cout<<getbit(n,pos);
//     return 0;
// }
// void primesieve(int n){
//     int prime[100]={0};
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
       
//     }
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     primesieve(n);
//     return 0;
// }
// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1],b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+1+j];
//     }
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             i++;
//         }
//         else{
//             arr[k]=b[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         i++,k++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         j++,k++;
//     }
// }
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }

// int main()
// {
//     int arr[]={5,3,4,1,2};
//     mergesort(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// void swap(int arr[],int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// int pivot(int arr[],int l,int r){
//     int piv=arr[r];
//     int i=l-1;
//     for(int j=1;j<r;j++){
//         if(arr[j]<piv){
//             swap(arr,i,j);
//         }
//     }swap(arr,i+1,r);
//     return i+1;
// }
// void quicksort(int arr[],int l ,int r){
//     if(l<r){
//         int pi=pivot(arr,l,r);
//         quicksort(arr,l,pi-1);
//         quicksort(arr,pi+1,r);
//     }
// }
// int main()
// {
//     int arr[]={5,3,4,2,6,7,1,9};
//     quicksort(arr,0,7);
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// class node{
//     public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };
// void display(node* &head){
//     node* n=head;
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// }
// void insertAthead(node* &head,int val){
//     node* n=new node(val);
    
//     n->next=head;
//     head=n;
// }
// void insertATtail(node* &head,int val){
//     node* n=new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* a=head;
//     while(a->next!=NULL){
//         a=a->next;

//     }
//     a->next=n;
// }
// void deleteatHead(node* &head){
//     node* n=head;
//     head=head->next;
//     delete n;
// }
// void deletion(node* &head,int pos){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteatHead(head);
//         return;
//     }
//     node* n=head;
//     while(n->next->data!=pos){
//         n=n->next;
//     }
//     node* del=n->next;
//     n->next=n->next->next;
//     delete del;
// }
// bool search(node* &head,int key){
//     node* n=head;
//     while(n!=NULL){
//         if(n->data==key){
//             return true;
//         }
//         n=n->next;
//     }
//     return false;
// }
// node* reverse(node* &head){
//     node* curr=head;
//     node* prev=NULL;
//     node* nextptr;
//     while(curr!=NULL){
//         nextptr=curr->next;
//         curr->next=prev;
//         curr=nextptr;
//         prev=curr;
//         return prev;

//     }
// }
// node* reverseR(node* &head){
//     if(head==NULL || head->next==NULL){
//         return;
//     }
//     node* r=reverseR(head->next);
//     head->next->next=head;
//     head->next=NULL;
// }

// node* reverseK(node* &head,int k){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextptr;
//     int count=0;
//     while(curr!=NULL && count<k){
//         nextptr=curr->next;
//         curr->next=prev;
//         curr=nextptr;
//         prev=curr;
//         count++;

//     }
//     if(nextptr!=NULL){
//         head->next=reverseK(nextptr,k);
//     }
//     return prev;
// }

// bool detectcycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     while(fast->next!=NULL && fast!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow){
//             return true;
//         }
//         return false;
//     }

// }
// void makecycle(node* &head,int pos){
//     node* n=head;
//     node* nextnode;
//     int count=1;
//     while(n->next!=NULL){
//         if(count==pos){
//             nextnode=n;
//         }
//         n=n->next;
//         count++;
//     }
//     n->next=nextnode;
// }

// void removal(node* &head){
//     node* slow=head;
//     node* fast=head;
//     do{
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     while(fast!=slow);
//     fast=head;
//     while(slow->next!=fast->next){
//         slow=slow->next;
//         fast=fast->next;
//     }
//     slow->next=NULL;
// }
// int length(node* head){
//     node* n=head;
//     int l=0;
//     while(n!=NULL){
//         n=n->next;
//         l++;
//     }
//     return l;
// }
// node* kappend(node* &head,int k){
//     node* newhead;
//     node* newtail;
//     node* n=head;
//     int l=length(head);
//     int count=1;
//     k=k%l;
//     while(n->next!=NULL){
//         if(count=l-k){
//             newtail=n;
//         }
//         if(count=l-k+1){
//             newhead=n;
//         }
//         n=n->next;
//         count++;
//     }
//     newtail->next=NULL;
//     n->next=head;
//     return newhead;
// }
// int intersection(node* &head1,node* &head2){
//     int l1=length(head1);
//     int l2=length(head2);
//     int d=0;
//     node* ptr1;
//     node* ptr2;
//     if(l1>l2){
//         d=l1-l2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     else{
//         d=l2-l1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     while(d){
//         ptr1=ptr1->next;
//         if(ptr1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(ptr1!=NULL && ptr2!=NULL){
//         if(ptr1==ptr2){
//             return ptr1->data;
//         }
//         ptr1=ptr1->next;
//         ptr2=ptr2->next;
    
//     }
//     return -1;
// }

// void intresect(node* &head1,node* &head2,int pos){
//     node* n=head1;
//     while(pos){
//         n=n->next;
//         pos--;
//     }
//     node* a=head2;
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
// }
// node* merge(node* &head1,node* &head2){
//     node* a=head1;
//     node* b=head2;
//     node* dummynode=new node(-1);
//     node* n=dummynode;
//     while(a!=NULL && b!=NULL){
//         if(a->data>b->data){
//             n->next=b;
//             b=b->next;
//         }
//         else{
//             n->next=a;
//             a=a->next;

//         }
//         n=n->next;
//     }
//     while(a!=NULL){
//         n->next=a;

//         n=n->next;
//         a=a->next;
//     }
//     while(b!=NULL){
//         n->next=b;
//         n=n->next;
//         b=b->next;
//     }
//     return dummynode->next;
// }
// node* mergeR(node* &head1,node* &head2){
//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     node* result;
//     if(head1->data>head2->data){
//         result=head2;
//         result->next=mergeR(head1,head2->next);
//     }
//     else{
//         result=head1;
//         result->next=mergeR(head1->next,head2);
//     }
//     return result;
// }
// #define n 100
// class stack{
//     int *arr;
//     int top;
//     public:
//     stack(){
//         arr=new int[n];
//         top=-1;
//     }
//     void push(int x){
//         if(top==n-1){
//             cout<<"stack is full"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top=-1){
//             cout<<"stack is empty"<<endl;
//             return;
//         }
//         top--;
//     }
//     int Top(){
//         if(top==-1){
//             cout<<"top is null "<<endl;
//             return;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         if(top==-1){
//             return true;
//         }
//         return false;
//     }
// };
// int main()
// {
    
//     return 0;
// }
// #include<stack>
// void reversestring(string st){
//     string word="";
//     stack<string>s;
//     for(int i=0;i<st.length();i++){
//         while(st[i]=" " && i<st.length()){
//             word+=st[i];
//         }
//         s.push(word);
//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
// }
// void insertAtbottom(stack<int> st,int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertAtbottom(st,topele);
//     st.push(topele);
// }
// void reverseStack(stack<int> st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverseStack(st);
//     insertAtbottom(st,ele);
// }
// int prefix(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();

//             switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;

//                 case '-':
//                 st.push(op1-op2);
//                 break;

//                 case '*':
//                 st.push(op1*op2);
//                 break;
                
//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;

//                 case '/':
//                 st.push(op1/op2);
//                 break;
//             }
//         }
       
//     }
//      return st.top();
// }

// int postfix(string s){
//     stack<int> st;
//     for(int i=0;i<=s.length();i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op2=st.top();
//             st.pop();
//             int op1=st.top();
//             st.pop();
        
//         switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;

//                 case '-':
//                 st.push(op1-op2);
//                 break;

//                 case '*':
//                 st.push(op1*op2);
//                 break;
                
//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;

//                 case '/':
//                 st.push(op1/op2);
//                 break;
//             }
//         }
//     }
//     return st.top();
// }
// int pre(char c){
//     if(c=='^'){
//         return 3;
//     }
//     else if(c=='/' || c=='*'){
//         return 2;
//     }
//     else if(c=='+' || c=='-'){
//         return 1;
//     }
//     return -1;
// }
// 
// class node{
//     public:

//     int data;
//     node* next;
//     // node(int val){
//     //     data=val;
//     //     next=NULL;
//     // }
// };
// void display(node * n){
    
//     while(n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// }

// int main(){
    
//     node *head=NULL;
//     node *first=NULL;
//     node *second=NULL;
//     head=new node();
//     first=new node();
//     second=new node();


//     head->data=10;
//     head->next=second;

//     first->data=20;
//     first->next=second;
//     second->data=20;
//     second->next=NULL;

//     display(head);




//     return 0;
// }
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }   


// class node{
// public:
// int data;
// node* left;
// node*right;

// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };

// void preorder(node* root){
//     if (root==NULL)
//     {
//         return ;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
    
// }
// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// void postorder(node*root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" "; 
// }

// void leftview(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue <node*> q;
//     q.push(root);
//     while(!q.empty()){
        
//         int n=q.size();

//         for(int i=0;i<n;i++){
//             node* curr=q.front();
//             q.pop();
//             if(i==n-1){
//                 cout<<curr->data<<" ";
//             }
//             if(curr->left!=NULL){
//                 q.push(curr->left);
//             }
//             if(curr->right!=NULL){
//                 q.push(curr->right);
//             }
//         }
//     }
// }



// class node{
// public:
// int data;
// node *left,*right;
// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };
// node* LCA(node* root,int n1 , int n2){
//     if(root==NULL){
//         return NULL;
//     }
//     if(root->data==n1 ||root->data==n2){
//         return root;
//     }
//     node* left=LCA(root->left,n1,n2);
//     node* right=LCA(root->right,n1,n2);

//     if(left!=NULL && right!=NULL){
//         return root;
//     }
//     if(left==NULL && right==NULL){
//         return NULL;
//     }
//     if(left!=NULL){
//         return LCA(root->left,n1,n2);
//     }
//     return LCA(root->right,n1,n2);
// }
// int findDist(node* root,int k,int dist){
//     if(root==NULL){
//         return -1;
//     }
//     if(root->data==k){
//         return dist;
//     }
//     int left=findDist(root->left,k,dist+1);
//     if(left!=-1){
//         return left;
//     }
//     return findDist(root->right,k,dist+1);
// }
// int distBTWnodes(node* root,int n1,int n2){
//     node* lca=LCA(root,n1,n2);
//     int d1=findDist(lca,n1,0);
//     int d2=findDist(lca,n2,0);
// }

// void merge(int arr[],int l,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1],b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+1+j];
//     }
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             k++,i++;
//         }
//         else{
//             arr[k]=b[j];
//             k++,j++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         i++,k++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         j++,k++; 
//     }

// }
// void mergesort(int arr[],int l,int r){
//     while(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }


// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insertAThead(node* head,int  val){
//     node *n =new node(val);
//     n->next=head;
//     head=n;

    
// }
// void isertAthed(node* head,int val){
//     node* n=new node(val);
//     node* p=head;
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     while(p->next!=NULL){
//         p=p->next;
//     }
//     p->next=n;
// }
// void display(node* a){
//     while(a!=NULL){
//         cout<<a->data<<" ";
//         a=a->next;
//     }
// }

// bool search(node* head,int val){
//     node* a=head;
//     while(a!=NULL)
//     {
//         if(a->data==val){
//             return true;
//         }

//         a=a->next;
//     }
//     return false;
// }

// void deleteAthead(node* head){
//     if(head==NULL){
//         return;
//     }
//     node*  n=head;
//     head=head->next;
//     delete n;
// }
// void deletion(node* head,int val){
//     if(head==NULL){
//         return;
//     }
//     while(head->next==NULL){
//         deleteAthead(head);
//         return;
//     }
//     node* n=head;
//     while(n->next->data!=val){
//         n=n->next;
//     }
//     node* del=n->next;
//     n->next=n->next->next;
//     delete del;
// }

// void swapn(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int a=10,b=20;

//     swapn(a,b);
//     cout<<a << " "<<b;
//     return 0;
// }
// struct node{
// int data;
// node* left;
// node* right;
// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };
// node* insertBST(node* root,int key){
//     if(root==NULL){
//         return new node(key);
//     }

//     if(key==root->data){
//         return root;
//     }

//     if(key<root->data){
//         root->left=insertBST(root->left,key);
//     }
//     else{
//         root->right=insertBST(root->right,key);
//     }
//     return root;

// }

// node* inorderSUCC(node* root){
//     node* temp=root;
//     while(temp && temp->left !=NULL){
//         temp=temp->left;
//     }
//     return temp;
// }


// node* deleteBST(node* root,int key){
//     if(key<root->data){
//         root->left=deleteBST(root->left,key);
//     }
//     else if(key>root->data){
//         root->right=deleteBST(root->right,key);
//     }
//     else{
//         if(root->left==NULL){
//             node* temp=root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right==NULL)
//         {
//             node* temp=root->right;
//             free(root);
//             return temp;
//         }
//         node* temp=inorderSUCC(root->right);
//         root->data=temp->data;
//         root->right=deleteBST(root->right,key);
//     }
//     return root;
// }

// class node{
// public:

// int data;
// node* next;

// node(int val){
//     data=val;
//     next=NULL;
// }
// };
// void insertATstart(node* head,int val){
//     node* n=new node(val);
//     n->next = head;
//     head =  n;
// }

// void insertATend(node* head,int val){
//     node* n=head;
//     node* a=new node(val);
//     if(head=NULL){
//         head=a;
//         return;
//     }
//     while(n->next!=NULL){
//         n=n->next;
//     }
//     n->next=a;

// }
// node* reverse(node* head){
//     node* prevptr=NULL;
//     node* curr=head;
//     node* nextptr;
//     while(curr->next!=NULL){
//         nextptr=curr->next;
//         curr->next=prevptr;

//         prevptr=curr;
//         curr=nextptr;
//     }
//     return prevptr;
// }

// node* recursiveR(node* head){
//     if(head==NULL && head->next==NULL){
//         return head;
//     }
//     node* r=recursiveR(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return r;
// }

// bool detectcycle(node* head){
//     node* slow;
//     node* fast;
//     while(fast!=NULL && fast->next!=NULL){
//         fast=head->next->next;
//         slow=head->next;
//         if(fast=slow){
//             return true;
//         }
//     }
//     return false;
// }
// void makecycle(node* head,int pos){
//     node* temp;
//     node* a=head;
//     int count=1;
//     while(a->next!=NULL){
//         if(count==pos){
//             temp=a;
//         }
//         count++;
//         a=a->next;
//     }
//     a->next=temp;
// }
// void removalcycle(node* head){
//     node* fast=head;
//     node* slow=head;
//     do{
//         fast=head->next->next;
//         slow=head->next;
//     }
//     while(fast!=slow);
//     fast=head;
//     while(fast->next!=slow->next){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     slow->next=NULL;
// }

// void reverseSentence(string s){
//     stack<string> st;
//     string word;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=' ' && i<s.length()){
//             word+=s[i];
//         }
//         st.push(word);

//         while(!st.empty()){
//             cout<<st.top()<<" ";
//             st.pop();
//         }
//     }
// }

// void insertATbottom(stack<int> &st,int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertATbottom(st,ele);
//     st.push(ele);
// }

// void reverseS(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverseS(st);

//     insertATbottom(st,ele);

// }
// int prefixEvalution(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i++){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();

//             switch(s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;

//             }

//         }
//         return st.top();
//     }
// }


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
// node* constructBST(int preorder[],int * preorderIDX, int key,int min ,int max,int n ){
    
//     if(*preorderIDX >=n){
//         return NULL;
//     }
    
    
//     node* root=NULL;
//     if(key>min && key<max){
//         root=new node(key);
//         *preorderIDX+=1;
//         if(*preorderIDX < n){
//             root->left=constructBST(preorder,preorderIDX,preorder[*preorderIDX],min,key,n);
//         }
//         if(*preorderIDX < n){
//             root->right= constructBST(preorder,preorderIDX,preorder[*preorderIDX],key,max,n);
//         }
//     }
//     return root;
// }

// void  printPreorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     printPreorder(root->left);
//     printPreorder(root->right);
// }
// int main(){
//     int preorder[]={13,10,1,3,12,7};
//     int n=6;
//     int preorderIDX=0;
//     node* root=constructBST(preorder,&preorderIDX,preorder[0],INT_MIN,INT_MAX,n);
//     printPreorder(root);
//     return 0;
// }

// node* preorderBSt(int preorder[],int *preorderIDX,int key,int min,int max,int n){
    
//     if(*preorderIDX >= n){
//         return NULL;
//     }
    
//     node* root=NULL;

//     if(key > min && key <max){
//         root=new node(key);
//         *preorderIDX+=1;

//         if(*preorderIDX<n){
//             root->left=preorderBSt(preorder,preorderIDX,preorder[*preorderIDX],min,key,n);
//         }
//         if(*preorderIDX<n){
//             root->right=preorderBSt(preorder,preorderIDX,preorder[*preorderIDX],key,max,n);
//         }
//     }
//     return root;
// }
// bool IsBST(node* root,node* min=NULL , node* max=NULL){
//     if(root==NULL){
//         return true;
//     }
//     if( min!=NULL && root->data <= min->data){
//         return false;
//     }
//     if(max!=NULL && root->data >= max->data){
//         return false;
//     }
//     bool leftBST=IsBST(root->left,min,root);
//     bool rightBST=IsBST(root->right,root,max);

//     return leftBST && rightBST;
// }
// node* sortedBST(int arr[],int start,int end){
    
//     if(start> end){
//         return NULL;
//     }
    

//     int mid=(start+end)/2;
//     node* root=new node(arr[mid]);
//     root->left=sortedBST(arr,start,mid-1);
//     root->right=sortedBST(arr,mid+1,end);
//     return root;
// }

// node* insertBST(node* root,int val){
//     if(root==NULL){
//         return new node(val);
//     }
//     if(val <root->data){
//         root->left=insertBST(root->left,val);
//     }
//     if(val>root->data){
//         root->right=insertBST(root->right,val);
//     }
//     return root;
// }

// void zigzagTraversal(node* root){
//     stack<node*> currlevel;
//     stack<node*> nextlevel;
//     bool leftToright=true;

//     currlevel.push(root);

//     while(!currlevel.empty()){
        
//         node* temp=currlevel.top();
//         currlevel.pop();

//         if(temp){
//             cout<<temp->data<<" ";

//             if(leftToright){
//                 if(temp->left){
//                     nextlevel.push(temp->left);
//                 }
//                 if(temp->right){
//                     nextlevel.push(temp->right);
//                 }
//             }
//             else{
//                  if(temp->right){
//                     nextlevel.push(temp->right);
//                 }
//                  if(temp->left){
//                     nextlevel.push(temp->left);
//                 }
//             }
//         }
//         if(currlevel.empty()){
//             leftToright=!leftToright;
//             swap(currlevel,nextlevel);
//         }

//     }
// }

// void zigzagT(node* root){
//     stack<node*> currlevel;
//     stack<node*>nextlevel;
//     bool leftToright;

//     currlevel.push(root);

//     while(!currlevel.empty()){
//         node* temp=currlevel.top();
//         currlevel.pop();

//         if(temp){
//             cout<<temp->data<<" ";
//             if(leftToright){
//                 if(temp->left){
//                     nextlevel.push(temp->left);
//                 }
//                 if(temp->right){
//                     nextlevel.push(temp->right);
//                 }
//             }
//             else{
//                 if(temp->right){
//                     nextlevel.push(temp->right);
//                 }
//                 if(temp->left){
//                     nextlevel.push(temp->left);

//                 }
//             }
//         }
//         if(currlevel.empty()){
//             leftToright=!leftToright;
//             swap(currlevel,nextlevel);
//         }
//     }

// }


// int main()
// {
//     int n;
//     cin>>n;

//     int reverse=0;
//     while(n){
//         int lastdigit=n%10;
//         reverse=reverse*10 + lastdigit;
//         n/=10;
//     }    cout<<"reverse no : "<<reverse;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int temp=n;
//     int sum =0;

//     while(n>0){
//         int last=n%10;
//         sum=sum+pow(last,3);
//         n/=10;
//     }
//     if(temp==sum){
//         cout<<"it is a armstrong no "<<endl;
//     }
//     else{
//         cout<<"not armstrong no "<<endl;
//     }
//     return 0;
// }
// bool isprime(int num){
//     for(int i=2;i<sqrt(num);i++){
//          if(num%i==0){
//              return false;
//          }
//     }
//     return true;
// }

// void fibonacci(int n){
//     int t1=0,t2=1;
//     int nextterm;
//     for(int i=1;i<n;i++){
//         cout<<t1<<" ";
//         nextterm=t1+t2;
//         t1=t2;
//         t2=nextterm;

//         return;

//     }
// }

// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=1;
//         return 0;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=fact(n);
//     cout<<ans;
//     return 0;
// }
// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;
        
//     }
//     return factorial;
// }
// int main(){
//     int n,r;
//     cin>>n>>r;

//     int ans=fact(n)/fact(n)*fact(n-r);

//     return 0;
// }
// int fact(int num){
//     int factorial=1;
//     for(int i=1;i<=num;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main()
// {
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/fact(j)*fact(i-j)<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// int sumN(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }
// bool check(int x,int y,int z){
//     int a=max(x,max(y,z));
//     int b,c;

//     if(a==x){
//         b=y;c=z;
//     }
//     else if(a==y){
//         c=x;
//         b=z;
//     }
//     else{
//         b=x;
//         c=y;
//     }
//     if(a*a == b*b + c*c){
//         return true;
//     }
//     return false;
// }

// int BtoD(int n){
//     int x=1;
//     int ans=0;
//     while(n){
//          int y=n%10;
//          ans+=x*y;
//          n/=10;
//     }
//     return ans;
    

// }

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int minNo=INT_MAX;
//     int maxNo=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
    
//     cout<<"maxNo = "<<maxNo<<endl<<"minNo = "<<minNo<<endl;

//     return 0;
// }

// int linearsearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }

// int binarysearch(int arr[],int n,int key){
//     int s=0,e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }

//     }
//     return -1;

// }
// int binarysearch(int arr[],int n,int key){
//     int s=0,e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]>arr[j]){
//                     int temp=arr[i];
//                     arr[i]=arr[j];
//                     arr[j]=temp;
//                 }
//             }
//         }

//     return 0;
// }
// int main(){int n;
// int arr[n];
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//     }
//     return 0;
// }


// int main()
// {
//     string str;
//     getline(cin,str);
//     cout<<str<<endl;

//     return 0;
// }

// int main()
// {
//     string s1="family";

//     for(int i=0;i<s1.length();i++){
//         cout<<s1[i]<<endl;
//     }

//     return 0;
// }
// void primsieves(int n){
//     int prime[100]={0};
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=1){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<n;i++){
//         if(prime[i]==0){
//             cout<<i<<endl;
//         }
//     }
// }
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+sum(n-1);
// }
// int prevpower(int n,int p){
//     if(p==0){
//         return 1;
//     }
//     return n*prevpower(n,p-1);
// }

// template<class t1=int ,class t2=float >

// class yash{
//     t1 x;
//     t2 y;
//     public:
//     yash(t1 a,t2 b){
//         x=a;
//         y=b;
//     }
//     void dispaly(){
//         cout<<x<<" "<<y<<endl;
//     }
// };

// int main(){
//     yash<> a(1,2);

//     a.dispaly();
    

//     return 0;
// }

// struct node{
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// node* insertBST(node* root,int val){
//     if(root==NULL){
//         return new node(val);
//     }

//     if(val<root->data){
//         root->left=insertBST(root->left,val);
//     }
//     else{
//         root->right=insertBST(root->right,val);
//     }
//     return root;

// }
// node* inorderSUCC(node* root){
//     node* curr=root;
//     while (curr && curr->left !=NULL){
//         curr==curr->left;
//     }
//     return curr;
// }
// node* deleteBST(node* root,int key){
//     if(key<root->data){
//         root->left=deleteBST(root->left,key);
//     }
//     else if(key>root->data){
//         root->right=deleteBST(root->right,key);
//     }
//     else{
//         if(root->left==NULL){
//             node* temp=root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right==NULL){
//             node* temp=root->left;
//             free(root);
//             return temp;
//         }
//         node* temp=inorderSUCC(root->right);
//         root->data=temp->data;
//         root->right=deleteBST(root->right,key);
//     }
//     return root;
// }

// class node{
//     public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };
// void push(node* &head,int val){
//     node* n=new node(val);
//     n->next=head;
//     head=n;
// }

// void insertAttail(node* &head,int val){
//     node* n=new node(val);
//     if(head==NULL){
//         head=n;
//     }
//     while(head->next!=NULL){
//         head=head->next;
//     }
//     head->next=n;
// }

// void deleteAThead(node* head){
//     if(head==NULL){
//         return;
//     }
//     node* n=head;
//     head=head->next;
//     delete n;
// }
// void deleteion(node* &head,int pos){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAThead(head);
//         return;
//     }
//     node* n=head;

//     while (n->next->data!=val)
//     {
//         n=n->next;
//     }
//     node* tod = n->next;
//     n->next=n->next->next;
//     delete tod;


// }

// struct node{
// int data;
// node* left;
// node* right;
// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };

// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data;
//     inorder(root->right);
// }

// class node{
// public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };
// void insertAThead(node* &head,int val){
// node* n=new node(val);
// n->next=head;
// head=n;
// }

// void end(node* &head,int val){
//     node* n=new node(val);
//     if(head==NULL){
//         head=n;
//         return;
//     }
//     node* a=head;
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
// }
// int getbit(int n,int pos){
//     return((n&(1<<pos))!=0);
// }
// int clearbit(int n ,int pos){
//     int mask=~(1<<pos);
//     return (mask&n);
// }
// int updatebit(int n,int pos,int val){
// int mask=~(1<<pos);
// n=n&mask;
// return(n || (val<<pos));
// }

// void primesieve(int n){
//     int priem[100]={0};
//     for(int i=1;i<=n;i++){
//         if(priem[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 priem[i]=1;
//             }
//         }
//     }
// }

// void merge(int arr[],int l ,int mid,int r){
//     int n1=mid-l+1;
//     int n2=r-mid;
//     int a[n1],b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+1+j];
//     }
                                             
//     int i=0;
//     int j=0;
//     int k=l;

//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             k++,i++;
//         }
//         else{
//             arr[k]=b[j];
//             k++,j++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         k++,i++;

//     }
//     while(j<n2){
//         arr[k]=b[j];
//         k++,j++;
//     }

// }
// void mergesort(int arr[],int l ,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }
// void merge(int arr[],int l,int mid ,int r){
//     int n1=mid-l+1;
//     int n2=mid-r;
//     int a[n1],b[n2];
//     for(int i=0;i<n1;i++){
//         a[i]=arr[l+i];
//     }
//     for(int j=0;j<n2;j++){
//         b[j]=arr[mid+1+j];
//     }
//     int i=0,j=0,k=l;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             i++,k++;
//         }
//         else{
//             arr[k]=b[j];
//             j++,k++;
//         }
//     }
//     while(i<n1){
//         arr[k]=a[i];
//         i++,k++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         j++,k++;
//     }
// }
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }

// class node{
// public:
// int data;
// node* next;
// };

// void printL(node* n){
//     while( n!=NULL){
//         cout<<n->data<<" ";
//         n=n->next;
//     }
// }
// bool seqarch(node* &head,int val){
//     node* n=head;
//     while(n!=NULL){
//         if(n->data==val){
//             return true;
//         }
//         n=n->next;

//     }
//     return false;
// }

// void deleteAThead(node* head){
//     node* todelete=head;
//     head=head->next;
//     delete todelete;
// }
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteAThead(head);
//         return;
//     }
//     node* n=head;
//     while(n->next->data!=val){
//         n=n->next;
//     }

//     node* todelete=n->next;
//     n->next=n->next->next;
//     delete todelete;
// }
// node* reverseL(node* &head){
//     node* prevptr=NULL;
//     node* curr=head;
//     node* nextptr;
//     while(curr!=NULL){
//         nextptr=curr->next;
//         curr->next=prevptr;

//         prevptr=curr;
//         curr=nextptr;
//         return prevptr ;
//     }
// }
// node* reverseR(node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node* r=reverseR(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return r;
// }

// node* revereseK(node* &head,int k){
//     node* prevptr=NULL;
//     node* curr=head;
//     node* nextptr;

//     int count=0;
//     while(curr!=NULL && count<k){
//         nextptr=curr->next;
//         curr->next=prevptr;
//         prevptr=curr;
//         curr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=revereseK(nextptr,k);
//     }
//     return prevptr;


// }

// node* reverseK(node* &head,int k){
//     node* prev=NULL;
//     node* curr=head;
//     node* nextptr;
//     int count=0;

//     while(curr!=NULL && count<k){
//         nextptr=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         head->next=reverseK(nextptr,k);

//     }
//     return prev;
// }

// bool detececycle(node* &head){
//     node* fast=head;
//     node*slow=head;
//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }

// void makecycle(node* &head,int pos){
//     int count=1;
//     node* temp=head;
//     node* tail;
//     while(temp->next!=NULL){
//         if(count==pos){
//             tail=temp;
//         }
//         temp=temp->next;
//         count++;
//     }
//     temp->next=tail;

// }

// void removeC(node* &head){
//     node* slow=head;
//     node* fast=head;

//     do{
//         slow=slow->next;
//         fast=fast->next->next;

//     }
//     while(fast!=slow);

//     fast=head;

//     while(fast->next!=slow->next){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     slow->next=NULL;

// }

// class node{
// public:
// int data;
// node* next,*prev;

// node(int val){
//     data=val;
//     next=NULL;
//     prev=NULL;
// }
// };
// void insertAThead(node* &head,int val){
//     node* n=head;
//     node* a=new node(val);
//     a->next=head;
//     if(head!=NULL){
//         head->prev=a;
//     }
//     head=a;
// }
// void insertATtail(node* &head,int val){
//     node* n=new node(val);
//     if(head==NULL){
//         insertAThead(head,val);
//         return;
//     }
//     node* a=head;
//     while(a->next!=NULL){
//         a=a->next;
//     }
//     a->next=n;
//     n->prev=a;
// }

// void deleteAThead(node* &head){
//     node* n=head;
//     head=head->next;
//     head->prev=NULL;
//     delete n;
// }
// void deletionD(node* &head,int pos){
//     if(head==NULL){
//         return;
//     }
//     if(pos==1){
//         deleteAThead(head);
//         return;
//     }
//     node* n=head;
//     int count=1;

//     while(n!=NULL && count!=pos){
        
        
//         n=n->next;
//         count++;
//     }
//     n->prev->next=n->next;
//     if(n->next!=NULL){
//         n->next->prev=n->prev;
//     }
//     delete n;
// }


// class node{
// public:
// int data;
// node* next;
// node(int val){
//     data=val;
//     next=NULL;
// }
// };
// int lenght(node* head){
//     node* n=head;
//     int l=0;
//     while(n!=NULL){
//         n=n->next;
//         l++;
//     }
//     return l;
// }

// node* kappend(node* &head,int k){
//     node* n=head;
//     node* newhead;
//     node* newtail;
//     int count=1;
//     int l=lenght(head);
//     k=k%l;
//     while(n->next!=NULL){
//         if(count==l-k){
//             newtail=n;
//         }
//         if(count==l-k+1){
//             newhead=n;
//         }
//         n=n->next;
//         count++;
//     }
//     newtail->next=NULL;
//     n->next=head;
//     return newhead;

// }

// int intersection(node* &head1,node* &head2){
//     int l1=lenght(head1);
//     int l2=lenght(head2);
//     int d=0;
//     node* ptr1;
//     node* ptr2;
//     if(l1<l2){
//         d=l2-l1;
//         ptr1=head2;
//         ptr2=head1;
//     }
//     else{
//         d=l1-l2;
//         ptr1=head1;
//         ptr2=head2;
//     }
//     while(d){
//         ptr1=ptr1->next;
//         if(ptr1==NULL){
//             return -1;
//         }
//         d--;
//     }
//     while(ptr1!=NULL && ptr2!=NULL){
//         if(ptr1==ptr2)
//         return ptr1->data;

//         ptr1=ptr1->next;
//         ptr2=ptr2->next;
//     }
//     return -1;
// }



// void reversestring(string s){
//     string word="";
//     stack <string> st;

//     for(int i=0;i<s.length();i++){
//     while(s[i]=' ' && s.empty()){
//         word=word+s[i];
//         i++;
//     }
//     st.push(word);
//     }

//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }

//     cout<<endl;

// }
// void insertbottom(stack<int>&st,int ele){
//     if(st.empty()){
//         st.push(ele);
//         return;
//     }
//     int topele=st.top();
//     st.pop();
//     insertbottom(st,ele);
//     st.push(topele);
// }
// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int ele=st.top();
//     st.pop();
//     reverse(st);
//     insertbottom(st,ele);
// }
// class stack{
// public:
// int *arr;
// int top;
// stack(){
//     int *arr=new int [n];
//     top=-1;
// }
// void push(int x){
//     if(top==n-1){
//         cout<<"sttack if full "<<endl;
//         return;
//     }
//     top++;
//     arr[top]=x;
// }
// void pop(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//         return;
//     }
//     top--;
// }
// int top(){
//     return arr[top];
// }

// bool empty(){
//     return top==-1;
// }
// };


// int pefix(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i++){
//         if(s[i]>='0' && s[i]<='9' ){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2=st.top();
//             st.pop();

//             switch (s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;

//                 case '-':
//                 st.push(op1-op2);
//                 break;

//                 case '*':
//                 st.push(op1*op2);
//                 break;

//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;

//             }
//         }

//     }
//     return st.top();
// }

// int postfix(string s){
//     stack<int > st;

//     for(int i=0;i<s.length();i++){


//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op2=st.top();
//             st.pop();
//             int op1=st.top();
//             st.pop();

            
//                 switch (s[i]){
//                 case '+':
//                 st.push(op1+op2);
//                 break;

//                 case '-':
//                 st.push(op1-op2);
//                 break;

//                 case '*':
//                 st.push(op1*op2);
//                 break;

//                 case '^':
//                 st.push(pow(op1,op2));
//                 break;

//             }
            
//         }


//     }
//     return st.top();
// }

// bool isvalid(string s){
//     stack<char> st;
//     bool ans = true;

//     for(int i=0;i<s.length();i++){
//         if(s[i]=='[' || s[i]=='{' || s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(!st.empty() && s[i]==')'){
//             if(st.top()=='('){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]=='}'){
//             if(st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(!st.empty() && s[i]==']'){
//             if(st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans =false;
//                 break;
//             }
//         }

//         if(!st.empty()){
//             ans=false;
//             break;
//         }
//     }
//     return ans;
// }

// #define n 100

// class queue{
// int* arr;
// int front;
// int back;

// public:

// queue(){
//     arr=new int [n];
//     front=-1;
//     back=-1;
// }

// void push(int x){
//     node* a=new node(x);

//     if(back==n-1){
//         cout<<"queue is full "<<endl;
//         return;
//     }
//     arr[back]=x;
//     back++;

//     if(front=-1){
//         front++;
//     }
// }

// void pop(){
//     if(front=-1 || front>back){
//         cout<<"queue is empty"<<endl;
//         return;
//     }
//     front++;
// }

// int top(){
//     if(front==-1 || front>back ){
//         cout<<"queue is empty"<<endl;
//         return;
//     }

//     return arr[front];
// }


// };

// class node{
//     public:
// int data;
// node* left;
// node* right;

// node(int val){
//     data=val;
//     left=NULL;
//     right=NULL;
// }
// };

// void preorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);

// }

// void inorder( node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// void postorder(node* root){
//     if(root==NULL ){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int search(int inorder[],int start, int end ,int curr){
//     for(int i=start;i<end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//         return -1;
//     }
// }
// node* buildtree(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end){
//         return NULL;
//     }
//     int curr=preorder[idx];
//     idx++;
//     node* n=new node(curr);
//     if(start==end){
//         return n;
//     }
//     int pos=search(inorder,start,end,curr);

//     n->left=buildtree(preorder,inorder,start,pos-1);
//     n->right=buildtree(preorder,inorder,pos+1,end);

//     return n;
// }

struct node{
int data;
struct node* left;
struct node*  right;

node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

int search(int inorder[],int start,int end , int curr){
    for(int i=start;i<end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
node* buildtree(int preorder[],int inorder[],int start,int end ){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;

    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(inorder,start,end,curr);

    n->left=buildtree(preorder,inorder,start,pos-1);
    n->right=buildtree(preorder,inorder,pos+1,end);

    return n;

}

void rightview(node* root)
{
    if(root==NULL){
        return;
    }

    queue<node*> q;

    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            node* curr=q.front();
            q.pop();

            if(i==n-1){
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }

        }
    }
}

void leftview(node* root){
    queue<node*>  q;
    q.push(root);

    while(!q.empty()){
        int n=q.size();
       
        for(int i=0;i<n;i++){
             node* curr=q.front();
            q.pop();

            if(i==1){
                cout<<curr->data<<" ";

            }
            if(curr->left!=NULL){
                q.push(curr->left);

            }
            if(curr->right=NULL){
                q.push(curr->right);
            }

        }

    }
}