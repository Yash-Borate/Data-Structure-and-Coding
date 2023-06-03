#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_front();

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}