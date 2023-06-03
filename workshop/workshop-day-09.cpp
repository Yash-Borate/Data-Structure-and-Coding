#include <iostream>
using namespace std;

// operator overloading

// int main()/
// {
//    int a=10,b=20,c;
//    string  x = "good",y = " morning ! ",z;
//    c=a+b;
//    z=x+y;
//    cout<<" addition = "<<c<<endl;
//    cout<<" string addition = "<<z<<endl;

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------//
// compile time polymorphism :

// class employ{
    
//     int x,c;
//     char y,r;

//     public:
//     void yash(int a , char t){
//         r=t;
//         x=a;
//         cout<<"\t  good morning "<<endl;
//     }
//     void yash(char z,int p){
//         y=z;
//         c=p;
//         cout<<"\t  have a good day "<<endl;
//     }

// };

//  int main(){
//     employ karan;
//     karan.yash(10,'h');
//     karan.yash('a',4);
//      return 0;
//  }
//----------------------------------------------------------------------------------------------------------------------------------------//

// class employ
// {
//     int x;
//     char y;

// public:
//     void yash(int a)
//     {

//         x = a;
//         cout << "\nno value is :  " << x << endl;
//     }
//     void yash(char z)
//     {
//         y = z;

//         cout << "\ncharacter is : " << y << "\n"
//              << endl;
//     }
// };

// int main()
// {
//     employ karan;
//     karan.yash(10);
//     karan.yash('a');
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------//

// virtual keyword using polymorphism



// class student{
// public:
// void yash(){
//     cout<<"good morning "<<endl;
// }
// };
// class employ : public student{
// public:
// void yash(){
//     cout<<"have a good day : "<<endl;
// }
// };
// int main(){
//     employ a;
//     a.yash();

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------//

// using virtual functions area of cylinder and  