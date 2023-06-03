#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    complex();

    void print()
    {
        cout << "your no is : " << a << " + " << b << " i " << endl;
    }
};

complex ::complex()
{
    a = 10;
    b = 20;
}

int main()
{
    complex x;
    x.print();
    

    return 0;
}