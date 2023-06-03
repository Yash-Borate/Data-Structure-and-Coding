#include <stdio.h>
#include <conio.h>
int main()
{

    //=====================================if statement===================================================================================//

    //----------------------------------------------------------------------------------------------------------------------------------------//
    // CHECK NO IS POSITIVE OR NEGATIVE :

    // int a;
    // printf("enter the value of no :");
    // scanf("%d ",&a);

    // if(a>0){
    //     printf(" \n your no is positive ");
    // }
    // if(a<0){
    //     printf("\n your no is negative ");
    // }

    //-------------------------------------------------------------------------------------------------------------------------------//

    // ATM PIN IC CORRECT OR NOT

    // int a,b;
    // a=2112;

    // printf("\n enter the passward of your atm : ");
    // scanf("%d ",&b);

    // if (a==b){
    //     printf("\n your password is correct : ");
    // }
    // if (a!=b){
    //     printf("\n your passoward is not correct : ");
    // }

    //----------------------------------------------------------------------------------------------------------------------------------------------------------//

    // ENTER ANY YEAR AND FIND THE YEAR IS A LEAP OR NOT

    // int year;
    // printf("enter the year :");
    // scanf("%d ",&year);

    // if(year%4==0){
    //     printf("\n this is a leap year");
    // }
    // if (year%4!=0){
    //     printf("\n this is not leap year ");
    // }

    //---------------------------------------------------------------------------------------------------------------------------------//

    //=============================================if-else-loop=======================================================================//

    // program for atm pin check  :

    // int a,b;
    // a=2112;

    // printf("\n enter the passward of your atm : ");
    // scanf("%d ",&b);

    // if (a==b){
    //     printf("\n your password is correct : ");
    // }
    // else {
    //     printf("\n your passoward is not correct : ");
    // }
    //----------------------------------------------------------------------------------------------------------------------------------//

    //  program for even odd

    //  int a;
    //     printf("enter the value of no :");
    //     scanf("%d ",&a);

    //     if(a>0){
    //         printf(" \n your no is positive ");
    //     }
    //     else{
    //         printf("\n your no is negative ");
    //     }

    //------------------------------------------------------------------------------------------------------------------------------------------------------//
    // enter the character and find character is vovel or consonent

    // char a;
    // printf("enter the character ");
    // scanf("%c ", &a);
    // if (a == 'a'|'A' || a == 'e'|'E' || a == 'i'|'I' || a == 'o'|'O' || a == 'u'|'U')
    // {
    //     printf("your character is vovel \n ");
    // }
    // else
    // {
    //     printf("your character is consonent");
    // }

    //--------------------------------------------------------------------------------------------------------------------------//

    //================================IF  ELSE IF STATEMENT ======================================================================//

    // ENTER THREE NO ND FIND GREATEST NO

    // int a,b,c;
    // printf(" print three no : ");
    // scanf("%d %d %d ",&a,&b,&c);
    // if (a>b && a>c){
    //     printf("a is greater than b and c \n");
    // }
    // else if(b>a && b>c){
    //     printf("b is greater than a and c \n ");
    // }
    // else if(c>a && c>b){
    //     printf("c is greater than a and b \n ");
    // }
    // else{
    //     printf("\n  all are equal ");
    // }

    //-------------------------------------------------------------------------------------------------------------------------//
    // make a software of 6 sub marks, total,percentage

    //     float a,b,c,d,e,f,percentage;
    //     int total;
    //     printf("\n enter the marks of subject ");
    //   scanf("%f %f %f %f %f %f ",&a,&b,&c,&d,&e,&f);
    //     total=a+b+c+d+e+f;

    //     printf(" your total marks of all subject is =");
    //     printf("%d ",total);

    //     percentage=(total/6);

    //     printf(" your percentage is");
    //     printf("%f",percentage);

    //     if(100>=percentage && percentage>=75){
    //         printf("\n you got A grade and your are passed the exam successfully ");
    //         }

    //     else if (74>=percentage && percentage >=55){
    //         printf("\n you got B grade and your are passed the exam successfully ");
    //     }
    //     else if (54>=percentage && percentage>=35){
    //         printf("\n you got C grade and your are passed the exam successfully");
    //     }
    //     else if (34>=percentage && percentage>=0){
    //         printf("\n you got D grade and you are failed in exam");
    //     }

    //--------------------------------------------------------------------------------------------------------------------------------------------//
    // ENTER THE NO AND FIND THE NO IS PRIME OR NOT WITHOUT USING ANY LOOP

    // int n;
    // printf("\n enter the no ");
    // scanf("%d",& n);

    // if(n==2 || n==3 || n==5 || n==7 || n==1){
    //     printf("\n  prime no ");
    // }

    // else if(n%2==0 && n%3==0 && n%5==0 && n%7==0 ){
    //     printf("\n  not prime no ");
    // }
    // else{
    //     printf("\n   prime no ");
    // }

    //-------------------------------------------------------------------------------------------------------------------------//
    // enter any character from user and find character is character,aplhabate  , digit , and special symbol

    //---------------------------------------------------------------------------------------------------------------------//

    // without using ascii value

    // char a;
    // printf("\n enter  character ");
    // scanf("%c ",&a);

    // if((a>='a' && a<='z')||(a>='A'&&a<='Z')){
    //     printf("\n this is a alphabate ");
    // }
    // else if(a>='0' && a<='9'){
    //     printf("\n it is a number ");
    // }
    // else{
    //     printf("\n it is a symbol ");
    // }
    //----------------------------------------------------------------------------------------------//
    // using ascii
    // find ascii of character

    //  char c;
    //  printf("\n enter the character ");
    //  scanf("%c ",&c );

    //  printf("\n the ascii value of character is = %d ",c);

    //-------------------------------------------------------------------------------------------------//

    // find character using ascii

    //   int n;
    //   printf("\n enter the ascii value = ");
    //   scanf("%d ",&n);

    //   if ((n>=65&&n<=90)||(n>=97&&n<=122)){
    //       printf(" it is  character %c \n",n);
    //   }
    //   else if(n>=48 && n<=57){
    //       printf("\n it is a number %c",n);
    //   }
    //   else{
    //       printf("\n it is a symbol %c",n);
    //   }

    //======================================NESTED IF =============================================================//
    //  find the biggest no among three no using nested or loop

    // int a,b,c;
    // printf("enter the three no \n");=
    // scanf("%d %d %d ",&a,&b,&c);
    //     if (a>b){
    //         if(a>c){
    //             printf("\n a if greater than  b and c ");
    //             }
    //         else{
    //             printf("\n c is greater than a and b");
    //         }
    //     }
    //     else{
    //         if(b>c){
    //             printf("b is greater than c and a");
    //         }
    //         else{
    //             printf("\n c is greater than a and b");
    //         }
    //     }
    //--------------------------------------------------------------------------------------------------//

    // ENTER A CHARACTER AND CHAR IS ALPHABATE EITHER IS UPPER OR LOWER , DIGITS AND SPECIAL SYMBOL

    // char a;
    // printf("\n enter the character :");
    // scanf("%c",&a);

    // if((a>='a' && a<='z')||(a>='A'&&a<='Z')){
    //     printf("\n it is a character :");
    //    if(a>='A'&&a<='z') {
    //        printf("\n it is in upper case");
    //    }
    //    else{
    //        printf("\n it is in lower case ");
    //    }

    // }
    // else if(a>='0' && a<='9'){
    //     printf("\n it is a number ");
    // }
    // else{
    //     printf("\n it is a symbol ");
    // }

    //-----------------------------------------------------------------------------------------------------------------------------------//
    //================================== switch case ==============================================================//

    // int ch;
    // printf("\n enter the no ");
    // scanf("%d ",&ch);
    // switch(ch){
    //     case 1:
    //     printf("\n entered value is 1");
    //     break;
    //     case 2:
    //     printf("\n entered value is 2");
    //     break;z
    //     case 3 :
    //     printf("\n entered value is 3");
    //     break;
    //     case 4 :
    //     printf("\n entered value is 4");
    //     break;
    //     default:
    //     printf("\n i am still learning ");
    //     break;
    // }

    //-----------------------------------------------------------------------------------------------------------------------------------//
    // ENTER ANY INT NO SELECT FOLLOWING MENUE 1.SQUARE 2.CUBE 3.OCTAL 4.HEXA

    // int a;
    // printf("\n enter your choice \n1.octal= \n2.square= \n3.cube=\n4.hexa=");
    // scanf("%d ",&a);
    // switch(a){
    //     case 1:
    //     printf("\n octal no is = %o",a);
    //     break;
    //     case 2:
    //     printf("\n square no is = %d",a*a);
    //     break;
    //     case 3:
    //     printf("\n cube no is = %d",a*a*a);
    //     break;
    //     case 4:
    //     printf("\n hexa no is = %x",a);
    //     break;
    //     default:
    //     printf("\n enter the correct choice ");
    //     break;
    // }

    //---------------------------------------------------------------------------------------------------//
    // enter a given character is a vovel or consonent

    // char c;
    // printf("\n enter the character");
    // scanf("%c",&c);

    // switch(c){
    //     case'a':
    //     case'e':
    //     case'i':
    //     case'o':
    //     case'u':
    //     case'A':
    //     case'E':
    //     case'I':
    //     case'O':
    //     case'U':
    //     printf("\n it is a vovel");
    //     break;
    //     default:
    //     printf("\n it is a consonent ");
    //     break;

    // }

    //-------------------------------------------------------------------------------------------------//
    //==================================WHILE LOOP=====================================================//
    // int n=1;
    // while(n<=255){
    //     printf("%d\n %c",n,n);
    //     n++;
    // }

    //------------------------------------------------------------------------------------------------------------------------------------//
    //================================== homework question ==================================================================================//

    //=================================== switch case ==============================================================================//

    // display the following menu and accept two no from user to do the following operation 1.addition 2.subtract 3.multiply 4.division

    // int a,b;
    // char c;

    
    // printf(" \n 1.addition \n2.subtract \n3.multiply \n4.division");
    // printf("\n enter your choice ");
    // scanf("%c",&c);
    

    // printf("enter the two no \n");
    // scanf("%d %d ",&a,&b);
    
  
    //  switch(c){
    //     case '1':
    //     printf("\n addition = %d",a+b);
    //     break;
    //     case '2':
    //     printf("\n subtraction = %d",a-b);
    //     break;
    //     case'3':
    //     printf("\n multiply = %d",a*b);
    //     break;
    //     case '4':
    //     printf("\n division = %d",a/b);
    //     break;
    //     default:
    //     printf("\n ebter the correct choice ");
    //     break;
    // }

    //----------------------------------------------------------------------------------------------------------------------------------//
    
    //draw program for following function 1.check even or odd 2.display sum of two entered number

    // int a,b;
    // char c;
    // printf("\n enter the choice \n1.find positivr oe negative");
    // scanf("%c",&c);
    // printf("enter the two no ");
    // scanf("%d %d",&a,&b);

    // switch(c){
    //     case '1':
    //     if(a%2==0){
    //         printf("\n no is even ");
    //     }
    //     else{
    //         printf("\n entred no is odd");
    //     }
    //     break;
    //     case '2':
    //     printf("\n sum of two no is = %d",a+b);
    // }


    //------------------------------------------------------------------------------------------------------------------------------------//
    
    //===================================== while loop =================================================================================//

    //-------------------------------------------------------------------------------------------------------------------------------------//

    // print 7s table 

    // int n;
    // n=1;
    // while(n<=10){
    //     printf("\n 7 * %d = %d \n",n,7*n);
    //     n++;
    // }


    //------------------------------------------------------------------------------------------------------------------------------------//
    
    //print 30-90 reverse order even no only and add all odd no 

    // int a=90;
    // int ans=0;
    // int total=0;
    // int b=0;
    // while(a>=30){
    //     if(a%2==0){
    //     printf("\n a = %d",a);
    //     a=a-2;
    //     while(a>=30){ 
    //         b=a-1;
    //         total=total+b;
           
    //     }
        
        
    // }
        
    // }
    //  printf("\n total = %d",total);

    // ------------------------------------------------------------------------------------------------------------------------------------//
    // PRINT 1 TO 100 NO AND FIND THE TOTAL ADDITION :

   
    // int a=1,total=0;
    // while(a<=100){
    //     printf("\n a=  %d ",a);
    //     a++;
    //     total=total+a;

    // }
    // printf("\n total= %d",total);


    //------------------------------------------------------------------------------------------------------------------------------//
    

    return 0;
}
