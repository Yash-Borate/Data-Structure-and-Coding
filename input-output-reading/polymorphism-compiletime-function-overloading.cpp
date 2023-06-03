#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "null function display " << endl;
    }
    void display(int x)
    {
        cout << "int x function function display " << endl;
    }
    void display(double x)
    {
        cout << "double function display " << endl;
    }
};
int main()
{
    base yash;
    yash.display();
    yash.display(5);
    yash.display(7.77);

    return 0;
}
