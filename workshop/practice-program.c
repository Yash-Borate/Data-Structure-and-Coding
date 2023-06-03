#include <stdio.h>


int main()
{ 
 
 float gs,hra,da , ta,basicSalary;
 printf("enter the salary of employ : ");
 scanf("%f ",& gs);

 hra=(gs*5)/100;
 ta=(gs*10)/100;
 da=(gs*15)/100;
 basicSalary=gs-(hra+ta+da);


 printf("your salary of employ is : %f ",gs);
 printf("\n your tax of hra is = %f ",hra);
 printf("\n your ta tax is : %f ",ta);
 printf("\n your da tax is = ",da);
 printf("\n your basicsalary is = %f ",basicSalary );
 


    return 0;
}