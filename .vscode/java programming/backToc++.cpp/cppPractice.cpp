#include<iostream>
#include<climits>
using namespace std;

class student{
    public:
    int roll_no;
    string name;

    void display(){
        cout<<roll_no<<"\n"<<name<<endl;
    }
    student(string name,int roll_no){
        this->roll_no=roll_no;
        this->name=name;
    }
   
};

class pen{
    
    public:

    int price;
    string name;
    
    void print(){
        cout<<price<<endl<<name<<endl;
    }
};

bool isPrime(int n){
    for(int i=2;i<n;i++)
{
    if(n%i==0){
        return false;
    }
}
return true;
}

void fib(int n){
    int t1=0;
    int nextterm=0;
    int t2=1;
    for(int i=1;i<=n;i++){
        nextterm=t1+t2;
         cout<<t1<<" ";
         t1=t2;
         t2=nextterm;
    }
   
    
}
bool checkPy(int x,int y,int z){
    int a,b,c;
     a=max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a==(b*b+c*c)){
        return true;
    }
    return false;
}

int fact(int n){
    int res=1;
    for(int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main()
{   
    // int n;
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){

    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){

    //     cout<<arr[i]<<" ";
    // }
//-------------------------------------------------------------//

    // int n;
    // cin>>n;
    // bool a=true;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         a=false;
    //     }
    // }

    // if(a==true){
    //     cout<<"a is prime no "<<endl;
    // }
    // else{
    //     cout<<"a is not prime no "<<endl;
    // }
    //=================-------------------============================-//

    // int n;
    // cin>>n;
    // int reverse=0;
    // while(n>0){
    //     int lastdigit=n%10;
    //     reverse=reverse*10+lastdigit;
    //     n/=10;
    // }
    // cout<<"reverse = "<<reverse<<endl;
    
    //===============================================================================//

    // int n;
    // cin>>n;
    // int a=n;

    // int sum=0;
    // while(n>0){
    //     int last=n%10;
    //     sum=sum+(last*last*last);
    //     n/=10;
    // }
    // if(a==sum){
    //     cout<<"armstrong  no "<<endl;
    // }
    // else{
    //     cout<<"not armstrong no "<<endl;
    // }

//==========================================================================//

    // int a,b;
    // cin>>a>>b;
        
    //     for(int i=a;i<=b;i++){
    //         if(isPrime(i)){
    //             cout<<i<<" ";
    //         }
    //     }

    //============================================================================//

    // int a;
    // cin>>a;

    // fib(a);

    //==============================================================================//


    // int n;
    // cin>>n;

    // int result=fact(n);

    // cout<<result;
    
    //=====================================================================================//

    // int n , r;
    // cin>>n>>r;
    

    // int result=fact(n)/((fact(r))*(fact(n-r)));
    // cout<<"factorial : "<<result<<endl;

    //==========================================================================================//

    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    //     }
    //     cout<<endl;
    // }
    //============================================================================================//

    // int x,y,z;
    // cin>>x>>y>>z;

    // if(checkPy(x,y,z)){
    //     cout<<"pythagorian triplet "<<endl;
    // }
    // else{
    //     cout<<"not pythagorian triplet "<<endl;
    // }

    //=========================================================================================//

    // int n;
    // cin>>n;

    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int maxNo=INT_MIN;
    // int minNo=INT_MAX;

    // for(int i=0;i<n;i++){
    //     maxNo=max(maxNo,arr[i]);
    //     minNo=min(minNo,arr[i]);
    // }

    // cout<<"maxNo : "<<maxNo<<" minNo : "<<minNo<<endl;

//======================================================================================================//

    // int n;
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int key;
    // cin>>key;

    // cout<<linearsearch(arr,n,key);

//===============================================================================================//

    // int n;
    // cin>>n;

    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // int key;
    // cin>>key;

    // cout<<binarysearch(arr,n,key)<<endl;
//=================================================================================================//

    // int n;
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             int swap=arr[i];
    //             arr[i]=arr[j];
    //             arr[j]=swap;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //=======================================================================================//

    // int n;
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=1;j<(n-i);j++){
    //         if(arr[j-1]>arr[j]){
    //             int swap=arr[j-1];
    //             arr[j-1]=arr[j];
    //             arr[j]=swap;
    //         }
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

//================================================================================================//
    // int n;
    // cin>>n;

    // char arr[n+1];
    // cin>>arr;

    // bool chk=1;

    // for(int i=0;i<n;i++){
    //     if(arr[i]!=arr[n-1-i]){
    //         chk=0;
    //         break;
    //     }
    // }
    // if(chk==1){
    //     cout<<"palindrome no "<<endl;
    // }
    // else{
    //     cout<<"not palindrome no "<<endl;
    // }
    //=================================================================================//

    // pen yash;

    // yash.name="stylo";
    // yash.price=100;
    // yash.print();
    //==========================================================================//

    // 



    return 0;
}