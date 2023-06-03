#include<iostream>
using namespace std;

// find one non repeating element in array 
//----------------------------------------------------------------------------------------------------------------
// int main()
// {   int res=0;
//     int arr[7]={5,1,4,1,3,5,4};
//     for(int i=0;i<7;i++){
//         res=res^arr[i];
//     }
//     cout<<res<<endl;
//     return 0;
// }

//============================================================================================================
//find two non repeating element in ana array
//--------------------------------------------------------------------------------------------------------------------------

int main(){
    int res=0;
    int arr[8]={5,1,4,3,2,1,4,5};
    for(int i=0;i<8;i++){
        res=res^arr[i];
    }
    int temp=res;
   
    for(int i=0;i<8;i++){

    }
    return 0;
}