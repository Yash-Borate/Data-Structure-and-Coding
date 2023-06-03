#include<iostream>
using namespace std;
#include<stack>

void insertATbottom(stack<int> &st,int ele){

    if(st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertATbottom(st,ele);

    st.push(topele);
}

void reverse(stack<int> &st){
    
    if(st.empty()){
        return;
    }

    int ele=st.top();
    st.pop();
    reverse(st);
    insertATbottom(st,ele);
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;
}