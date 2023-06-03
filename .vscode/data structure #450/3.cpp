#include<iostream>

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void klargest(int arr[],int n,int k){
    cout<<"klargest : "<<endl;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
void ksmallest(int arr[],int n,int k){
    cout<<"ksmallest :"<<endl;
    sort(arr,arr+n);
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    klargest(arr,n,k);
    ksmallest(arr,n,k);
    return 0;
}