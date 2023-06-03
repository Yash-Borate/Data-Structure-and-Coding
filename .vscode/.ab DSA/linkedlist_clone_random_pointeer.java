

public class linkedlist_clone_random_pointeer {
    class Node {
        int data;
        Node next;
        Node random;
        Node(int data){
            this.data=data;
            
        }
    }
    public static Node Random_Pointer(Node head){
        Node curr=head;

        while(curr!=null){
            Node temp=curr.next;
            curr.next=new Node(curr.data);
            curr.next.next=temp;
            curr=temp;
        }

        curr=head;

        while(curr!=null){
            if(curr.next!=null){
                curr.next.random=(curr.random!=null)?
                curr.random.next:null;
            }
            curr=curr.next.next;
        }
        Node Orig=head;
        Node copy=head.next;

        Node temp=copy;

        while(Orig!=null){
            Orig.next=Orig.next.next;
            copy.next=copy.next.next;

            Orig=Orig.next;
            copy=copy.next;
        }
        return temp;
    }
    
}
