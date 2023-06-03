class Node{
    int data;
    Node next;
    public Node(int data){
        this.data=data;
    }
}

public class Queue {
    Node front,rear;

    void enqueue(int data){
        Node newNode=new Node(data);
        if(front==null){
            front=rear=newNode;
            return;
        }
        rear.next=newNode;
        rear=newNode;
        return;
    }

    int dequeue(){
        if(front==null){
            System.out.println("size of queue is full");
            return -1;
        }
        int result=front.data;
        front=front.next;
        return result;
    }

    public static void main(String args[]){
        
    }

}
