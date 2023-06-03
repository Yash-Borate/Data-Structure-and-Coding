#include <iostream>
using namespace std;
#include <string>

template <class T1 = int, class T2 = float>

class yash
{
    T1 a;
    T2 b;

public:
    yash(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "value of a is = " << this->a << endl;
        cout << "value of b is = " << this->b << endl;
    }
};

int main()
{
    yash<> obj(4, 7.8);
    obj.display();

    yash<int, char> w(5, 'S');
    w.display();

    yash<string, int> z("yash", 7);
    z.display();

    return 0;
}