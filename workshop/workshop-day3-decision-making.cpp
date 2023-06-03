#include <iostream>
using namespace std;

int main()
{
    //-----------------------------------------------------------------------------------------------------------------------------//
    //===========================================if statement =======================================================================//

    // CHECK NO IS POSITIVE OR NEGATIVE

    // int a;
    // cout<<"enter a no for checking no is positive or negative "<<endl;
    // cin>>a;

    // if(a>0){
    //     cout<<"given no is positive "<<endl;
    // }

    // if(a<0){
    //     cout<<"your no is negative "<<endl;
    // }

    //---------------------------------------------------------------------------------------------------------------------------------------//
    // CHECK ATM PIN IS CORRECT OR NOT

    // int a,b;
    // a=2112;
    // cout<<"enter your passoward "<<endl;
    // cin>>b;

    // if(a==b){
    //     cout<<"your password is correct "<<endl;
    // }
    // if(a!=b){
    //     cout<<"your passoward is in correct "<<endl;
    // }

    //------------------------------------------------------------------------------------------------------------------------------//
    // enter any year and find the year is leap or not

    // int y;
    // cout<<"enter the year "<<endl;
    // cin>>y;

    // if(y%4==0){
    //     cout<<"your year is a leap year "<<endl;
    // }
    // if(y%4!=0){
    //     cout<<"your year is not a leap year "<<endl;
    // }

    //----------------------------------------------------------------------------------------------------------------------------------------//
    //=====================================if else loop=====================================================================================//

    // program for atm pin check

    // int a,b;
    // a=2112;
    // cout<<"enter the password "<<endl;
    // cin>>b;
    // if(a==b){
    //     cout<<"your password is correct "<<endl;
    // }
    // else{
    //     cout<<"your password is not correct "<<endl;
    // }

    //---------------------------------------------------------------------------------------------------------------------------------------//
    // program for finding even or odd

    // int a;
    // cout<<"enter the no "<<endl;
    // cin>>a;
    // if(a%2==0){
    //     cout<<"your no is positive "<<endl;
    // }
    // else{
    //     cout<<" your no is negative  "<<endl;
    // }

    //-----------------------------------------------------------------------------------------------------------------------------------------//
    // enter the character and find the character is a vovel or consonent

    // char c;
    // cout<<"enter the character"<<endl;
    // cin>>c;
    // if( c=='a' || c=='e' ||c=='i' || c=='o'  ||c=='u' || c=='A' || c=='E'||c=='I' ||c=='O'||c=='U'){
    //     cout<<"your character is a vovel"<<endl;
    // }
    // else{
    //     cout<<"your character is a consonent "<<endl;
    // }

    //----------------------------------------------------------------------------------------------------------------------------------------//
    // ==================================if else if statement=======================================================================//

    // enter three no and find greatest no

    // int a,b,c;
    // cout<<"enter the three no "<<endl;
    // cin>>a>>b>>c;

    // if(a>b && a>c){
    //     cout<<"a is greater than b and c "<<endl;
    // }
    // else if (b>a && b>c){
    //     cout<<"b is greater than a and c "<<endl;
    // }
    // else if (c>a && c>b){
    //     cout<<"c is greater than a and b "<<endl;
    // }
    // else {
    //     cout<<"all are equal "<<endl;
    // }

    //-------------------------------------------------------------------------------------------------------------------------------//
    // make a software of 6 sub marks and find total and percentage

    // int a, b, c, d, e, f, total;
    // float percentage;
    // cout << "enter the six subject marks " << endl;
    // cin >> a >> b >> c >> d >> e >> f;
    // total = a + b + c + d + e + f;
    // percentage = total / 6;
    // cout<<"total marks of all subject is "<<total<<endl;
    // cout<<"percentage = "<<percentage<<endl;

    //---------------------------------------------------------------------------------------------------------------------------------------//
    // enter the no and find the no is prime or not

    // int n;
    // cout<<"enter the no "<<endl;
    // cin>>n;

    // if(n==2 || n==3 || n==5 || n==7 ){
    //     cout<<" prime no "<<endl;
    // }
    // else if (n%2!=0 && n%3!=0 && n%5!=0 && n%7!=0){
    //     cout<<"  prime no "<<endl;
    // }
    // else {
    //     cout<<" not prime no "<<endl;
    // }

    //-------------------------------------------------------------------------------------------------------------------------------------------//
    // enter any character from user and find character is alphabate , digit or symbol
    //------------------------------without using ascii value-------------------------------------------------------------------------------------//

    // char a;
    // cout<<"enter the character "<<endl;
    // cin>>a;
    // if(a>='a' && a<='z' || a>='A' && a<='Z'){
    //     cout<<"it was a character "<<endl;
    // }
    // else if(a>='0'&&a<='9'){
    //     cout<<" it was a number "<<endl;
    // }
    // else{
    //     cout<<"it was a symbol"<<endl;
    // }

    //-----------------------------------------------------------------------------------------------------------------------------------//
    //================================== nested if loop ===================================================================================//
    //find the biggest no among three no using nested loop

    // int a,b,c;
    
    // cout<<"enter the three no "<<endl;
    // cin>>a>>b>>c;

    // if(a>b){
    //     if(a>c){
    //         cout<<" a is greatest no "<<endl;
    //     }
    // }
    // else if(b>a){
    //     if(b>c){
    //         cout<<"b is greatest no "<<endl;
    //     }
    // }
    // else{
    //     if(c>a && c>b){
    //         cout<<"c is greatest "<<endl;
    //     }
    //     else{
    //         cout<<" all are equal "<<endl;
    //     }
    // }

    //------------------------------------------------------------------------------------------------------------------------------------//
    //  enter a character and find character is alphabate either in lower or upper , digits or symbol 

    // char a;
    // cout<<"enter the character "<<endl;
    // cin>>a;
    // if(a>='a' && a<='z' || a>='A' && a<='Z'){
    //     cout<<"it was a character "<<endl;
    //     if(a>='A'&& a<='Z'){
    //         cout<<"it was in upper case "<<endl;
    //     }
    //     else {
    //         cout<<"character in lower case "<<endl;
    //     }
    // }
    // else if(a>='0'&&a<='9'){
    //     cout<<" it was a number "<<endl;
    // }
    // else{
    //     cout<<"it was a symbol"<<endl;
    // }

    // ----------------------------------------------------------------------------------------------------------------------------------//
    //======================================== switch case ============================================================================//

    //enter any int no and select operation from menu 1.square 2.cube 3.octal 4.hexa

    // char a;
    // int b;
    // cout<<"enter the value of b "<<endl;
    // cin>>b;
    // cout<<"enter your choice \n 1.square \n2.cube  "<<endl;
    // cin>>a;

    // switch(a){

    //     case '1':
    //     cout<<" square = "<<b*b<<endl;
    //     break;

    //     case '2':
    //     cout<<" cube = "<<b*b*b<<endl;
    //     break;

    //     default:
    //     cout<<"enter the correct no "<<endl;
    //     break;
        
    // }

    //-------------------------------------------------------------------------------------------------------------------------------------//
    //enter the given character is vovel or concent

    // char c;

    // cout<<"enter the character "<<endl;
    // cin>>c;

    // switch(c){
    //     case 'a':
    //     case 'e':
    //     case 'i':
    //     case 'o':
    //     case 'u':
    //     case 'A':
    //     case 'E':
    //     case 'I':
    //     case 'O':
    //     case 'U':
    //     cout<<"it is vovel"<<endl;
    //     break;
    //     default:
    //     cout<<"it is a concent "<<endl;
    //     break;
    // }
    
    //--------------------------------------------------------------------------------------------------------------------------//
    
    //======================================while loop ============================================================================//




    return 0;
}
