#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void display()
    {
        cout << "your a and b is=" << a << " & " << b << endl;
    }
};

int main()
{
    complex x;
    x.display();

    complex b(5);
    b.display();

    complex c(6, 8);
    c.display();

    return 0;
}