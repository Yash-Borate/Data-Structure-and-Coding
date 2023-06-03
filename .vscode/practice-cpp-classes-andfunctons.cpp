#include <iostream>
using namespace std;
#include <string>
//------------------------------------------------------------------------------------------------------//
// oop concept in cpp classes and functions

// use array in class and functions

// class yash{
//     int a;
//     string name;
//     public:
//     void setdata(){
//         cout<<"\n enter the name of student : "<<endl;
//         cin>>name;
//         cout<<"\n enter the age of student : "<<endl;
//         cin>>a;
//     }

// };
// int main()
// {
//    yash ab[3];
//    for(int i=0;i<3;i++){
//        ab[i].setdata();
//    }

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------//

// STRUCTURE FUNCTION :

// struct employ{
//     int a;
//     string name;
//     float salary;

// };

// int main(){
//     struct employ yash;
//     yash.a=10;
//     yash.name="yash";
//     yash.salary=1495.67;
//     cout<<"a="<<yash.a<<endl;
//     cout<<"name="<<yash.name<<endl;
//     cout<<"salary = "<<yash.salary<<endl;
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------//

// function and function prototype :

// int sum(int, int);
// int main()
// {
//     int num1, num2;
//     cout << "enter the num 1=" << endl;
//     cin >> num1;
//     cout << "\n enter the num 2 : " << endl;
//     cin >> num2;
//     sum(num1, num2);
//     return 0;
// }
// int sum(int a, int b)
// {
//     int c = a + b;
//     cout << "addition = " << c;
//     return c;
// }

//--------------------------------------------------------------------------------------------------------------------------------------//

// private , public and protected classes : 

// class employ{
//     int a;
//     string b;
//     public:
//     void setdata(){
//         cout<<"enter the id of employ : "<<endl;
//         cin>>a;
//         cout<<"enter the name of employ : "<<endl;
//         cin>>b;
//     }
//     void printf(){
//         cout<<" id = "<<a<<endl;;
//         cout<<" name = "<<b<<endl;
//     }
// };
// int main(){
//     employ yash;
//     yash.setdata();
//     yash.printf();
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------//

// inheritance  

// int main(){
//     int n=90;
//     int total;
//     while(n>=30){
//         total=0;
//         if(n-2){
//             cout<<n<<" ";
//         }
//         else{
//             total=total+n;
//         }
//         n--;

//     }
//     cout<<"total="<<total<<endl;
//     return 0;
// }

// int getbit(int n,int pos){
//     return((n&(1<<pos))!=0);
// }
// int setbit(int n,int pos){
//     return(n|(1<<pos));
// }
// int clearbit(int n,int pos){
//     int mask=~(1<<pos);
//     return(n&mask);
// }
// int updatebit(int n,int pos,int value){
//     int mask=~(1<<pos);
//     n=n&mask;
//     return(n|(value<<pos));
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    // int counter=1;
    // while(counter<n){
    //     for(int i=0;i<n;i++){
    //         if(arr[i]>arr[i+1]){
    //             int temp=arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    //     counter++;
    // }

    // for(int i=1;i<n;i++){
    //     int curr=arr[i];
    //     int j=i-1;
    //     if(arr[j]>curr && j>=0){
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=curr;
    // }
//    return 0;
// }

// int main(){
//     // int *ptr;
//     // int a=10;
//     // ptr=&a;
//     // cout<<*ptr<<endl;

//     // int a=10;
//     // int *ptr=&a;
//     // cout<<*ptr<<endl;
//     // ptr++;
//     // cout<<*ptr<<endl;

//     int arr[]={1,2,3,4};
//     cout<<*arr<<endl;

  //  return 0;
//}
// void merge(int arr[],int l,int mid,int r ){
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
//     int i=0;int j=0;int k=l;

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
// void mergesort(int arr[],int l,int r){
//     if(l<r){
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);
//         merge(arr,l,mid,r);
//     }
// }
// void swap(int arr[],int i,int j){
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }
// int partition(int arr[],int l,int r){
//     int pivot=arr[r];
//     int i=l-1;
//     for(int j=0;j<r;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr,i,j);
//         }swap(arr,i+1,r);
//         return i+1; 
//     }
// }
// void quicksort(int arr[],int l ,int r){
//     if(l<r){
//         int pi=partition(arr,l,r);
//         quicksort(arr,l,pi-1);
//         quicksort(arr,pi+1,r);
//     }
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
// void display(node* n){
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
// void deletion(node* &head){
//     node* n=head;
//     head=head->next;
//     delete n;
// }
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deletion(head);
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
// node* reverse(node* &head){
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
// node* reverseR(node* &head){
//     if(head==NULL||head->next==NULL){
//         return head;
//     }
//     node* n=reverseR(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return n;
// }

// node* rversek(node* &head,int k)
// {
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
//         head->next=rversek(nextptr,k);
//     }
//     return prev;
// }
// bool detectcycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;

// }

// void makecycle(node* &head,int pos){
//     int count=1;
//     node*nextnode;
//     node* n=head;
//     while(n->next!=NULL){
//         if(count==pos){
//             nextnode=n;
//         }
//         n=n->next;
//         count++;
//     }
//     n->next=nextnode;
// }
// void removalcycle(node* &head){
//     node* slow=head;
//     node* fast=head;
//     do{
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     while(slow!=fast);
//     fast=head;
//     while(fast->next!=slow->next){
//         fast=fast->next;
//         slow=slow->next;
//     }slow->next=NULL;
// }
// class node{
//     public:
//     int data;
//     node* prev;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//         prev=NULL;
//     }
// };
// void insertAthead(node* &head,int val){
//     node* n=new node(val);
//     node* p=head;
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     head=n;

// }
int main(){
int i=1; int j;
while(i<=3){
   
    while(j<=i){
        cout<<j<<" ";
        j=j+1;

    }
    cout<<endl;
    i=i+1;
}
return 0;
}