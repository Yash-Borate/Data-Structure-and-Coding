#include <iostream>
using namespace std;

int main()
{

  //----------------------------BASIC PROGRAM FOR PATTERN QUESTION------------------------------------------------------------//
  /*
          * * * *
          * * * *
          * * * *
          * * * *

  */

  // int row, col;
  // cin >> row >> col;
  //    for(int i=1;i<=row;i++){
  //        for(int j=1;j<=col;j++){
  //            cout<<" * ";
  //        }
  //         cout<<endl;
  //    }

  /*---------------------------------------HOLLOW RECTANGLE PATTERN------------------------------------------------------------*/
  /*

   * * * *
   *     *
   *     *
   * * * *
   
   */

  // int row, col;
  // cin >> row >> col;

  // for (int i = 1; i <= row; i++)
  // {
  //     for (int j = 1; j <= col; j++)
  //     {
  //         if (i == 1 || i == row || j == 1 || j == col)
  //         {
  //             cout << "*";
  //         }
  //         else
  //         {
  //             cout << " ";
  //         }
  //     }
  //     cout<<endl;
  // }

  //------------------------INVERTED HALF PERIMID--------------------------------------------------------------------------------//
  /*
   * * * * *
   * * * *
   * * *
   * *
   *
   */

  // int n;
  // cin >> n;

  // for (int i = n; i >= 1; i--)
  // {
  //     for (int j = 1; j <= i; j++)
  //     {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  //-------------------------HALF PIRAMID AFTER 180 DEGREE ROTATION-----------------------------------------------------------//
  /*

              *
            * *
          * * *
        * * * *
      * * * * *

*/
  // ASSUMING ROW NO

  // int n;
  // cin >> n;

  // for (int i = 1; i <= n; i++)
  // {
  //     for (int j = 1; j <= n; j++)
  //     {
  //         if (j <= n - i)
  //         {
  //             cout << " ";
  //         }
  //         else
  //         {
  //             cout << "*";
  //         }
  //     }
  //     cout << endl;
  // }

  // ASSUMING COL NO

  //   int n;
  // cin >> n;

  // for (int j = 1; j <= n; j++)
  // {
  //     for (int i = 1; i <= n; i++)
  //     {
  //         if (i <= n - j)
  //         {
  //             cout << " ";
  //         }
  //         else
  //         {
  //             cout << "*";
  //         }
  //     }
  //     cout << endl;
  // }

  //-------------------------------HALF PARIMID USING NO-----------------------------------------------------------------------//

  /*      1
          2 2
          3 3 3
          4 4 4 4
          5 5 5 5 5
  */

  // int n;
  // cin >> n;
  // for (int i = 1; i < n; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     cout << i << " ";
  //   }
  //   cout << endl;
  // }

  //---------------------------------SEQUENCE NO MATRIX PROGRAME---------------------------------------------------------------------//

  /*
      1
      2   3
      4   5   6
      7   8   9   10
      11  12  13  14  15
  */

  // int n;
  // cin>>n;
  // int counter =1;

  // for(int i=1 ; i<n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<counter<<" ";
  //     counter++;

  //   }
  //   cout<<endl;
  // }

  //------------------------------BUTTER FLY PATTERN---------------------------------------------------------------------------------//

  /*
      *             *
      * *         * *
      * * *     * * *
      * * * * * * * *
      * * * * * * * *
      * * *     * * *
      * *         * *
      *             *

  */

  // int n;
  // cin>>n;

  // for(int i=1;i<=n;i++){
  //   for(int j=1;j<=i;j++){
  //     cout<<"*";
  //   }

  //   int space=2*n-2*i;
  //   for(int j=1;j<=space;j++){
  //     cout<<" ";
  //   }

  //    for(int j=1;j<=i;j++){
  //     cout<<"*";
  // }
  // cout<<endl;
  // }

  // for(int i=n;i>=1;i--){
  //   for(int j=1;j<=i;j++){
  //     cout<<"*";
  //   }

  //   int space=2*n-2*i;
  //   for(int j=1;j<=space;j++){
  //     cout<<" ";
  //   }

  //    for(int j=1;j<=i;j++){
  //     cout<<"*";
  // }
  // cout<<endl;
  // }

  //----------------------------------------------------------------------------------------//
  // inverted pattern question 

  /*
      1 2 3 4 5 
      1 2 3 4 
      1 2 3 
      1 2 
      1
  */ 
 // logic :
 // row = 1 to n
 // col = n+1 - row no
 // element = print col no 

    // int n;
    // cout<<"enter the no :";
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //   for(int j=1;j<=n+1 -i;j++){
    //       cout<<j<<" ";
    //   }
    //   cout<<endl;
    // }


  return 0;
}
