#include <iostream>
using namespace std;

class Baseclass
{
public:
    int var_base;
     void display()
    {
        cout << "displaying base class variable var_base= " << var_base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_base = " << var_base << endl;
        cout << "displaying derived class variable var_derived = " << var_derived << endl;
    }
};

int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;

    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 10;
    base_class_pointer->display();

    Derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var_base = 20;
    derived_class_pointer->var_derived = 30;

    derived_class_pointer->display();

    return 0;
}
