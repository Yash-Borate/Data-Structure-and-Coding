#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
    if(arr[i]<0){
        if(i!=j){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
}

int main(){
    
    int arr[]={-1,4,-3,6,-3};
    int n=sizeof(arr)/sizeof(arr[0]); 
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}