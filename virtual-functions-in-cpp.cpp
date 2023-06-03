#include <iostream>
using namespace std;

class base
{
public:
    int a = 1;
    virtual void display()
    {
        cout << "your value of base class function is :" << a << endl;
    }
};

class derived : public base
{
public:
    int b = 2;
    void display()
    {
        cout << "your value of derived class function is:" << b << endl;
    }
};

int main()
{
    base *yash;

    derived *yigesh;
    base karan;
    derived chetan;

    yash = &chetan;
    yash->display();


    yigesh = &chetan;
    yigesh->display();

    return 0;
}