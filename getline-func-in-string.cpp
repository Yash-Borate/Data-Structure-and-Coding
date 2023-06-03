#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // this stream is for read file:
    string st;
    ifstream in("this . txt");
    in >> st;
    getline(in, st);
    cout << st;

    return 0;
}