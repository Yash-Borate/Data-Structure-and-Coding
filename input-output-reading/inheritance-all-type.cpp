#include<iostream>
using namespace std;
//simple inheritance
class base{
    public:
    void display(){
        cout<<"base class"<<endl;
    }
};

class derived:public base{
    public:
    void print(){
        cout<<"thanks all of you "<<endl;
    }
};

int main(){
    derived yash;
    yash.display();
    yash.print();
        return 0;
}