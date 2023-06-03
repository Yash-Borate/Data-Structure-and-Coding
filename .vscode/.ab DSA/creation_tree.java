 
 import java.util.*;

 class Node{
    int data;
    Node left ,right;

    public Node(int data){
        this.data=data;
    }
 }

 public class creation_tree{
    static Scanner sc=null;
    public static Node createTree(){
        Node root=null;
    
        System.out.println("enter the value of Node:");
        int data=sc.nextInt();

        root=new Node(data);
        if(data== -1) return null;

        System.out.println("enter data for left:");
        root.left=createTree();

        System.out.println("enter data for right : ");
        root.right=createTree();

        return root;
    }

    
    public static void main(String args[]){
        sc=new Scanner(System.in);
        createTree();
    }
 }




 