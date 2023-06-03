#include <iostream>
using namespace std;
#include<cmath>

int main()
{
   int n;
   cin>>n;
   int reverse=0;
   while(n>0){
       int lastdigit=n%10;
       reverse=reverse+pow(lastdigit,3);
       n/=10;
   }
   if(n==reverse){
       cout<<"your no is armstrong no "<<endl;
   }
   else{
       cout<<"your no is not armstrong no "<<endl;
   }
    return 0;
}