import java.util.*;
class Node {
    int data;
    Node left,right;
    Node(int data){
        this.data=data;
    }
}
public class BTLevelOrderQueue {
     public static void levelOrderQueue(Node root){
        Queue<Node> q=new LinkedList<>();
        q.add(root);

        while(!q.isEmpty()){
            Node current=q.poll();
            System.out.print(current.data+" ");
            if(current.left!=null){
                q.add(current.left);
            }
            if(current.right!=null){
                q.add(current.right);
            }

        }
    }
    public static int height(Node root){
        if(root==null){
            return 0;
        }
        return 1+ Math.max(height(root.left),height(root.right));
    }
    public static void main(String[]args){
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.left=new Node(6);

        
        levelOrderQueue(root);
    }
}