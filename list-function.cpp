#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;

    list1.push_back(10);
    list1.push_back(80);
    list1.push_back(30);
    list1.push_back(90);
    list1.push_back(70);
    list1.push_front(67);

    display(list1);

    list<int> list2(3);
    list<int>::iterator it=list2.begin();
    *it=10;
    it++;
    *it=20;
    it++;
    *it=30;
    it++;

    display(list2);

    list1.pop_back();
    list2.pop_front();

    list1.remove(30);

    display(list1);
    list1.sort();
    display(list1);
    
    return 0;
}