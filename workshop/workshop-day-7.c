#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

// ------------------------------------------------------------------------------------------------------ //
// call by reference - pointer function

// int cadd(int *p,int *q){
//     return(*(p)+*(q));
// }

// int main(){
//     int a=20,b=10;
//     int *ptr=&a,*atr=&b;
//     int add=cadd(&a,&b);
//     printf("\n addition = %d",add);
//     return 0;
// }

//------------------------------------------------------------------------------------------------------//
// array and pointer

// int main(){
//     int a[5];
    
    
//     printf("\n enter the value of array : ");
//     for(int i =0;i<5;i++){
        
//         scanf("%d ",&a[i]);
//         int *ptr=&a[i];
        
//         ptr ++;
//     }
//     for(int i=0;i<5;i++){
//         int *ptr=&a[i];
//         printf("\n a %d \t ptr = %d",i,*(ptr));
//     }

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------------//

// please complete the problem

//  ARRAY OF POINTER

// int main(){
//      int a[4];
//      int *ptr[4];

//     for(int i=0;i<4;i++){
        
//         printf("\n ptr = %d ",*(ptr[i]));

//     }

//     return 0;
//  }

//--------------------------------------------------- H W -------------------------------------------------------------//
// accept six subject mark , printf marks and calculate total ,and percentage 
//----------------------------------------------------------------------------------------------------------------------------//

// make problem in struct and print in pointer

// struct movie{

//     char name[20];
//     int n;

// };

// int main(){
    
//     struct movie *p1;
    

//     printf("name=%s \n time=%d",p1->name,p1->n);

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------//

// **pointer 

// int main(){
//     int a=5,*p,**ptr;
//     p=&a;
//     ptr=&p;
//     printf("\n *p= %d\n **ptr=%d \n a=",*p,**ptr,a);

//     return 0;
// }

//------------------------------------------------------------------------------------------------//
// command line program 

// int main(int c,char *v[]){
    
//     int no;
//     printf("%d \n ",c);
//     printf("%s \n ",v[0]);
//     printf("%s \n",v[1]);
//     no=atoi(v[1]);
//     printf("%d \n ",no*no);

    
//     return 0;
// }

//----------------------------------------------------------------------------------------------------//
