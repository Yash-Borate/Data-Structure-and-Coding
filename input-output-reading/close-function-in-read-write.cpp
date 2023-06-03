#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("sample60.txt");
    string str;
    cout << "enter your name:" << endl;
    cin >> str;

    out << str + " is your name " << endl;

    // closing function

    out.close();

    ifstream in("sample60.txt");

    string content;

    //when include this file we shows only is your name :

    // in>>content;
    
    getline(in, content);
    cout << "the content of the file is : " << content;

    in.close();

    return 0;
}