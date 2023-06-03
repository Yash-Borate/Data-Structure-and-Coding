#include <iostream>
using namespace std;

template <class T1, class T2>

class obj
{
    T1 a;
    T2 b;

public:
    obj(T1 A, T2 B)
    {
        a = A;
        b = B;
    }
    void display()
    {
        cout << this->a << endl;
        cout << this->b << endl;
    }
};

int main()
{
    //DIFFERENT CALLS OF TEMPPLATE FUNCTION

    // obj<int, string> yash(10 , "yash");
    // yash.display();

    // obj<float,char> yash(1.1 ,'s');
    // yash.display();

    // obj<char,string>yash('y',"yash");
    // yash.display();

    return 0;
}