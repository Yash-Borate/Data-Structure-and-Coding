#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={34,6,23,78,4,3,23,65,43};

    sort(arr,arr+9);
    for(auto &i : arr){
        cout<<i<<" ";
    }
    return 0;
}