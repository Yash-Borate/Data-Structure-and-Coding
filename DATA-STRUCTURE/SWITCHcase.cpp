#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "enter the button " << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "hellow" << endl;
        break;

    case 'b':
        cout << "namaste" << endl;
        break;

    case 'c':
        cout << "good morning" << endl;
        break;

    default:
        cout << "enter a proper button" << endl;
    }

    return 0;
}
