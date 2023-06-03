import javax.swing.SpringLayout;

public class ll {
    String data;
    int size;
    node head;

    ll(){
        size=0;
    }

    class node{
        String data;
        node next;

        node(String data){
            this.data=data;
            this.next=null;
        }
    }
    public void reverseL(){
        if(head==null){
            return;
        }
        node prev=null;
        node curr=head;
        node nextN;
        while(curr!=null){
            nextN=curr.next;
            curr.next=prev;
            curr=nextN;
            prev=curr;
            
        }
        head=prev;
    }

    public void addF(String data){
        node a=new node(data);
        if(head==null){
            head=a;
            return;
        }
        
        a.next=head;
        head=a;
    }
    public void printLidt(){
        if(head==null){
            return;
        }
        node yash=head;
        while(yash!=null){
            System.out.print(yash+" ");
            yash=yash.next;
        }
        System.out.println();
    }
    public static void main(String args[]){
        ll yash=new ll();

        yash.addF("yash");
        yash.addF("sandeep");
        yash.addF("hasrsh");
        yash.addF("ganesh");
        yash.printLidt();
        yash.reverseL();
        yash.printLidt();

    }

}
