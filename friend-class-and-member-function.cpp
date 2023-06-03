#include <iostream>
using namespace std;

class complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumcompcomplex(complex, complex);
    int sumrealcomplex(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator::sumcompcomplex(complex, complex);
    friend int calculator::sumrealcomplex(complex, complex);

    // for making class friend
    //friend class calculator;

public:
    void setdata(int l, int m)
    {
        a = l;
        b = m;
    }
    void print()
    {
        cout << "your complex no is :" << a << " + " << b << " i " << endl;
    }
};

int calculator::sumcompcomplex(complex o1, complex o2)
{
    return ((o1.a + o2.a));
}
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return ((o1.b + o2.b));
}

int main()
{
    complex x, y;
    x.setdata(3, 4);
    x.print();

    y.setdata(5, 6);
    y.print();

    calculator yash;

    int asn = yash.sumcompcomplex(x, y);
    cout << asn << endl;

    int sol = yash.sumrealcomplex(x, y);
    cout << sol << endl;

    return 0;
}