#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream is used for write in file:
    ofstream out("this.txt");
    string sy = "yash";
    out << sy;

    // ifstream is used for read file :
    ifstream in("this.txt");
    string sy;
    in >> sy;

    return 0;
}