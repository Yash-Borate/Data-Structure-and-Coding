#include <stdio.h> 
#include<conio.h>

// simple program for c language :  

// int main(){
//     printf("*\n*\t*\n*\t*\t*\n");
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------//

// accept any value and print it

//  int main(){
//      int a;
//      printf("enter the value of a =");
//      scanf("%d ",&a);
//      printf("%d",a);
//      return 0; }

// accept any value of intger and convert into the int , octal,hexadecimal;

// int main(){
//     int a;
//     scanf("%d ",&a);
//     printf("%d \n %o \n %x",a,a,a);
//     return 0;
//}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

// enter five subject and calculate total marks and percentage

// int main(){
//     int a,b,c,d,e;
//     int total;
//     float percentage;

//     scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
//     total=a+b+c+d+e;

//     printf(" your total marks of all subject is =");
//     printf("%d ",total);

//     percentage=(total/5);

//     printf(" your percentage is");
//     printf("%f",percentage);

//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------------------//

// initialize 2 float value value addition them

// int main(){
//     float a,b,c;
//     a=1.1;
//     b=2.2;
//     c=a+b;

//     printf("%f",c);
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------------------------------------//

// calculate area of circle and circumference

// int main(){
//     float r,areac,circumference;

//     scanf("%f ",&r);
//     areac=3.14*r*r;

//     printf("%f ",areac );
//     circumference=2*3.14*r;
//     printf("%f",circumference);

//     return 0;
// }
//----------------------------------------------------------------------------------------------------------------------------------------------//

// gst program ==cgst and gst

// int main()
// {
//     float a, gst, cgst,total;
//     printf("\n enter the value of object = ");
//     scanf("%f ", &a);
//     gst = (a * 12) / 100;
//     cgst = (a * 10) / 100;

//     printf("\n gst is = ");
//     printf("%f ",gst);

//     printf("\n your cgst = ");
//     printf("%f ",cgst);
//     total=gst+cgst;

//     printf("\n your total tax = ");
//     printf("%f ",total);
//     return 0;
// }

//ANOTHER PROGRAM FOR GST AND CGST IS :

    //int main(){
    // float r , gst , cgst , total,price;
    // scanf("%f ",&r);
    // gst=(r*10)/100;
    // cgst=(r*12)/100;
    // total=gst+cgst;
    // price=r+total;

    // printf("\n your value of product = %f",r);
    // printf("\n your gct tax is = %f",gst);
    // printf("\n your cgst tax is = %f ",cgst);
    // printf("\n total tax = %f",total);
    // printf("\n your main price of product is = %f ",price);
    // return 0;
    // }
//-------------------------------------------------------------------------------------------------------------------------//
// program to swap to no

// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     // int term=a;
//     // a=b;
//     // b=term;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("swaped no is a = ");
//     printf("%d", a);
//     printf("\n swped no b = ");
//     printf("%d ", b);

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------//
// write a program to enter the gross salary calaulate basic salary , hra , da , ta

// int main(){
//     float salary,basicSalary,hra,da,ta;
//     printf("enter the salary of employ \n");
//     scanf("%f",&salary);

//     hra=(salary*5)/100;
//     da=(salary*15)/100;
//     ta=(salary*10)/100;
//     basicSalary=salary-(hra+da+ta);
//     printf("\nhra= %f ",hra);
//     printf("\nda= %f",da);
//     printf("\nta = %f",ta);
//     printf("\nyour basic salary is ");
//     printf("%f",basicSalary);

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------//

// comapre two no using conditional operator

// int main(){
//     int a,b;
//     a=10;
//     b=20;

//     (a>b)?printf("a is greater than b "):printf("b is greater than a");
//     return 0;
//     }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

// getchar and putchar == it gives only one char

// int main()
// {
//     char y;
//     y = getchar();
//     putchar(y);
//     return 0;
// }
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------//

// faranhite to celcius , degree program

// int main(){

//     float r , degree ;
//     printf("enter the value in farenhite :");
//     scanf("%f ",&r );

//     printf("enterred value in farenhite is :");
//     degree=(r-32)(5/9);
//     printf("/n the value in degree is : %f ",degree,"\t degrees ");


//     return 0;
// }