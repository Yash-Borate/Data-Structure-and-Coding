#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    //-----------------------------------------------------------------------------------------------------------------------------------//

    //===============================  while loop  ========================================================================================//
    // print 1 to 100 no and find the addition of total no

    //    int a;
    //    a=1;
    //    int total=0;
    //    while(a<=100){
    //        cout<<"\n a= "<<a<<endl;
    //        a++;
    //        total=total+a;
    //    }
    //    cout<<"your total sum is = "<<total<<endl;

    //-------------------------------------------------------------------------------------------------------------------------------------------//
    //=========================== while within while loop ==================================================================================//

    // int a=1,j;

    // while(a<=5){
    //     j=1;
    //     while(j<=a){
    //         cout<<" * ";
    //         j++;
    //     }
    //         cout<<endl;
    //         a++;
    // }

    //------------------------------------------------------------------------------------------------------------------------------------//
    // ========================================== do while loop =================================================================//
    // print 1 to 100 no

    // int a=1;
    // do{
    //     cout<<"\na="<<a;
    //     a++;
    // }
    // while(a<=100);

    //------------------------------------------------------------------------------------------------------------------------------------//
    // print a to z alphabate

    // char a='a';

    // do{
    //     cout<<"\t "<< a;
    //     a++;
    // }
    // while(a<='z');

    //-------------------------------------------------------------------------------------------------------------------------------------//
    // print maths table from user input

    // int a,b=1;
    // cout<<"enter the value of a = ";
    // cin>>a;
    // do{
    //     cout<<a*b<<endl;
    //     b++;
    // }
    // while(b<=10);

    //---------------------------------------------------------------------------------------------------------------------------------------//
    // print maths table from 1 to 10
    // int a=1,b,ans;
    // do{
    //     b=1;
    //     while(b<=10){
    //         ans=a*b;
    //         cout<<ans<<" ";
    //         b++;
    //     }
    //     cout<<endl;
    //     a++;

    // }
    // while(a<=10);

    //---------------------------------------------------------------------------------------------------------------------------------//
    // using do while make pattern question

    // int a=5,b;
    // do{
    //     b=1;
    //     while(b<=a){
    //         cout<< " * ";
    //         b++;
    //     }
    //     cout<<endl;
    //     a--;
    // }
    // while(a>=1);

    //----------------------------------------------------------------------------------------------------------//
    // enter no from user and find the addition of digits

    // int a;
    // cout<<"enter the no : ";
    // cin>>a;
    // int sum=0,lastdigit;
    // do{
    //     lastdigit=a%10;
    //     sum+=lastdigit;
    //     a/=10;
    // }
    // while(a>0);
    // cout<<"sum="<<sum<<endl;

    // -------------------------------------------------------------------------------------------------//
    // find given no is armstrong or not

    // int a;
    // cout<<"enter the no :";
    // cin>>a;
    // int sum=0,last;
    // int b=a;

    // do{
    //     last=a%10;
    //     sum=sum+(last*last*last);
    //     a/=10;

    // }
    // while(a>0);
    // if(b==sum){
    //     cout<<" the no is armstrong "<<endl;
    // }
    // else{
    //     cout<<"the no is not armstrong  "<<endl;
    // }

    //----------------------------------------------------------------------------------------------------------------------------------------//
    // check pallidrome no

    // int a;
    // cout<<"enter the no :";
    // cin>>a;
    // int sum=0,r;
    // int b=a;
    // do{
    //     r=a%10;
    //     sum=sum*10 +r;
    //     a/=10;
    // }
    // while(a>0);
    // if(b==sum){
    //     cout<<"palidrome"<<endl;
    // }
    // else{
    //     cout<<"not palidrome "<<endl;
    // }

    //--------------------------------------------------------------------------------------------------------------------------------------//
    // HW QUESTION  find armstrong no between 1-1000

    // int a=1;

    // int sum=0,last;
    // int b=a;

    // do{
    //     last=a%10;
    //     sum=sum+(last*last*last);
    //     a/=10;

    // }
    // while(a<=1000);
    // if(b==sum){
    //     cout<<" the no is armstrong ="<<b<<endl;
    // }

    //--------------------------------------------------------------------------------------------------------------------------------//
    // enter the position from user and find the fibanacci series

    // int a,t1=0,t2=1,nextterm=0,i=1;
    // cout<<"enter the no : ";
    // cin>>a;
    // do{

    //     nextterm=t1+t2;
    //     cout<<t1<<endl;
    //     t1=t2;
    //     t2=nextterm;

    //     i++;
    // }
    // while(i<=a);

    //----------------------------------------------------------------------------------------------------------------------------------//
    // ============================== for loop ======================================================================================//

    // QUESTION : print 1 to 10

    // for(int i=1;i<=10;i++){
    //     cout<<i<<endl;
    // }

    //-----------------------------------------------------------------------------------------------------------------------------//
    // find factorial of a number

    // int a,fact=1;
    // cout<<"enter the no : ";
    // cin>>a;

    // for(int i=2;i<=a;i++){
    //     fact*=i;
    // }
    // cout<<fact<<endl;

    //-----------------------------------------------------------------------------------------------------------------------------------//
    // print your name 10 times with count :

    // int a=1;
    // for(int i=1;i<=10;i++){
    //     cout<<a<<" . yaSh"<<endl;
    //     a++;
    // }

    //--------------------------------------------------------------------------------------------------------------------------------------//
    // take input from user and give him message

    // char a[5] ;
    // cin>>a;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << a << " . good morning " << endl;
        
    // }

    //--------------------------------------------------------------------------------------------------------------------------------------//
    // 

    return 0;
}