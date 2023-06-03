#include <iostream>
using namespace std;

class yash
{
    int a, b;

public:
    yash(int, int);
    void display()
    {
        cout << "a and b is :" << a << " , " << b << endl;
    }
};

yash::yash(int x, int y=10)
{
    a = x;
    b = y;
}
int main()
{
    yash z(4);
    z.display();

        return 0;
}