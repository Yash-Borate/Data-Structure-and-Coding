#include <iostream>
using namespace std;

class complex
{
    int real, imaganery;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaganery = b;
    }

    void display()
    {
        cout << "your real data is:" << real << endl;
        cout << "your imagenary data is:" << imaganery << endl;
    }
};

int main()
{
    // complex *ptr = new complex;
    // (*ptr).setdata(2, 4);
    // (*ptr).display();

    complex *ptr = new complex;
    ptr->setdata(4, 5);
    ptr->display();

    return 0;
}