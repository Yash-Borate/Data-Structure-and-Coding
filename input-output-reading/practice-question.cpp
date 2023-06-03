#include <iostream>
#include<fstream>
#include<string>
using namespace std;

// int main()
// {

//---------- COLLEGE  ASSIGNMENT ,  READ  AND  WRITE  IN  FILE  -------------------------------------------------------------------------//
//    string s;
//    int id;
//    float salary;
//    ofstream out("sample211.txt");
//    int n;
//    cout<<"enter the size of array = "<<endl;
//    cin>>n;

//    for(int i=0;i<n;i++){
//        cout<<"\n enter name of employ : "<<endl;
//        cin>>s;
//        out<<s;
//        cout<<"\n enter the id of employ is : "<<endl;
//        cin>>id;
//        out<<id;

//        cout<<"\n salary of employ is : "<<endl;
//        cin>>salary;
//        out<<salary; 

//           }

//     out.close();
//     ifstream in("sample211.txt");
//     for(int i=0;i<n;i++){
        
//         in>>s;
//         cout<<"\n name of employ is : "<<s<<endl;
//         in>>id;
//         cout<<"\n id of employ is : "<< id <<endl;
//         in>>salary;
//         cout<<"\n salary of employ is :"<<salary<<endl;
//     }
//     in.close();




//     return 0;
// }


//-----------------------------------PRACTICE QUESTION ON TEMPLATE-------------------------------------------------------------------------------//

// template<class T1, class T2>

// class myclass{
//     T1 a;
//     T2 b;
//     public:
//     myclass(T1 A,T2 B){
//         a=A;
//         b=B;
//     }
//     void print(){
//         cout<<this->a<<endl;
//         cout<<this->b<<endl;
//     }
// };
// int main(){
//     // myclass<int , float> yash(4,1.11);

//     myclass<char,string>yash('a',"yash is a good boy ");

//     yash.print();
// RETURN 0;
 // }

//----------------------------------    DEFAULT TEMPLATE   ----------------------------------------------------------------------------//

template<class T1=int , class T2 =float>

class yash{

    T1 a;
    T2 b;
    public:
    yash(T1 x , T2 y ){
        a=x;
        b=y;

    }
    void display(){
        cout<<this->a<<" is your value of a "<<endl;
        cout<<this->b<<" is your value of b "<<endl;
    }

};

int main(){

    yash <int , char> obj(4 , 'h');
    obj.display();

    yash<> obj1(3 , 8.9);
    obj1.display();

    yash<string,char> obj2("yash ",'y');
    obj2.display();

    return 0;
}