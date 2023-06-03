
class ll{
    node head;
    int size;

    ll(){
        size=0;
    }
    
    public class node {
    String data;
    node next;

    node(String data){
        this.data=data;
        this.next=null;
        size++;
    }

}

public void addfirst(String data){
    node newnode=new node(data);
   
    if(head==null){
        head=newnode;
    }
    newnode.next=head;
    head=newnode;
}

public void addlast(String data){
    node a=new node(data);
    node currNode=head;
    if(head==null){
        head=a;
        return;
    }
    while(currNode.next!=null){
        currNode=currNode.next;
    }
    currNode.next=a;
}

public void printList(){
    if(head==null){
        return;
    }
    node curr=head;
    while(curr!=null){
        System.out.print(curr+" ");
        curr=curr.next;
    }
}

public void deleteFirst(){
    node n;
    if(head==null){
        System.out.println("list is empty");
        return;
    }
    head=head.next;
}

public void deleteLast(){
 if(head==null){
    System.out.println("list is empty");
    return;
 }   
 if(head.next==null){
    head=null;
    return;
 }
 node secondLast=head;
 node Nextnode=head.next;

 while(Nextnode.next!=null){
    Nextnode=Nextnode.next;
    secondLast=secondLast.next;
 }
 secondLast.next=null; 



}
public static void main(String args[]){
    ll yash=new ll();

    yash.addfirst("yash");
    yash.addlast("borate");

    yash.printList();

}

}


