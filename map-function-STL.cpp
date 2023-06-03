#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int> marks;
    
    marks["yash"]=90;
    marks["karan"]=88;
    marks["aditya"]=67;

    map<string,int>::iterator iter;
    
    marks.insert({"ganesh",76});

    cout<<marks.size()<<endl;;
    
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }


    return 0;
}