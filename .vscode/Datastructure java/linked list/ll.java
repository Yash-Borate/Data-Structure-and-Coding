public class ll {

    class node{
        String data;
        node next;

        node(String data){
            this.data=data;
            this.next=null;
        }
    }

    // add element linked list

   public void Addele(String data){
    node newNode=new node(data);
    
    if(head==null){
        head=newNode;
    }

    newNode.next=head;
    head=newNode;

   } 


   public void addlast(String data){
    node a=new node(data);
    if(head==null){
        head=a;
        return;
    }

    node currhead=head;
    while(currhead.next!=null){
        currhead=currhead.next;
    }
    currhead.next=a;

   }

   public void printList(){
        node currNode=head;
        while(currNode!=null){
            System.out.print(currNode+" ");
            currNode=currNode.next;
        }

   }
    public static void main(String args[]){
        ll list=new list();

        list.Addele("10");
        list.Addele("20");

        list.addlast("30");
    }
    
}
