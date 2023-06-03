#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------//
// sorting in array 

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

//     return 0;
// }

//----------------------------------------------------------------------------------------------------//
// usong function perform addirtion like addition , subtraction , multliplication and division

// void operation(int a,int b){
//     cout<<"enter thr value of a = "<<endl;
//     cin>>a;
//     cout<<"enter the value of b = "<<endl;
//     cin>>b;
//     int add,sub,mult,divi;
//     add=a+b;
//     sub=a-b;
//     mult=a*b;
//     divi=a/b;
//     cout<<"addition = "<<add<<"\n substraction="<<sub<<"\n multliplication="<<mult<<"\n division="<<divi<<endl;
// }
// int min(){
//     int a,b;
//      cout<<"enter thr value of a = "<<endl;
//     cin>>a;
//     cout<<"enter the value of b = "<<endl;
//     cin>>b;
//     operation(a,b);
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------//
// find radius of circle 
// no argument no return type

// void circle(){

 //     int r;   
//     cout<<" enter the radius = "<<endl;
//     cin>>r;
//     float pi=3.14;
//     int area =pi*r*r;
//     cout<<"area = "<<area<<endl;
// }

// int main(){
//     int a;
//     circle();

//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------//
//with arg , with return type 

// int circle(int r){
    
//     cout<<" enter the radius = "<<endl;
//     cin>>r;
//     float pi=3.14;
//     int area =pi*r*r;
//     cout<<"area = "<<area<<endl;
//     return area;
// }

// int main(){
//     int a,b;
//     b=circle(a);

//     return b;
// }

//-----------------------------------------------------------------------------------------------------------------------------------------//
// find addition of two no with return type and argument

// int add(int a,int b){
//     int c=a+b;
//     cout<<"addition="<<c;
//     return c;
// }
// int main(){
//     int a,b,c;
//     cout<<"\nenter the no a=";
//     cin>>a;
//     cout<<"\nenter the no b=";
//     cin>>b;
//     c=add(a,b);
//     return c;
// }

//---------------------------------------------------------------------------------------------------------------------------------------------//
// addition of two no no argument with return type

// int add(){
//     int a,b;
//     cout<<"\nenter the no a=";
//     cin>>a;
//     cout<<"\nenter the no b=";
//     cin>>b;
//     int c=a+b;
//     cout<<"addition="<<c;
//     return c;
// }
// int main(){
//     int c;
    
//     c=add();
//     return c;
// }

//------------------------------------------------------------------------------------------------------------------------------------//
//find addition of two no with argument and with return type

// void add(int a,int b){
    
//     cout<<"\nenter the no a=";
//     cin>>a;
//     cout<<"\nenter the no b=";
//     cin>>b;
//     int c=a+b;
//     cout<<"addition="<<c;
   
// }
// int main(){
//     int a,b,c;
    
//     add(a,b);
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------------------------//
//  accept value of three angle from user and check if it is triangle or not

// int triangle(int a,int b,int c){
//     cout<<"enter the three angle : "<<endl;
//     cin>>a>>b>>c;
//     int add=a+b+c;
//     if(add==180){
//         cout<<"it is a triangle "<<endl;
//     }
//     else{
//         cout<<"it is a not triangle "<<endl;
//     }
// }

// int main(){
//     int a,b,c;
//     triangle(a,b,c);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------//
// accept two value from user and swap them

// void swap(int a,int b){
//     cout<<"enter the value of a =";
//     cin>>a;
//     cout<<"\n enter the value of b =";
//     cin>>b;
//     int temp=a;
//         a=b;
//         b=temp;

//         cout<<"a = "<<a<<"\n b = "<<b;
// }

// int main(){
//     int a,b;
//     swap(a,b);
//         return 0;
// }

//------------------------------------------------------------------------------------------------------------------------------------------------//
// find factorial of a no

// int fact(int n){
   
//     if(n==1){
//         return 1;
//     }
//     return (n*fact(n-1));
// }

// int main(){
//     int a;
//      cout<<"enter the no :";
//     cin>>a;
//     int b=fact(a);
//     cout<<"fact = "<<b;
//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------------//

struct student{

    char name[10];
    int rollno;
    float pi;

};

int main(){

struct student p1={.name="yash", .rollno=11 , .pi=1.11};


cout<<"\n name="<<p1.name<<"\n rollno="<<p1.rollno<<"\n pi="<<p1.pi;


return 0;
}



















