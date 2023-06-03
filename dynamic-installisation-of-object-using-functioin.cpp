#include <iostream>
using namespace std;

class bankdeposite
{

    int principle;
    int years;
    float intersretvalue;
    float returnvalue;

public:
    bankdeposite()
    {
    }
    bankdeposite(int p, int y, float r);
    bankdeposite(int, int y, int r);
    void print();
};

bankdeposite ::bankdeposite(int p, int y, float r)
{
    principle = p;
    years = y;
    intersretvalue = r;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + intersretvalue);
    }
}

bankdeposite::bankdeposite(int p, int y, int r)
{
    principle = p;
    years = y;
    intersretvalue = float(r) / 100;
    returnvalue = p;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + intersretvalue);
    }
}

void bankdeposite::print()
{
    cout << "principle amount was " << principle << " return value after " << years << " years is " << returnvalue << endl;
}

int main()
{
    int p;
    int y;
    float r;
    int R;
    bankdeposite b1, b2;
    cout << "enter p , y and r" << endl;
    cin >> p >> y >> r;

    b1 = bankdeposite(p, y, r);
    b1.print();

    cout << "enter p , y and R" << endl;
    cin >> p >> y >> R;

    b2 = bankdeposite(p, y, R);
    b2.print();

    return 0;
}