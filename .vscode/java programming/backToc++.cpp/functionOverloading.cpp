#include<iostream>
using namespace std;
class student{
  public  :
  int id ;
  string name;
    
    void display(int id){
        cout<<this->id<<endl;;
    }
    void display(string name){
        cout<<this->name<<endl;
    }
    void display(string name,int id){
        cout<<this->name<<"\n"<<this->id<<endl;
    }
};

int main()
{
    student yash;

    yash.id=1111;
    yash.name="yash";

    yash.display(yash.id);
    yash.display(yash.name);
    yash.display(yash.name , yash.id);


    return 0;
}