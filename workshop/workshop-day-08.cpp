#include <iostream>
#include<climits>
#include<cmath>
#include <string.h>
#include <string>
using namespace std;

//========================================= class function ====================================================//
// enter the info of student using function :

// class student{

//     char name[20];
//     int rollno;
//     public:
//     void setdata();
//     void getdata();
// };
// void student::setdata(){
//     cout<<"enter the name of student :"<<endl;
//     cin>>name;
//     cout<<"enter then roll no of student :"<<endl;
//     cin>>rollno;
// }
// void student::getdata(){
//     cout<<"\n name of student : "<<name<<endl;
//     cout<<"\n roll no of student : "<<rollno<<endl;
// }

// int main()
// {
//    student yash;
//    yash.setdata();
//    yash.getdata();

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------//
// call by value

// class employ{
//     char name[20];
//     int a;
//     public:

//     void setdata(char na[20],int b){
//         strcpy(name,na);

//         a=b;
//     }
//     void getdata(){
//         cout<<"name = "<<name<<endl;
//         cout<<"rollno = "<<a<<endl;
//     }
// };

//  int main(){

//     employ yash;
//      yash.setdata("yash",211);
//      yash.getdata();

//      return 0;
//  }

//-------------------------------------------------------------------------------------------------//

// accept three subject marks and print percentage

// class student{

//     int a,b,c,d,e;
//     int total;
//     float percentage;
//     public:

//     void setdata();
//     void getdata();
// };
// void student::setdata(){
//     cout<<"\n enter the five subject marks :"<<endl;
//     cin>>a>>b>>c>>d>>e;
//     total=a+b+c+d+e;
//     percentage=total/5;

// }
// void student::getdata(){
//     cout<<"total = "<<total<<endl;
//     cout<<"percentage = "<<percentage<<endl;
// }

// int main()
// {
//    student yash;
//    yash.setdata();
//    yash.getdata();

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------//
//=========================== object ==- class == function  ==============================================================//

// class student
// {
//     string name;
//     int rollno;
//     int a, b, c;

// public:
//     int total;
//     float percentage;
//     void setdata(string ab, int x, int q, int w, int r)
//     {
//         name = ab;
//         rollno = x;
//         a = q;
//         b = w;
//         c = r;
//         total = a + b + c;
//         percentage = total / 3;
//     }

//     void getresult()
//     {
//         cout << "name =" << name << endl;
//         cout << "rollno = " << rollno << endl;
//         cout << "total = " << total << endl;
//         cout << "percentage = " << percentage << endl;
//     }
// };

// int main()
// {
//     student yash;
//     yash.setdata("tash", 211, 60, 70, 80);
//     yash.getresult();

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------//

// employ , find ta , da , basic salary , gross salary

// class employ {
//     string name;
//     float  salary,basicsalary;
//     int roll,ta,da;
//     public:
//     void getdata(){

//         cout<<"\n enter the name : ";
//         cin>>name;
//         cout<<"\n salary ";
//         cin>>salary;
//         ta=(salary*10)/100;
//         da=(salary*12)/100;
//         basicsalary=salary-(ta+da);
//     }
//     void printf(){
//         cout<<"name= "<<name<<endl;
//         cout<<"salary = "<<salary<<endl;
//         cout<<"ta = "<<ta<<endl;
//         cout<<"da = "<<da<<endl;
//         cout<<"basicsalary = "<<basicsalary<<endl;
//     }

// };

// int main(){

//     employ yash;
//     yash.getdata();
//     yash.printf();
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------------//
// box , find height , width and depth

// class box{
//     float height,width,dept;
//     float vloume;

//     public:
//     void getdimension(){
//         cout<<"enter height : "<<endl;
//         cin>>height;
//         cout<<"\n enter width : "<<endl;
//         cin>>width;
//         cout<<"\n enter dept : "<<endl;
//         cin>>dept;
//         vloume=height*dept*width;
//     }
//     void volume(){
//         cout<<"height = "<<height<<endl;
//         cout<<"width = "<<width<<endl;
//         cout<<"depth = "<<dept<<endl;
//         cout<<"volume of cube  = "<<vloume<<endl;

//     }

// };
// int main(){
//     box yash;
//     yash.getdimension();
//     yash.volume();
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------------------------------//
//====================================== int heritance ==================================================================================//
// single inheritance :

// class a

// {
// public:
//     int a, bx;
//     void set()
//     {
//         cout << "\n enter the value of a : ";
//         cin >> a;
//         cout << "\n enter the value of b : ";
//         cin >> bx;
//     }
// };
// class b : public a
// {

// public:
//     void setdata()
//     {
//         int z = a + bx;
//         cout << "addititon = " << z << endl;
//     }
// };
// int main()
// {
//     b yash;
//     yash.set();
//     yash.setdata();

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------//

//  implement the following , product name and product id == weight and price :

// class pro{
//     protected:

//     int id ;
//     string name;
//     public:
//     void product(){
//         cout<<"enter the  product id and name : "<<endl;
//         cin>>id >>name;
//     }
// };

// class info {
//     protected:
//     float weight,price;
//     public:
//     void inf(){
//         cout<<"\n emter the  weight of product : "<<endl;
//         cin>>weight;
//         cout<<"\n enter the price of product : "<<endl;
//         cin>>price;
//     }
// };
// class display : public pro , public info{

//     public:
//     void printf(){
//         cout<<"id of product : "<<id <<endl;
//         cout<<"name of product : "<<name<<endl;
//         cout<<"weight of product : "<<weight<<endl;
//         cout<<"price of product : "<<price <<endl;
//     }
// };

// int main(){
//     display y;
//     y.product();
//     y.inf();
//     y.printf();
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------//
// multipal inheritance

// class a

// {
// protected:
//     int a;

// public:
//     void set()
//     {
//         cout << "\n enter the value of a : ";
//         cin >> a;
//     }
// };
// class b
// {
// protected:
//     int bx;

// public:
//     void setdata()
//     {

//         cout << "\n enter the value of b : ";
//         cin >> bx;
//     }
// };
// class total : public a, public b
// {

// public:
//     void tot()
//     {

//         int z = a + bx;
//         cout << "\n addititon = " << z << endl;
//     }
// };
// int main()
// {
//     total yash;
//     yash.set();
//     yash.setdata();
//     yash.tot();

//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------//

//  multilevel inheritance
// class a

// {
// public:
//     int a;


//     void set()
//     {
//         cout << "\n enter the value of a : ";
//         cin >> a;
//     }
// };
// class b : public a
// {
// protected:
//     int bx;

// public:
//     void setdata()
//     {

//         cout << "\n enter the value of b : ";
//         cin >> bx;
//     }
// };
// class total :  public b
// {

// public:
//     void tot()
//     {

//         int z = a + bx;
//         cout << "\n addititon = " << z << endl;
//     }
// };
// int main()
// {
//     total yash;
//     yash.set();
//     yash.setdata();
//     yash.tot();

//     return 0;
// }


//---------------------------------------------------------------------------------------------------------------------------------------------//
// enter no and calculate power

// class n{
//     protected:
//     int a;
//     public:
//     void setdata(){
//         cout<<"\n enter the no "<<endl;
//         cin>>a;
//     }
// };

// class b:public n{
//     protected:
//     int b;
//     public:
//     void power(){
//         cout<<"enter the power : "<<endl;
//         cin>>b;
//         int ans=pow(a,b);
//         cout<<"power : "<<ans<<endl;      
//     }

// };

// int main(){
//     b yash;
//     yash.setdata();
//     yash.power();

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

//    print square of no , cube of no , positive and negative no 


// class n{
//     public:
//     int a;
    
//     void setdata(){
//         cout<<"\n enter the no "<<endl;
//         cin>>a;
//     }
// };

// class b:public n{
//     public:
//     int b;
    
//     void power(){
//         cout<<"enter the power : "<<endl;
//         cin>>b;
//         int ans=pow(a,3);
//         cout<<"cube  : "<<ans<<endl;
//         int sq=pow(a,2);
//         cout<<"square = "<<sq<<endl;      
//     }

// };

// class check{

//     public:
//     int z;
//     void chk(){
//         cout<<"enter the no : "<<endl;
//         cin>>z;
//         if(z%2==0){
//             cout<<"even no : "<<endl;
//         }
//         else{
//             cout<<"odd no : "<<endl;
//         }
//     }
    
// };
// class yash : public n,public check{
    

// };

// int main(){
//     check  yash;
//     yash.setdata();
//     yash.

//     return 0;
// }
