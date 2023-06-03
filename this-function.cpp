#include <iostream>

using namespace std;

class func
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }
    void print()
    {
        cout << "your value of a is =" << a << endl;
    }
};

int main()
{
    func yash;
    yash.setdata(4);
    yash.print();
    return 0;
}
