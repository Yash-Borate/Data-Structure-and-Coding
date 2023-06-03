#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

//-------------------------------------------------------------------------------------------------------//
// using function perform operations like addition , subtraction,multliplication , division

// void add(int a, int b)
// {
//     int ans,sub,mult;
//     float divi;

//     printf("enter the two no :");
//     scanf("%d %d ", &a, &b);
//     ans = a + b;
//     sub=a-b;
//     mult=a*b;
//     divi=a/b;

//     printf("\n ans = %d", ans);
//     printf("\n sub = %d", sub);
//     printf("\n mult = %d", mult);
//     printf("\n divi = %f", divi);

// }

// int main()
// {
//     int a, b;
//     add(a, b);
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------//
// radius of circle

// ------------------- no arg no return type -----------------------------//

// void circle(float a)
// {
//     printf("enter the radius of circle:");
//     scanf("%f ", &a);
//     float pi = 3.14, area;
//     area = pi * a * a;
//     printf("area = %f", area);
// }
// int main()
// {
//     int a;
//     circle(a);
//     return 0;
// }

//-------------------- with arg , with return type -----------------------------------//

// int circle(float a)
// {
//     printf("enter the radius of circle:");
//     scanf("%f ", &a);
//     float pi = 3.14, area;
//     area = pi * a * a;
//     printf("area = %f",area);
//     return area;
// }
// int main()
// {
//     int a,b;
//     circle(a);
//     b=a;
//     return b;
// }
//--------------------------------------------------------------------------------------------------------------//
// find addition of two no 
// int add(int a,int b)
// {

//     int c=a+b;

//     return c;
// }
// int main()
// {
//     int a,b,c;

//     printf("\n enter the a : ");
//     scanf("%d ", &a);

//     printf("\n enter the b: ");
//     scanf("%d ", &b);

//     c=add(a,b);

//     printf("\n addition = %d",c);

//     return c;
// }

//--------------------------------------------------------------------------------------------------------//
// ----------------- no argument with return type --------------------------------//

// int add()
// {
//     int a, b;
//     printf("\n enter the a : ");
//     scanf("%d ", &a);

//     printf("\n enter the b: ");
//     scanf("%d ", &b);

//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int c;

//     add();
//     c = add();

//     printf("\n addition = %d", c);

//     return 0;
// }

// -------------------------argument with no return type-----------------------//

// some error occuer 

// void add(int a, int b)
// {
//     int c = a + b;
//     printf("\n addition = %d", c);
// }
// int main()
// {
//     int a, b, ad;
//     printf("\n enter the a : ");
//     scanf("%d ", &a);

//     printf("\n enter the b: ");
//     scanf("%d ", &b);

//     add(a, b);
//     return 0;
// }

//--------------------------------------------- home work question --------------------------------------------------------------------//
// accept value of three angle from user and check if it is triangle or not

// void triangle(float a, float b, float c){
//     float add=a+b+c;
//     if(add==180){
//         printf("\n it is a triangle");
//     }
//     else{
//         printf("it is not a triangle ");
//     }
// }

// int main(){
//     float a,b,c;
//     printf("\n enter the angles from user ");
//     scanf("%f %f %f ",&a,&b,&c);
//     triangle(a,b,c);
    
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------------------//
// accept two value from user and swap them

// void swap(int a, int b){
//     int temp=a;
//     a=b;
//     b=temp;
//     printf("\n a= %d \n b= %d ",a,b);
// }
// int main(){
//     int a,b;
//     printf("\n enter the value a and b ");
//     scanf("%d %d",&a,&b);
//     swap(a,b);
//     return 0;
// }

//----------------------- homework -------------------------------------------------------------------//
//find a factorial using recursion

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return(n*factorial(n-1));
// }
// int main(){
//     int a,b;
//     printf("\n enter the no :");
//     scanf("%d",&a);
//     b=factorial(a);
//     printf("factorial=%d ",b);
//     return 0;
// }

//-------------------------------------------------------------------------------//
// automatic class 

// int main(){

// int a=10;{
//  int a=20;
//  {
//      int a=30;
//      printf("%d ",a);
//  }
//  printf("%d",a);
//  }
//  printf("%d ",a);

// return 0;
// }

//------------------------------------------------------------------------------------------------//
// regiater storage class 

//  int main(){

// register int a=10;{
//  register int a=20;
//  {
//      register int a=30;
//      printf("%d ",a);
//  }
//  printf("%d",a);
//  }
//  printf("%d ",a);

// return 0;
// }

//--------------------------------------------------------------------------------------//
// register int 

// int main(){
//     register int i;
//     for(int i=1;i<10;i++){
//         printf("%d",i);
//     }
//     return 0;
// }

//------------------------------------------------------------------------------------------//
// static int count

// int main(){
//     static int i;
//     printf("%d ",i);
//     return 0;
// }

//------------------------------------------------------------------------------------------------------//
// extern class

// extern int a;
// int main(){
//     printf("%d ",a);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------//
// structure member access 
// struct student{

//     char name[10];
//     int rollno;
//     float pi;

// };

// int main(){

// struct student p1={.name="yash", .rollno=11 , .pi=1.11};
// struct student p2={.name="karan", .rollno=12 , .pi=4.11};

// printf("\n name=%s \n rollno= %d \n pi= %f ",p1.name,p1.rollno,p1.pi);
// printf("\n name=%s \n rollno= %d \n pi= %f ",p2.name,p2.rollno,p2.pi);

// return 0;
// }

//---------------------------------------------------------------------------------------------------//
// print 5 no of student and print information 
// struct point{
//     char name[10];
//     int rollno;
// };
// int main(){
//     struct point arr[3];
//     for(int  i=0;i<3;i++){
//         printf("\n print the name of student :");
//         scanf("%s",&arr[i].name);
//         printf("\n print the roll no  :");
//         scanf("%d",&arr[i].rollno);
        
//     }
//      for(int  i=0;i<3;i++){
//         printf("\n  name of student :%s",arr[i].name);
        
//         printf("\n  roll no %d :",arr[i].rollno);
        
        
//     }
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------//
// enter the book name and book price and book pages
// struct point{
//     char name[10];
//     int pages;
//     float price;
// };
// int main(){
//     struct point arr[3];
    // for(int  i=0;i<3;i++){
    //     printf("\n print the book name:");
    //     scanf("%s",&arr[i].name);
    //     printf("\n print the pages :");
    //     scanf("%d",&arr[i].pages);
    //     printf("\n enter the book price : ");
    //     scanf("%f",&arr[i].price);
        
    // }
    //  for(int  i=0;i<3;i++){
    //     printf("\n  name of book :%s",arr[i].name);
        
    //     printf("\n  pages %d :",arr[i].pages);
    //     printf("\n price of book : %f ",arr[i].price);
        
        
    // }
    //
//     struct point p1={ .name="c",.pages=150,.price=200};
//     struct point p2={ .name="cpp",.pages=456,.price=300};
//     struct point p3={ .name="java",.pages=156,.price=700};
    
//     printf("\n name=%s \t pages=%d \t price=%f",p1.name,p1.pages,p1.price);
//     printf("\n name=%s \t pages=%d \t price=%f",p2.name,p2.pages,p2.price);
//     printf("\n name=%s \t pages=%d \t price=%f",p3.name,p3.pages,p3.price);
//      return 0;
// };

//--------------------------------------------------------------------------------------------------------//
// ====================================== pointer ====================================================//
// int main(){
//     int a=6;
//     int *ptr=&a;

//     printf("a = %d",a);
//     printf("\nptr = %u",ptr);

//     return 0;}

//------------------------------------------------------------------------------------------------------------//
// add the two digit using pointer
// int main(){
//     int a=6,b=8;
//     int *ptr=&a,*ptrs=&b;

//     printf("a = %d \n b= %d",a,b);
//     printf("\nptr = %d",(*(ptr)+*(ptrs)));

//     return 0;}

//-----------------------------------------------------------------------------------------------------------------------------------------//
//pointer increament 

// int main(){
// int a=5;
// int *ptr=&a;
// printf("ptr = %u ",ptr);
// ptr++;
// printf("ptr2= %u ",ptr);
//     return 0;
// }

//----------------------------------------------- home work question ---------------------------------------------------------------------------------//
// accept no from user and print it no is prime or not 

// bool primeno(int a){
//     for(int i=2;i<a;i++){
//         if(a%i==0){
//             printf("\n not prime no : ");
//             return false;
//         }
//         return true;
//     }
// }

// int main(){

//     int a;
//     printf("\n enter the no :");
//     scanf("%d",&a);

//     if(primeno(a)){
//         printf("\n prime no :");
//     }
//  return 0;
//  }
    
//-------------------------------------------------------------------------------------------------------------//
//    write program to find th power of num 

// some error occuer in the program 

// int powerr(int a,int b){
    
//     if(b==0){
//         return 1;
//     }
//     int p=pow(a,b-1);
//     return a*p;
    
// }


// int main(){
//     int a,b;
//     printf("\n enter the no : ");
//     scanf("%d ",&a);
//     printf("\n enter the power : ");
//     scanf("%d ",&b);
    
//     int p=powerr(a,b);
//     printf("power of num= %d",p);
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------//
// find the given no is even or odd 

//-----------------------------------------------------------------------------------------------------------------------//

    

    