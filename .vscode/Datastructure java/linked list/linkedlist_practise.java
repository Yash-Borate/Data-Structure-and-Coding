import java.util.*;
public class linked_list{
node head;
class node{
    String data;
    node next;

    node(String data){
        this.data=data;
        this.next=null;
    }


public void addfirst(String data){
    node a=new node(data);
    if(head==NULL){
        head=a;
        return;
    }
    a.next=head;
    head=a;
}

}
}