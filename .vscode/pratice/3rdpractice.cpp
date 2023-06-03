#include<bits/stdc++.h>

using namespace std;
// // class yash{
// // int id;
// // string s;
// // public:
// // void get(){
// //     cout<<"enter the name of employ : "<<endl;
// //     cin>>s;
// //     cout<<"enter the id of employ : "<<endl;
// //     cin>>id;
// // }
// // void  print(){
// //     cout<<"name of employ is : "<<s<<endl;
// //     cout<<"id of employ is :"<<id<<endl;
// // }
// // };
// // int main(){
// //     yash a[4];
// //     for(int i=0;i<4;i++){
// //         a[i].get();
// //         a[i].print();
// //     }
// //     return 0;
// // }
// //-------------------------------------------------------------------------------------------------------------//

// // class Complex{
// // int a;
// // int b;
// // public:
// // void setdata(int v1,int v2){
// //     a=v1;
// //     b=v2;
// // }
// // void get(Complex o1,Complex o2){
// //     a=o1.a+o2.a;
// //     b=o1.b+o2.b;
// // }
// // void display(){
// //     cout<<"a + bi ="<<a<<" + "<<b<<"I"<<endl;
// // }
// // };
// // int main(){
// //     Complex a,b,c;
// //     a.setdata(1,2);
// //     a.display();
// //     b.setdata(3,4);
// //     b.display();
// //     c.get(a,b);
// //     c.display();
// //     return 0;
// //

// int main(){
    
//     ofstream out("sample60.txt");
//     // string st="yash borate";
//     // out<<st;

//     // out.close();

//     // ifstream in("sample60.txt");
//     // string content;
//     // in>>content;
//     // cout<<"your content is "<<content;

//     // in.close();

//     out.open("sample60.txt");
//     out<<"this is me ";
//     out<<"this is also me ";
//     out.close();

//     return 0;
// }

// struct node{
//     int data;
//     struct node*left;
//     struct node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void preorder(struct node* root){
//     if(root==NULL){return;}
//     cout<<root->data;
//     preorder(root->left);
//     preorder(root->right);
// }
// void inorder(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data;
//     inorder(root->right);
// }
// void postorder(struct node* root){
//     if(root==NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data;
// }
// void levelorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     queue<node*>q;
//     q.push(root);
//     q.pop();
//     while(!q.empty()){
//         node* n= q.front();
//         q.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
        
//         if(n->left){
//             q.push(n->left);
//         }
//         if(n->right){
//             q.push(n->right);
//         }

//     }
//     else if(!q.empty()){
//         q.push(NULL);
//     }
//     }
// }
class node{
int id;
vector<vector<int>> y;
string name;
friend class hashing;
public:
node(){
    id=0;
}
};
class hashing{
    int i,idx;
    vector<vector<int>> x;
    node data[10];
    string n;
    public:
    void set_data(int size){
        cout<<"enter the id : ";
        cin>>i;
        cout<<"enter the name : ";
        cin>>n;
        idx=i%size;
        for(int a=0;a<size;a++){
            if(data[idx].id==0 ){
                data[idx].id=i;
                data[idx].name=n;
                
                break;

            }
            else{
                cout<<"\n collosion occur "<<endl;
                idx=(idx+1)%size;
            }

        }
    }
    void search(int size){
        int idx1,key,flag=0;
        cout<<"\n enter the id key to search ";
        cin>>key;
        idx1=key%size;
        for(int i=0;i<size;i++){
            if(data[idx1].id==key){
                flag=1;
                cout<<"\n key is found"<<endl;
                cout<<"\n id : "<<data[idx1].id<<endl;
                cout<<"\n name of user : "<<data[idx1].name<<endl;
                break;
            }
            else{
                cout<<"collion occures in hash table "<<endl;
                idx1=(idx1+1)%size;
            }
        }
        if(flag==0){
            cout<<"\n key is not found "<<endl;
        }
    }
    void display(int size){
        cout<<"\n\t id \t name ";
        for(int i=0;i,size;i++){
            if(data[i].id!=0){
                cout<<"\n\t"<<data[i].id<<"\t"<<data[i].name<<endl;
            }
        }
    }
    void deleteE(int size){
    int idx2,key,flag=0;
    idx2=key%size;
    for(int i=0;i<size;i++){
        if(data[i].id==key){
            flag=1;
            data[i].id=0;
            data[i].name="";
            
            break;
        }
        else{
            cout<<"\n collosion occure in the program : "<<endl;
            idx2=(idx2+1)%size;
        }
    }
    if(flag==0){
        cout<<"\n element not deleted , please enter the correct id : "<<endl;
    }
}
};
int main(){
    hashing a;
    int size,ch;
  
    size=20;

    do{
        cout<<"\n 1.create \n 2.search \n 3.display \n 4.delete \n 5.exit "<<endl;
        cout<<"\n enter the choice : "<<endl;
        cin>>ch;

        switch(ch){
            case 1 :
            a.set_data(size);
            break;
            case 2 :
            a.search(size);
            break;
            case 3:
            a.display(size);
            break;
            case 4:
            a.deleteE(size);
            break;
            case 5 :
            exit(0);
            

        }
    }
    while(ch!=5);


    return 0;
}
