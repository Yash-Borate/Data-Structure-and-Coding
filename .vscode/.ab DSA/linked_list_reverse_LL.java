
 public class Node{
    Node head;
    int data;
    Node next;

    Node(int data){
        this.data=data;
        next=null;
    }
 }
public class linked_list_reverse_LL {
    

    // non recursive function for reverse linked list

    public static Node reverseLL(Node head){
        Node prev=null;
        Node curr=head;
        while(curr!=null){
            Node nextPtr=curr.next;
            curr.next=prev;
            prev=curr;
            curr=nextPtr;
        }
        return prev;
    }

    // recursive function for reverse linked list

    public Node reverseLl(Node head){
        if(head==null || head.next==null){
            return head;
        }
        Node newhead=reverseLl(head.next);

        Node headnext=head.next;

        headnext.next=head;
        head.next=null;

        return newhead;
    }

    public  void showL(Node head){
        Node curr=head;

        while(curr!=null){
            System.out.print(curr.data+" => ");
            curr=curr.next;
        }
    }


    public  void main(String args[]){

        Node head=null;
        Node first=null;
        Node second=null;

        Node head=new Node();
        Node first=new Node();
        Node second=new Node();

        head.data=10;
        head.next=first;
        
        first.data=20;
        first.next=second;
        second.data=30;

        
        

        showL(head);
        

        
    }
}