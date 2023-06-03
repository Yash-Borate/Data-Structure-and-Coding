import java.util.ArrayDeque;
import java.util.Queue;

class Node{
    int data;
    Node next;
    Node down;

    Node(int data,Node next,Node down){
        this.data=data;
        this.next=next;
        this.down=down;
    }
}

public class flatten_linked_list {
    //this methode usese O(N) space and O(N) time
    public static Node convertll(Node head){
        Node curr=head;
        Queue<Node>q=new ArrayDeque<>();

        while(curr!=null){

            if(curr.next==null){
                curr.next=q.poll();
            }

            if(curr.down!=null){
                q.add(curr.down);
            }

            curr=curr.next;
        }

        return head;
    }

    public static void main(String args[]){

    }
}
