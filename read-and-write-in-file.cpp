#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
   ofstream out;
   out.open("sample60.txt");

   out<<"hellow world "<<endl;
   out<<"hii , good morning "<<endl;

   out.close();

   ifstream in;
   string st;

   in.open("sample60.txt");

   while(in.eof()==0){
       getline(in,st);
       cout<<st<<endl;
   }


    return 0;
}