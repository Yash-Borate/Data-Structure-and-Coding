#include <iostream>
using namespace std;

class simple{
    int a,b;
    public:
    simple(int n1 , int n2=4){
        a=n1;
        b=n2;
    }
    void print(){
        cout<<"your value is "<< a <<"and"<< b <<endl;
    }
};

int main()
{
   simple a(4,3);
   a.print();

    return 0;
}