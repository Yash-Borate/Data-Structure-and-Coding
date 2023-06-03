#include<iostream>
using namespace std;

int main(){

    int *ptr;
    int a=10;
    ptr=&a;

    cout<<*ptr<<endl;
    int **q=&ptr;
    
    cout<<*q<<endl;

    return 0;
}