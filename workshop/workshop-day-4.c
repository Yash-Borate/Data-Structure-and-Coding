#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{

    //==============================================loops=======================================================================;;
    //------------------------------------------------------------------------------------------------------------------------------------//

    // PRINT 1 TO 100 NO AND FIND THE TOTAL ADDITION :

    // int a = 1, total = 0;
    // while (a <= 100)
    // {
    //     printf("\n a=  %d ", a);
    //     a++;
    //     total = total + a;
    // }
    // printf("\n total= %d", total);

    //------------------------------------------------------------------------------------------------//
    //=============================== while within while ==============================================//

    // pattern question :

    // int i=1,j;

    // while(i<=4){
    //     j=1;
    //     while(j<=i){
    //         printf(" * ");
    //         j++;
    //     }

    //     printf("\n");
    //     i++;
    // }

    //--------------------------------------------------------------------------------------------------------------------------------//
    //=================================== do while loop =========================================================================//

    //  print no 1 to 100

    // int i=1;
    // do{
    //     printf(" a=%d",i);
    //     i++;
    // }
    // while(i<=100);

    //------------------------------------------------------------------------------------------------------------------------------//
    // without using ascii

    //  print a to z in do while loop

    // char c='a';
    // do{
    //     printf("%c ",c);
    //     c++;
    // }
    // while(c<='z');

    // using ascii value

    // int ascii;
    // printf("\n enter the ascii value ");
    // scanf("%d ",&ascii);

    // do{
    //     printf(" %c ",ascii);
    //     ascii++;
    // }
    // while(ascii<=122);

    //----------------------------------------------------------------------------------------------------------------------------------//

    // print maths table from user input value

    // int a, b = 1;

    // printf("\n enter the table no :");
    // scanf("\n %d ", &a);

    // do
    // {
    //     printf("\n %d ", a * b);
    //     b++;

    // } while (b <= 10);

    //---------------------------------------------------------------------------------------------------------------------------------//
    // print maths table from 1 to 10

    // int a = 1, b ;
    //  do{
    //      b=1;
    //      while(b<=10){

    //          printf(" %d ",a*b);
    //          b++;
    //      }
    //      printf(" \n ");
    //      a++;
    //  }

    //  while(a<=10 );
    //------------------------------------------------------------------------------------------------------------------------------//
    // enter no from user and print sum of digit

    // int a, lastdigit=1, sum = 0;
    // printf("\n enter the no ");
    // scanf("%d ", &a);

    // do
    // {
    //
    // lastdigit = a % 10;
    //     sum = sum + lastdigit;
    //     a = a / 10;

    // }

    // while (a > 0);
    // printf("\n total sum = %d ", sum);

    //-----------------------------------------------------------------------------------------------------------------------------------------//

    // find armstrong no

    // int a,temp,l,sum=0;
    // printf("enter the no to check the armstrong no ");
    // scanf("%d ",&a);

    // temp=a;
    // do
    // {

    //     l = a % 10;
    //     sum = sum +(l*l*l);
    //     a = a / 10;

    // }

    // while (a > 0);

    //  if(temp==sum){
    //     printf("\n armstrong no ");
    // }
    // else if(temp!=sum){
    //     printf(" not armstrong no ");
    // }

    //-----------------------------------------------------------------------------------------------------------------------//
    // check palidrome no

    //  int a,temp,l,sum=0;
    // printf("enter the no to check the armstrong no ");
    // scanf("%d ",&a);

    // temp=a;
    // do
    // {

    //     l = a % 10;
    //     sum = sum*10 +l;
    //     a = a / 10;

    // }

    // while (a > 0);

    //  if(temp==sum){
    //     printf("\n  palidrome no ");
    // }
    // else if(temp!=sum){
    //     printf(" \n not  palidrome no ");
    // }

    //----------------------------------------------------------------------------------------------------------------------------------//

    // HOME WORK QUESTION 
    
    // find armstrong no between 1 to 1000


        // int a=1,temp,l,sum=0;

        // do
        // {

        //     l = a % 10;
        //     sum = sum +(l*l*l);
        //     a = a / 10;
        //     a++;

        // }

        // while (a <=1000);
        // if(temp==sum){
        //  printf("\n your armstrong  no = %d",sum);
        // }

    //-----------------------------------------------------------------------------------------------//

    // //enter position from user and print fibonnaci series

    // int a,nextterm=0;
    // int t1=0;
    // int t2=1;
    // int i=1;
    // printf("\n enter the value a ");
    //     scanf("%d",&a);

    //     do{
    //         nextterm=t1+t2;
    //         printf("\n %d ",t1);

    //         t1=t2;
    //         t2=nextterm;
    //         i++;
    //     }
    //     while(i<=a);

    // -------------------------------------------------------------------------------------------------------------------------------------//
    // ======================================= for loop ================================================================================//

    // print 1 to 10 no

    // for(int i=0;i<=10;i++){
    //     printf("\n %d ",i);
    // }

    // --------------------------------------------------------------------------------------------------------------------------------------//

    // find factorial of a number

    // int a,fact=1;

    // printf("\n enter the no ");

    // scanf("%d",&a);

    // for(int i=1;i<=a;i++){

    //      fact=fact*i;

    // }

    // printf("\n factorial of no = %d",fact);

    //-------------------------------------------------------------------------------------------------------------------------------------//

    // print your name 10 time

    // int a=1;

    // for(int i=0;i<10;i++){
    //    printf("\n  %d",a);
    //     printf(" . yash is a good boy\n  ");
    //    a++;
    // }

    //---------------------------------------------------------------------------------------------------------------------------------//
    // HOME WORK QUESTION 
    // find prime no

    // int a;
    // printf("\n enter a no ");
    // scanf("%d ",&a);

    // for(int i=2;i<a;i++){
    //     if(a%i==0){
    //         printf("\n it is not prime no ");
    //         break;
    //     }
    //     else{
    //         printf("\n it is  a prime no ");
    //         break;
    //     }
    // }

    //-------------------------------------------------------------------------------------------------------------------------------//

    // take input name from user and give him message good morning

    // char y[5];
    // printf("\n your name :");
    // scanf("%s",&y);
    // int a=1;

    // for(int i=0;i<10;i++){
    //    printf("\n  %d",a);
    //    printf("%s",y);
    //     printf(" .  is a good boy\n  ");
    //    a++;
    // }

    //---------------------------------------------------------------------------------------------------------------------------------------//
    // pattern question 
    //
    // int a,b;
    // printf("\n enter the row and colou n no ");
    // scanf("%d %d ",&a,&b);
    // for(int i=1;i<=a;i++){
    //     for(int j=1;j<=b;j++){
    //         printf("\t * ");
    //     }
    //     printf(" \n ");
    // }
    //---------------------------------------------------------------------------------------------------------------------------------------//
    // print a to z in 5 by 8 matrix

    // char a='a';
    // for(int i=1;i<=6;i++){
    //     for(int j=1;j<=4;j++){
    //         printf("%c \t",a);
    //         a++;
    //     }
    //     printf("\n");
    // }

    //------------------------------------------------------------------------------------------------------//
    // print doller symbol using

    /*

        $ $ $ $ $
        $ $ $ $
        $ $ $
        $ $
        $

    */

    // int a;
    // printf("\n enter the no :");
    // scanf("%d",&a);
    // for(int i=a;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         printf("\t $");
            
    //     }
    //     printf("\n");
    // }

    //--------------------------------------------------------------------------------//
    /*

        1
        2 3
        4 5 6
        7 8 9 10


    */

    // int a=1;
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         printf("%d \t",a);
    //         a++;
    //     }
    //     printf("\n");
    // }

    //---------------------------------------------------------------------------------------------------//

    /*
        1 0 0
        0 1 0
        0 0 1

    */

    // int a=3;

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         if(j==i){
    //             printf("\t 1 ");

    //         }

    //         else{
    //             printf("\t 0 ");
    //         }
    //     }
    //     printf("\n");
    // }

    //---------------------------------------------------------------------------------------------------//
//  WRONG QUEDTION PLEASE SOLVE PROPERLY 
    // int a=5;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         if(j<3){
    //             printf("\t @ ");
    //             j++;
    //         }
    //         else if(j>3){
    //             printf("\t @ ");
    //             j--;
    //         }
    //     }printf("\n");
    // }
   
//----------------------------------------------------------------------------------------------------------------//
//======================= homework question ==================================================//

// pyramid question 
// some problem occur in program 

// int a,k=0;
// printf("\n enter th no of pyramid : ");
// scanf("%d",&a);
// for(int i=1;i<=a;++i,k=0){
//     for(int j=1;j<=a-i;++j){
//         printf(" ");
//     }
//     while(k!=2*i-1){
//         printf("$ ");
//         ++k;
//     }
//     printf("\n");
// }

//-------------or----------------------------------//

/*
     $
    $ $ 
   $ $ $ 
  $ $ $ $ 

*/

// int n;
// printf("enter the value of n :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=n;j>=1;j--){
//         if(i>=j){
//             printf(" $");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

// for(int i=n-1;i>=1;i--){
//     for(int j=n;j>=1;j--){
//         if(i>=j){
//             printf(" $");
//         }
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }



//---------------------------------------------------------------------------------------------------------------------//

/*
    @
    @ @
    @ @ @
    @ @
    @

*/


// int n;
// printf(" enter the no :");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         printf(" @ ");
//     }
//     printf("\n");
// }
// for(int i=n-1;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         printf(" @ ");
//     }
//     printf("\n");
// }

    return 0;
}