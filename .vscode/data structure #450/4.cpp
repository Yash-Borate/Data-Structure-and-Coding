#include<bits/stdc++.h>
using namespace std;

void sort(int arr[],int n){

    int l=0,m=0,h=n;
    while(m<h){
    
        switch(arr[m]){
            case 0:
            swap(arr[l++],arr[m++]);
            break;
            case 1:
            m++;
            break;

            case 2:
            swap(arr[m],arr[h--]);
            break;
        }
    }
}


int main(){
    int arr[]={1,1,1,0,0,2,0,0,2,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}