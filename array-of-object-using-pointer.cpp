#include <iostream>
using namespace std;

class shopitem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void print()
    {
        cout << "your id of item is = " << id << endl;
        cout << "your price of item is = " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p , i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout << "enter id and price of item" << i + 1 << endl;
        cin >> p >> q;

        ptr->setData(p, q);
        ptr++;
    }

    for ( i = 0; i < size; i++)
    {
        cout << "item no" << i + 1 << endl;
        ptr->print();
        ptrtemp++;
    }

    return 0;
}