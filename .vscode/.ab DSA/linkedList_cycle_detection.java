
public class linkedList_cycle_detection{
    class Node{
        int data;
        Node next;
    }
    public static Node CycleDetection(Node head){
        Node slow=head;
        Node fast=head;


        while(fast.next!=null || fast!=null){
            fast=fast.next.next;
            slow=slow.next;
            if(fast.data==slow.data){
                return slow;
            }
        }
       return null;

    }

    public static Node DetectFirstNode(Node head){
        Node middle=CycleDetection(head);
        Node fast=head;

        while(fast!=middle)
        {
            fast=fast.next;
            middle=middle.next;
        }
        return middle;
    }

    public static Node Deletion_cycle(Node head){
        Node slow=CycleDetection(head);
        Node fast=head;

        while(fast.next.data!=slow.next.data){
            fast=fast.next;
            slow=slow.next;
        }
        slow.next=null;

        return head;
    }
    public static void main(String args[]){

    }

}