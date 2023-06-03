#include<bits/stdc++.h>

using namespace std;

class node{
int id;
long int tel;
string name;
friend class hashing;

public:
node(){
    id=0;
    tel=0;
}
};
class hashing{
int i,idx;
node data[90];
long int t;
string n;
public:
void set_data(int size){
    cout<<"\n enter the id : ";
    cin>>i;

    cout<<"\n enter the name :  ";
    cin>>n;

    cout<<"\n enter the telephone no : ";
    cin>>t;

    idx=i%size;
    for(int a=0;a<size;a++){
        if(data[idx].id==0){
        data[idx].id=i;
        data[idx].name=n;
        data[idx].tel=t;
        break;
        }
        else{
            idx=(idx+1)%size;
        }
        

    }
}
void search(int size){
    int idx1,key,flag=0;
    cout<<"\n enter the id key to search :";
    cin>>key;
    idx1=key%size;
    for(int i=0;i<size;i++){
        if(data[idx1].id==key){
            flag=1;
            cout<<"\n key is found : "<<endl;
            cout<<"\n\t id \t name ";
            cout<<"\t telephone no : ";
            cout<<"\n\t"<<data[idx1].id<<"\t"<<data[idx1].name<<"\t"<<data[idx1].tel;
            break;
            
            
        }
        else{
            idx1=(idx1+1)%size;
        }
    }
    if(flag==0){
        cout<<"\n key is not found "<<endl;
    }
}
void display(int size){
    cout<<"\n\t id \t name ";
    cout<<"\t\t telephone no :";
    for(int i=0;i<size;i++){
        if(data[i].id!=0){
            cout<<"\n\t"<<data[i].id<<"\t"<<data[i].name<<"\t\t"<<data[i].tel;
            
        }
    }
}

void deleteE(int size){
    int idx2,key,flag=0;
    idx2=key%size;
    for(int i=0;i<size;i++){
        if(data[i].id==key){
            flag=1;
            data[i].id=0;
            data[i].name="";
            data[i].tel=0;
            break;
        }
        else{
            idx2=(idx2+1)%size;
        }
    }
    if(flag==0){
        cout<<"\n element not deleted , please enter the correct id : "<<endl;
    }
}
};
int main(){
    hashing a;
    int size,ch;
  
    size=20;

    do{
        cout<<"\n 1.create \n 2.search \n 3.display \n 4.delete \n 5.exit "<<endl;
        cout<<"\n enter the choice : "<<endl;
        cin>>ch;

        switch(ch){
            case 1 :
            a.set_data(size);
            break;
            case 2 :
            a.search(size);
            break;
            case 3:
            a.display(size);
            break;
            case 4:
            a.deleteE(size);
            break;
            case 5 :
            exit(0);
            

        }
    }
    while(ch!=5);


    return 0;
}
