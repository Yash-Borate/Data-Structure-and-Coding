#include <iostream>
using namespace std;
class employ
{
    int id;
   
    // static data member
    static int count;

public:
    void setdata();
    void getdata();
    // static function
    static void getcount();
};

// declearation of static data member
int employ::count = 100;

void employ::setdata()
{
    cout << "enter id of employ " << endl;
    cin >> id;
    count++ ;
}

void employ::getdata()
{
    cout << "your id of employ is " << id << "and roll no if employ is" << count << endl;
}

// static function
void employ::getcount()
{    
    cout << " welcome in company " << endl;
   
}

int main()
{
    employ fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setdata();
        fb[i].getdata();

        // static function call
        fb[i].getcount();
    }

    // another way of represent static function is
    // empoly::getcount();

    return 0;
}