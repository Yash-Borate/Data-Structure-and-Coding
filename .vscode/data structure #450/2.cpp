#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int MAXno=INT_MIN;
    int MINno=INT_MAX;

    for(int i=0;i<n;i++){
        MAXno=max(MAXno,arr[i]);
        MINno=min(MINno,arr[i]);
    }

    cout<<"max no = "<<MAXno<<endl;
    cout<<"min no = "<<MINno<<endl;
    return 0;

}