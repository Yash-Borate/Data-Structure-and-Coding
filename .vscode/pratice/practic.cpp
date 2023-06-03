#include <iostream>

#include <cmath>
using namespace std;

// int main()
// {
// find reverse no

// int n;
// cout<<"\n enter the no : ";
// cin>>n;
// int reverse=0;
// while(n>0){
//     int lastdigit=n%10;
//     reverse = reverse*10 +lastdigit;
//     n=n/10;
// }
// cout<<reverse<<endl;

// armstrong no

//    int n;
//    cout<<"enter the no : "<<endl;
//    cin>>n;
//    int sum=0;
//    while(n>0){
//        int last=n%10;
//        sum = sum + pow(last,3);
//        n=n/10;
//    }
//    if(n == sum){
//        cout<<"your no is armstrong "<<endl;
//    }
//    else{
//        cout<<"not armstrong no "<<endl;
//    }

//    return 0;
// }
// -------------------------------------------------------------------------------------//

// if else

// int main(){

//      int a,b,c;
//      cout<<" enter the three no "<<endl;
//      cin>>a>>b>>c;
//      if(a>b  ){
//          if(a>c){
//          cout<<"a is  grreater ";}
//          else{
//              cout<<"c is greater "<<endl;
//          }

//      }
//      else if(b>a ){
//          if(b>c){
//          cout<<"b is greater "<<endl;}
//          else{
//              cout<<" c is greatest "<<endl;
//          }
//      }
//      else{
//          cout<<" all are equal  ";
//      }
//      return 0;
//  }

// enter 6 sub marks and calculate the total and percentage , find grade

// int main(){
//     int a,b,c,d,e,f,total,per;
//     cout<<"enter the six subject marks : ";
//     cin>>a>>b>>c>>d>>e>>f;
//     total=a+b+c+d+e+f;
//     per=total/6;
//     if(per>=80 && per<=100){
//         cout<<"A++"<<endl;
//     }
//     else if(per<=79 && per>=60){
//         cout<<"B++"<<endl;
//     }
//     else if(per>=40 && per<=59){
//         cout<<"C "<<endl;
//     }
//     else if(per<=39 && per>=0){
//         cout<<"D"<<endl;
//         if(per<35){
//             cout<<"fail"<<endl;
//             }
//     }
//     else{
//         cout<<"enter the correct marks "<<endl;
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------//

// int main(){
//     char w;
//     cout<<"\n entre a character : "<<endl;
//     cin>>w;
//     if(w>='0' && w<='9'){
//         cout<<" digit "<<endl;
//     }
//     else if((w>='a' && w<='z') || ( w>='A' && w<='Z')){
//         if(w>='a' && w<='z'){
//             cout<<"alphabate is lower case "<<endl;
//         }
//         else{
//             cout<<"alphabate if upper case "<<endl;
//         }
//     }
//     else{
//         cout<<"it is a special no or special character "<<endl;
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------//
// print 30 - 90 reverse order even no only and add odd no only

// int main(){
//     int a=90;
//     int b=0;
//     int total=0;
//     while (a>=30)
//     {
//         if(a%2==0){
//             cout<<a<<endl;

//         }

//         else{

//             total=total+a;

//            }
//            a--;
//     }
//     cout<<" total = "<<total;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------//

// find factorial

// int main(){

//     int fact=1;
//     int a,b=1;
//     cout<<"enter the value of a : ";
//     cin>>a;
//     while(b<=a){
//         fact=fact*b;
//         b++;
//     }
//     cout<<"fact = "<<fact<<endl;

// }

// ---------------------------------------------------------------------------//

// bool yash(int a)
// {
//     for (int i = 2; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             return false;
//         }
//         return true;
//     }
// }

// int main()
// {
//     int a, b;
//     cout << "enter a and b : ";
//     cin >> a >> b;
//     for (int i = a; i <= b; i++)
//     {
//         if (yash(i))
//         {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------------//

// single inheritance
// class complex{
//     protected:
//     int a,b;
//     public:
//     void setdata(int c, int d){
//         a=c;
//         b=d;
//     }
// };
// class no:public complex{
//     public:
//     void printf(){
//         cout<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// int main(){
//     no yash;
//     yash.setdata(4,6);
//     yash.printf();
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------------//

// multiple inheritance

// class student{

//     public:
//     int total;
//     void set(){
//         int a,b;
//         cout<<"enter the marks of two subject : "<<endl;
//         cin>>a>>b;
//         total=a+b;
//     }
// };
// class sports{
//     public:
//     int grade;
//     void get(){
//         int z;
//         cout<<" enter the marks of sports : "<<endl;
//         cin>>z;
//         grade=z;
//     }
// };
// class tot:public student , public sports{

//     public:

//     void display(){
//         cout<<" total marks of subjects : "<<total<<endl;
//         cout<<" sport grade : "<<grade<<endl;
//     }
// };
// int main()
// {
//     tot yash;
//     yash.set();
//     yash.get();
//     yash.display();
//     return 0;

// }

// --------------------------------------------------------------------------------------------------------------------------------------//

// multilevel inheritance :

// class product{
//   public:
//     string a,b;
//     void getname(){
//         cout<<"\nenter the 1st product name : "<<endl;
//         cin>>a;
//         cout<<"\nenter the 2nd product name : "<<endl;
//         cin>>b;
//     }
// };
// class price:public product{
//     protected:
//     int c,d;
//     public:
//     void getprice(){
//         cout<<"\nenter the product 1 price : "<<endl;
//         cin>>c;
//         cout<<"\nenter the product 2 price : "<<endl;
//         cin>>d;
//     }
// };
// class total:public price{
//     int total;
//     public:
//     void bill(){
//         cout<<"\nproduct 1st name : "<<a<<endl;
//         cout<<"\nproduct 2nd name : "<<b<<endl;
//         cout<<"\nproduct 1st price : "<<c<<endl;
//         cout<<"\nproduct 2nd price : "<<d<<endl;
//         cout<<"\ntotal price of product : "<<c+d<<endl;
//         cout<<"\n-----------thank you for visiting our shop--------- "<<endl;
//     }
// };
// int main(){
//     total yash;
//     yash.getname();
//     yash.getprice();
//     yash.bill();
//     cout<<endl;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------------------------//

// hybride inheritance :

// class complex{
//     protected:
//     int a,b;
//     public:
//     void setdata(int c, int d){
//         a=c;
//         b=d;
//     }
// };
// class no:public complex{
//     public:
//     void printf(){
//         cout<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// class product{
//   public:
//     string a,b;
//     void getname(){
//         cout<<"\nenter the 1st product name : "<<endl;
//         cin>>a;
//         cout<<"\nenter the 2nd product name : "<<endl;
//         cin>>b;
//     }
// };
// class price:public product{
//     protected:
//     int c,d;
//     public:
//     void getprice(){
//         cout<<"\nenter the product 1 price : "<<endl;
//         cin>>c;
//         cout<<"\nenter the product 2 price : "<<endl;
//         cin>>d;
//     }
// };
// class total:public price{
//     int total;
//     public:
//     void bill(){
//         cout<<"\nproduct 1st name : "<<a<<endl;
//         cout<<"\nproduct 2nd name : "<<b<<endl;
//         cout<<"\nproduct 1st price : "<<c<<endl;
//         cout<<"\nproduct 2nd price : "<<d<<endl;
//         cout<<"\ntotal price of product : "<<c+d<<endl;
//         cout<<"\n-----------thank you for visiting our shop--------- "<<endl;
//     }
// };
// class result:public no , public total{
//     public:
// };

// int main(){
//     result yash;
//     yash.setdata(4,6);
//     yash.printf();
//     yash.getname();
//     yash.getprice();
//     yash.bill();
//     cout<<endl;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------------//
// POLYMORPHISM :

// -----------------------------------------------------------------------------------------------------------------------------------------//
// function overloading :
// class obj{
// public:
//     void set(){
//         cout<<" : good morning : "<<endl;
//     }
//     void set(int e){
//         cout<<"have a good day : "<<endl;
//     }
//     void set(char a){
//         cout<<"fuck you"<<endl;
//     }
// };
// int main(){
//     obj yash;
//     yash.set();
//     yash.set(5);
//     yash.set('g');
//     return 0;
// }

// -----------------------------------------------------------------------------------------------------------------------------------//

// static data member and functions :

// class func{
// // static data member :
// static int count;
// int id;
// public:
// void set(){
//     cout<<"enter the id of employ : "<<endl;
//     cin>>id;
//     count++;
// }
// void print(){
//     cout<<"id of employ is : "<<id<<endl;
//     cout<<"employ no : "<<count<<endl;
// }
// static void pprint(){
//     cout<<"helloe"<<endl;
// }

// };
// //declearation of static data member :
// int func::count=100;
// int main(){
//     func employ[3];
//     for(int i=0;i<3;i++){
//         employ[i].set();
//         employ[i].print();
//     }
//     func::pprint();
//     return 0;
// }

// pssing object as a function :
//  class complex{
//      int a;
//      int b;
//      public:
//      void set(int v1 , int v2){
//          a=v1;
//          b=v2;
//      }
//      void get(complex o1,complex o2){
//          a=o1.a+o2.a;
//          b=o1.b+o2.b;
//      }
//      void print(){
//          cout<<"complex no is : "<<a<<" + "<<b<<" i "<<endl;
//      }
//  };
//  int main(){
//      complex yash,karan,A;
//      yash.set(3,5);
//      yash.print();
//      karan.set(4,6);
//      karan.print();
//      A.get(yash,karan);
//      A.print();
//      return 0;
//  }

// ----------------------------------------------------------------------------------------------------------------------------------------//

// friend function :

// class complex{
// int a,b;
// friend complex classcomplex(complex o1,complex o2);
// public:
// void set(int x,int y){
//     a=x;
//     b=y;
//     }
// void print(){
//     cout<<"complex no is : "<<a<<" + "<<b<<" i "<<endl;
// }
// };
// complex classcomplex(complex o1,complex o2){
//     complex o3;
//     o3.set((o1.a+o2.a),(o1.b+o2.b));
//         return o3;
// }
// int main(){
//     complex e,r,sum;
//     e.set(4,5);
//     e.print();
//     r.set(2,3);
//     r.print();

//     sum= classcomplex(e,r);
//     sum.print();
//         return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------//
// friend classes and member friend function :

// class complex;

// class calculator{

// public:

// int add(int a, int b) {
//     return (a+b);
// }

// int sumcompcompplex(complex , complex );
// int sumrealcomplex(complex , complex );

// };
// class complex{
// int a,b;

// friend int calculator :: sumcompcompplex(complex , complex );
// friend int calculator :: sumrealcomplex(complex , complex );

// public:

// void setdata(int v1 , int v2){
//     a=v1;
//     b=v2;
// }
// void print(){
//     cout<<"your complex no is : "<<a<<" + "<<b<<" i "<<endl;
// }
// };
// int calculator::sumcompcompplex(complex o1,complex o2){
//     return (o1.a+o2.a);
// }
// int calculator ::sumrealcomplex(complex o1, complex o2){
//     return(o1.b+o2.b);
// }
// int main(){
//     complex x,y;
//     x.setdata(2,4);
//     x.print();

//     y.setdata(5,6);
//     y.print();

//     calculator yash;
//     int ans=yash.sumrealcomplex(x,y);
//     cout<<ans<<endl;
//     int sum=yash.sumcompcompplex(x,y);
//     cout<<sum<<endl;;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------------------//

// constructor

// class complex{
// int a,b;
// public:
// complex();
// void display(){
//     cout<<"comple no is : "<<a<<" + "<<b<<" i "<<endl;}
// };
// complex::complex(){
//     cout<<" enter the no a : "<<endl;
//     cin>>a;
//     cout<<"enter the no b : "<<endl;
//     cin>>b;
// }
// int main(){
//     complex y;
//     y.display();
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------//

// paramitarised constructor :

// class complex
// {
//     int a, b;

// public:
//     complex(int, int);
//     void display()
//     {
//         cout << a << " + " << b << " i " << endl;
//     }
// };
// complex ::complex(int c, int d)
// {
//     a = c;
//     b = d;
// }
// int main()
// {
//     complex y(4, 6);
//     y.display();
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------//

// constructor overloading :

// class complex{
//     int a,b;
//     public:
//     complex(){
//         a=0;
//         b=0;
//     }
//     complex(int x,int y){
//         a=x;
//         b=y;
//     }
//     complex(int x){
//         a=x;
//         b=0;
//     }
//     void print(){
//         cout<<a<<" + "<<b<<" i "<<endl;
//     }
// };

// int main(){
//     complex y,x(4,6),z(6);
//     y.print();
//     x.print();
//     z.print();

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------//

// default comnstructor argument :

// class simple{
//     int a;
//     int b;
//     public:
//     simple(int n1=1,int n2=3){
//         a=n1;
//         b=n2;
//     }
//     void display(){
//         cout<<"complex no : "<<a<<" + "<<b<<" i "<<endl;
//     }
// };
// int main(){
//     simple y(6);
//     y.display();

//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------//

// dynamic installization of constructor using function

// class bankdeposite
// {
//     int principle;
//     int years;
//     float interestrate;
//     float returnvalue;

// public:
//     bankdeposite(){}
//     bankdeposite(int p, int y, float r);
//     bankdeposite(int p, int y, int r);
//     void print();
// };

// bankdeposite::bankdeposite(int p,int y,float r){
//     principle=p;
//     years=y;
//     interestrate=r;
//     returnvalue=p;
//     for(int i=0;i<y;i++){
//         returnvalue*=(i+interestrate);
//     }
// }

// bankdeposite::bankdeposite(int p,int y,int r){
//     principle=p;
//     years=y;
//     interestrate=float(r)/100;
//     returnvalue=p;
//     for(int i=0;i<y;i++){
//         returnvalue*=(i+interestrate);
//     }
// }
// void bankdeposite ::  print(){
//     cout<<"principle was amount : "<<principle<<" , return value after : "<<years<<" years is "<<returnvalue<<endl;
// }
// int main(){
//     int p;
//     int y;
//     float r;
//     int R;
//     bankdeposite b1,b2;
//     cout<<"enter the principle , years and interestrate in float : "<<endl;
//     cin>>p>>y>>r;

//     b1=bankdeposite(p,y,r);
//     b1.print();

//     cout<<"enter the principle , years and interestrate in int : "<<endl;
//     cin>>p>>y>>R;

//     b2=bankdeposite(p,y,R);
//     b2.print();

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------//

// copy constructor :

// class number{
//   int a;
//   public:
//   number (){
//       a=0;
//   }
//   number(int n){
//       a=n;
//   }
//   number(number &obj){
//       a=obj.a;
//   }
//   void display(){
//       cout<<"your no is : "<<a<<endl;
//   }
// };

// int main(){
//     number x,y,z(60);
//     x.display();
//     y.display();
//     z.display();

//     number z1=x;
//     z1.display();

//     number z2=z;
//     z2.display();

//      number z3=y;
//     z3.display();

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------------//

// destructor

// int count=0;
// class num{
//     public:
//     num(){
//         count++;
//         cout<<"constructor obj no : "<<count<<endl;
//     }
//     ~num(){
//         cout<<"destructor obj no : "<<count<<endl;
//         count--;
//     }
// };

// int main(){

//     cout<<"We are inside our main function"<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     {
//         cout<<"Entering this block"<<endl;
//         cout<<"Creating two more objects"<<endl;
//         num n2, n3;
//         cout<<"Exiting this block"<<endl;
//     }
//     cout<<"Back to main"<<endl;
//     return 0;
// }
//-------------------------------------------------------------------------------------------------------------------------------------------//
// ambiguity resolution in inheritance :

// class base1
// {
// public:
//     void greet()
//     {
//         cout << "base 1 function : " << endl;
//     }
// };
// class base2
// {
// public:
//     void greet()
//     {
//         cout << "base 2 functon : " << endl;
//     }
// };
// class derived : public base1, public base2
// {
// public:
//     void greet()
//     {
//         base2::greet();
//     }
// };

// int main()
// {
//     base1 A;
//     A.greet();
//     base2 B;
//     B.greet();
//     derived C;
//     C.greet();
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------//
// virtual function in cpp : POLYMORPHISM *runtime

// class student
// {
// protected:
//     int rollno;

// public:
//     void setno(int r)
//     {
//         rollno = r;
//     }
//     void printinfo()
//     {
//         cout << "roll no : " << rollno << endl;
//     }
// };

// class test : virtual public student
// {
// protected:
//     float maths, physics;

// public:
//     void settest(float a, float b)
//     {
//         maths = a;
//         physics = b;
//     }
//     void printtest()
//     {
//         cout << "maths marks = " << maths << " and physics marks = " << physics << endl;
//     }
// };

// class sports : virtual public student
// {
// protected:
//     int grade;

// public:
//     void setgrade(int g)
//     {
//         grade = g;
//     }
//     void printgrade()
//     {
//         cout << "you got grade : " << grade << endl;
//     }
// };

// class marks : public test, public sports
// {
// protected:
//     float total;

// public:
//     void display()
//     {
//         total = physics + maths + grade;
//         printinfo();
//         printtest();
//         printgrade();
//         cout << "total score : " << total << endl;
//     }
// };

// int main()
// {
//     marks yash;
//     yash.setno(11);
//     yash.settest(88, 99);
//     yash.setgrade(10);
//     yash.display();
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------//

// constructor in derived class in cpp

// class base1{
//     int a;
//     public:
//     base1(int x){
//         a=x;
//     }
//     void printbase1(){
//         cout<<"base 1 value value is : "<<a<<endl;
//     }
// };

// class base2{
//     int b;
//     public:
//     base2(int y){
//         b=y;
//     }
//     void printbase2(){
//         cout<<"base 2 value value is : "<<b<<endl;
//     }
// };

// class derived:public base1 , public base2{
//     int c,d;
//     public:
//     derived(int p,int q,int r,int s):base1 (p),base2 (q){
//         c=r;
//         d=s;

//     }
//     void display(){
//         cout<<"your derived class value is : "<<c<<" & "<<d<<endl;
//     }
// };
// int main(){
//     derived z(4,5,6,7);
//     z.printbase1();
//     z.printbase2();
//     z.display();
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------//
// POINTER IN CPP
//-----------------------------------------------------------------------------------------------------------------------------------------//

// pointer declearation in cpp

// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<"pointer value = "<<*(ptr)<<endl;
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------//

// new int in pointer cpp

// int main()
// {
//     int *ptr = new int(50);
//     cout << "ptr value = " << *ptr << endl;
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------------//

// array in pointer

// int main(){
//     int *arr=new int[3];
//     arr[0]=1;
//     arr[1]=2;
//     arr[2]=3;
//     for(int i=0;i<3;i++){
//     cout<<"array is : "<< arr[i]<<endl;
//     }
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------//

// pointer arrow func :

// class complex{
// int real,imag;
// public:
// void setdata(int a, int b){
//     real=a;
//     imag=b;
// }
// void print(){
//     cout<<"your real data is : "<<real<<endl;
//     cout<<"your imag data is : "<<imag<<endl;
// }
// };
// int main(){
//     complex *ptr= new complex;
//     ptr->setdata(4,5);
//     ptr->print();
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------//

// array of object using pointer :

// class shopitem{
//     int id;
//     float price;
//     public:
//     void setdata(int a,float b){
//         id=a;
//         price=b;
//     }
//     void print(){
//         cout<<"id of employ is : "<<id<<endl;
//         cout<<"price of employ is : "<<price<<endl;
//     }
// };
// int main(){
//     shopitem *ptr=new shopitem;
//     shopitem *ptrr = ptr;
//     int n=3,p,i;
//     float q;
//     for( i=0;i<n;i++){
//         cout<<"enter the id of product and price of product "<<endl;
//         cin>>p>>q;

//     ptr->setdata(p,q);
//     ptr++;
//     }
//     for(i=0;i<n;i++){
//         cout<<"item no "<<i+1<<endl;
//         ptr->print();
//         ptrr++;
//     }
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------//

// runtime polymorphism-pointer in derived class :

// class base
// {
// public:
//     int var_base;
//     void display()
//     {
//         cout << "base class var base = " << var_base << endl;
//     }
// };

// class derived : public base
// {
// public:
//     int var_derived;
//     void display()
//     {
//         cout << "var_base class = " << var_base << endl;
//         cout << "var_derived class = " << var_derived << endl;
//     }
// };

// int main()
// {
//     base *b_ptr;
//     base obj;
//     derived objj;
//     b_ptr = &obj;
//     b_ptr->var_base = 90;
//     b_ptr->display();

//     derived *d_ptr;
//     d_ptr = &objj;
//     d_ptr->var_base = 30;
//     d_ptr->var_derived = 40;
//     d_ptr->display();

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------------//
// virtual function in cpp using pointer

// class base
// {
// public:
//     int a;
//     virtual void display()
//     {
//         cout << "a=" << a << endl;
//     }
// };
// class derived : public base
// {
// public:
//     int b;
//     void display()
//     {
//         cout << "b=" << b << endl;
//     }
// };
// int main()
// {
//     base *ptrb;
//     derived *ptrd;
//     base funcb;
//     derived funcd;
//     ptrb = &funcb;
//     ptrd = &funcd;
//     ptrb->a = 10;
//     ptrb->display();
//     ptrd->b = 30;
//     ptrd->display();
//     return 0;
// }

//------------------------------------------------------------------------------------------------------//

//pattern question :


// int main(){
//     int n,count=1;;
//     cout<<"enter the size : "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=1;j--){
//             if(i>=j){
//                 cout<<count<<" 5";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }count++;
//         cout<<endl;
//     }
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------//

// program no 2

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter the two no : "<<endl;
//     cin>>a>>b;
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     cout<<" swaped no a = "<<a<<" and b = "<<b<<endl;
// }

//----------------------------------------------------------------------------------------------------------------------------------------------//

// REVERSE AN ARRAY :

// void reverse(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         int t = arr[s];
//         arr[s]=arr[e];
//         arr[e]=t;
//         s++;
//         e--;
//     }
// }

// int main(){
    
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     reverse(arr,n);

//      for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
    
//     return 0;
// }

