#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

int main()
{
    //--------------------------------------------------------------------------------------------------------------//
    //================================== array ===========================================================================//
    // enter five subject mark and calculate total and percentage

    // int a,arr[4],total=0;
    // float percentage=1;
    // printf("enter the size of array :");
    // scanf("%d ",&a);

    // for(int i=0;i<a;i++){

    //     scanf("%d",&arr[i]);
    // }

    // for(int i=0;i<a;i++){
    //     total=total+arr[i];
    //     }
    //      percentage=total/a;

    // printf(" \n your total marks = %d",total);
    // printf("\n percentage = %f",percentage );

    //--------------------------------------------------------------------------------------------------------------------------------------//
    // enter five array element print even no only

    // int a = 5;

    // int arr[5];
    // printf("\n enter the five no :");
    // for (int i = 0; i < a; i++)
    // {
    //     scanf("%d \n ", &arr[i]);
    // }
    // for (int i = 0; i < a; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         printf("%d \n", arr[i]);
    //     }
    // }
    //-------------------------------------------------------------------------------------------------------------------//
    //
    // enter array and copy on another array

    // int a[3],b[3];

    // for(int i=0;i<3;i++){
    //     scanf("%d \n ",&a[i]);
    // }
    // for(int i=0;i<3;i++){
    //     b[i]=a[i];

    //     printf("b=%d \n",b[i]);
    // }

    //-----------------------------------------------------------------------------------------------------------//
    //====================================== home work question ==========================================================//
    // add two array
    // int a[3],b[3],c[3];
    // for(int i=0;i<3;i++){
    //      scanf("%d \t",&a[i]);
    //  }
    //  for(int i=0;i<3;i++){
    //      scanf("%d \t",&b[i]);
    //  }
    //  for(int i=0;i<3;i++){

    //         c[i]=a[i]+b[i];

    //  }
    //   for(int i=0;i<3;i++){
    //      printf("%d \t",c[i]);
    //  }

    //===================================================================================================================//
    // enter 5 simalteneouslly  no and find greatest no

    // int a[5]={4,3,5,1,2};

    // int minNo=a[0];
    // for(int i=0;i<5;i++){
    //     if(a[i+1]<minNo){
    //         minNo=a[i];
    //     }
    // }
    // printf("\n minno no = %d",minNo);

    // int maxNo=a[0];
    // for(int i=0;i<5;i++){
    //     if(a[i+1]>maxNo){
    //         maxNo=a[i];
    //     }
    // }
    // printf("\n maxno no = %d",maxNo);

    //======================================== Home work question =================================================================================//

    // enter seven array element from user sorting assending order

    //  int a[7];
    //  printf("enter the array element : ");
    //  for(int i=0;i<7;i++){
    //      scanf("%d ",&a[i]);
    //  }
    //  for(int i=0;i<6;i++){
    //      for(int j=i+1;j<7;j++){
    //          if(a[j]<a[i]){
    //             int temp=a[j];
    //             a[j]=a[i];
    //             a[i]=temp;
    //          }
    //      }
    //  }
    //  for(int i=0;i<7;i++){
    //      printf("%d ",a[i]);
    //  }

    //------------------------------------------------------------------------------------------------//
    //=============================== 2D array ====================================================//

    // accept 12 element and make matrix 3*4

    // int a[4][3];

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         scanf("%d ",&a[i][j]);
    //     }

    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         printf("a[%d][%d] =  %d  ",i,j,a[i][j]);
    //     }
    //     printf("\n");
    // }

    //-------------------------------------------------------------------------------------------//
    // enter two matrix element and addition them 3*3

    // int a[3][3],b[3][3],c[3][3];
    // printf("enter the first matrix : \n");
    //   for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         scanf("%d ",&a[i][j]);
    //     }

    // }
    // printf(" first matrix : \n");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){

    //         printf(" %d  ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("enter the second matrix :\n ");
    //   for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         scanf("%d ",&b[i][j]);
    //     }

    // }
    // printf(" first matrix : \n");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf(" %d  ",b[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("addition  matrix : \n");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         c[i][j]=a[i][j]+b[i][j];
    //         printf("%d ",c[i][j]);
    //     }
    //     printf("\n");
    // }

    //--------------------------------------------------------------------------------------------------------------------------//
    // string take 5 names of student

    // char a[5][12];
    // int b;

    // for(int i=0;i<5;i++){

    //     for(int j=0;j<b;j++){
    //         scanf("%c ",&a[i][j]);
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<b;j++){
    //         printf("%c \n",a[i][j]);
    //     }
    //     printf("\n");
    // }

    //------------------------------------------------------------------------------------------------//
    // print unit matrix

    // int a[3][3];

    // printf(" first matrix : \n");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(i==j){
    //             printf(" 1 ");
    //         }
    //         else{
    //             printf(" 0 ");
    //         }
    //     }
    //     printf("\n");
    // }

    //----------------------------------------------------------------------------------------------------//
    //========================================= string function ===========================================//
    // strcpy copy function

    // int l;
    // char str1[12]="abcdefghiss",str2[12];
    // strcpy(str2,str1);
    // printf(" s2= %s \n ",str2);

    //------------------------------------------------------------------------------------------------//
    //============================ homework question ==========================================//
    // find transpose of matrix
    int a[3][3], b[3][3];
    printf("enter the first matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &a[i][j]);
        }
        
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[j][i];
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

    //--------------------------------------------------------------------------------------------------------------------------//89

    return 0;
}