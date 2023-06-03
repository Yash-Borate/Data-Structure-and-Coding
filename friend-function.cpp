#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setdata(int j, int k)
    {
        a = j;
        b = k;
    }
    void print()
    {
        cout << "your complex n is : " << a << " + " << b << " i " << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex j, k, l;
    j.setdata(1, 2);
    j.print();

    k.setdata(3, 4);
    k.print();

    l = sumcomplex(j, k);
    l.print();

    return 0;
}