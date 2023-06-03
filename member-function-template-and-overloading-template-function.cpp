#include <iostream>
using namespace std;

template <class T>
class yash{
    public:
    T data;
    yash(T a){
        data=a;
    }
    void display();
};

template<class T>
void yash<T>::display(){
    cout<<data;
}

void func(int a){
    cout<<" i am a good boy "<<a<<endl;
}
template<class Y>
void func(Y a){
    cout<<"you area bad boy"<<a<<endl;
}

int main()
{
   yash <float> a(6.3);
   a.display();

   func(4);
   func<int>(2);


    return 0;
}