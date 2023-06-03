#include<iostream>
using namespace std;

void printarr(int arr1[],int arr2[],int m,int n){
    int i=0,j=0,*k; 
    while(i<m && j<n){
        
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j++]<<" ";
        }
        else{
             k=&j;
            cout<<arr2[j++]<<" ";
            i++;
           
        }
    }
    while(i<m){
        cout<<arr1[i++]<<" ";
    }
    while(j<n){
        cout<<arr2[j++]<<" ";
    }
    cout<<"intersection = "<<*k<<endl;

}


int main(){
    int arr1[]={1,4,5,6};
    int arr2[]={2,3,6};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);

    printarr(arr1,arr2,m,n);
    return 0;
}