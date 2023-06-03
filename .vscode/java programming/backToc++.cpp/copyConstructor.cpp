#include<iostream>
using namespace std;

// class student{
// public:
// int id;
// string name;
// student(){

// }
// student(student &s1){
//     this->name=s1.name;
//     this->id=s1.id;
// }
// void display(){
//     cout<<"name : "<<this->name;
//     cout<<"id : "<<this->id;
// }


// };

// int main()
// {   
//     student yash;
//     yash.name="yash";
//     yash.id=11;

//     student s1=yash;
//     s1.display();
    
//     return 0;
// }


class student{
    public:
int id;
string name ;
student(){

}
student(student &s1){
    this->name=s1.name;
    this->id=s1.id;
}
void display(){
    cout<<"name "<<this->name<<endl;
    cout<<"id "<<this->id<<endl;
}
};
int main()
{
    student yash;

    yash.name="ysh borate";
    yash.id=111;

    student y1=yash;
    y1.display();

    return 0;
}
