#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void getdata(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << "your complex no is " << a << " + " << b << " i " << endl;
    }
};
int main()
{
    complex yash, karan, ganesh;
    yash.setdata(2, 4);
    yash.print();

    karan.setdata(3, 5);
    karan.print();

    ganesh.getdata(yash, karan);
    ganesh.print();

    return 0;
}