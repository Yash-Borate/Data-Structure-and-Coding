// public class Node{
//     int data;
//     Node next; 
//     Node(int data){
//         this.data=data;
//         next=null;
//     }
// }

// public class linked_list  {

//     public static void traverse(Node head){
//         Node curr=head;
    
//         while(curr!=null){
//             System.out.println(curr.data);
//             curr=curr.next;
//         }
//        }

//        public static void insert(Node head,int data,int pos){
//         Node curr=new Node(data);

//         if(pos==0){
//             curr.next=head;
//             head=curr;
//             return;
//         }
//         Node prev=head;

//         for(int i=0;i<pos-1;i++){
//             prev=prev.next;
//         }
//         curr.next=prev.next;
//         prev.next=curr;
//        }

//        public static void deleteNode(Node head,int pos){
//         if(pos==0){
//             head=head.next;
//             return;
//         }

//         Node prev=head;

//         for(int i=0;i<pos-1;i++){
//             prev=prev.next;
//         }
//         prev.next=prev.next.next;

//        }
//     public static void main(String args[]){
//         Node head=new Node(10);
//         traverse(head);
//     }

//     public static void deleteLast(Node head){
//         Node curr=head;

//         if(head==null){
//             return;
//         }

//         if(head.next==null){
//             head==null;
//         }

//         while(curr.next.next!=null){
//             curr=curr.next;
//         }
//         curr.next=null;
//     }
  
// }


class linked_list{
    class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        this.next=null;
    }
}
    public void findNode(String data){
         if(head.next==null){
            return null;
         }
         int size=0;
         currentNode=head;
         while(currentNode!=null){
            currentNode=currentNode.next;
            size++;
         }
         int indextoSearch=size-n;
         Node previous=head;
         int i=1;
         while(i<indextoSearch){
              previous=previous.next;
              i++;
         }
         previous.next=previous.next.next;
         return head;
    }
}