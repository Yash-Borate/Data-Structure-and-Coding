#include<iostream>
#include<queue>

using namespace std;

class stack{
int n;
queue<int> q1;
queue<int> q2;
public:

stack(){
    n=0;
}

// METHODE 1 : MAKING PUSH OPERATION COSTLY :

// void push(int val){
//     q2.push(val);
//     n++;
//     while(!q1.empty()){
//         q2.push(q1.front());
//         q1.pop();
//     }
//     queue<int>temp=q1;
//     q1=q2;
//     q2=temp;
// }
// void pop(){
//     q1.pop();
//     n--;
// }
// int top(){
//     return q1.front();
// }
// int size(){
//     return n;
// }

// METHODE 2 : MAKING POP OPERATION COSTLY 

void push(int val){
    q1.push(val);
    n++;
}

void pop(){
    if(q1.empty()){
        return;
    }
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    n--;

    queue<int> temp=q1;
    q1=q2;
    q2=temp;
}
int top(){
    if(q1.empty()){
        return -1;
    }
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    int ans=q1.front();
    q2.push(ans);
    queue<int> temp=q1;
    q1=q2;
    q2=temp;

    return ans;
}

int size(){
    return n;
}

};


int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;

    cout<<st.size()<<endl;

    return 0;
}