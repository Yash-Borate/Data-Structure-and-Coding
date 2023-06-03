

public class linkedList_palindrme {
    

    public static boolean ispali(Node head){
        if(head==null){
            return true;
        }
        Node mid=middle(head);

        Node last=reverse(mid.next);

        Node curr=head;

        while(last!=null){
            if(last.data!=curr.data){
                return false;
            }
            last=last.next;
            curr=curr.next;
        }
        return true;
    }

    public static Node reverse(Node head){
        if(head==null || head.next==null){
            return head;
        }
        Node newhead=reverse(head.next);
        Node headnext=head.next;
        headnext.next=head;
        head.next=null;

        return newhead;

    }

    public static Node middle(Node head){
        Node slow=head;
        Node fast=head;

        while(fast==null || fast.next!=null){
            fast=fast.next.next;
            slow=slow.next;
        }
        return slow;
    }

    public static void main(String args[]){

    }
}
