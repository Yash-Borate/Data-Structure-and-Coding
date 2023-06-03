import java.util.*;
class Node{

    int data;
    Node left;
    Node right;

    public Node(int data){
        this.data=data;
    }
}

public class inorder_traversal {
    

    public static void inorder(Node root){
        if(root==null){
            return;
        }
        inorder(root.left);
        System.out.println(root.data);
        inorder(root.right);
        
    }
    public static void postorder(Node root){
        if(root==null){
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.println(root.data);
    }

    public static void preorder(Node root){
        if(root==null){
            return ;
        }
        System.out.println(root.data);
        preorder(root.left);
        preorder(root.right);
    }
    
    public static void main(String args[]){
        Node root=new Node(1);
        root.left=new Node(2);
        root.right=new Node(3);
        root.left.left=new Node(4);
        root.left.right=new Node(5);
        root.right.left=new Node(6);

        inorder_traversal Tree = new inorder_traversal();

        System.out.println("Inorder Traversal :");
        Tree.inorder(root);

        System.out.println("Postorder Traversal:");
        Tree.postorder(root);

        System.out.println("Preorder Traversal:");
        Tree.preorder(root);
    }
}
