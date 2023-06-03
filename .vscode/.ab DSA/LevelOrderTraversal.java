import java.util.*;
import java.util.Scanner;
import java.util.Queue;

class Node{
    int data;
    Node left;
    Node right;
    public Node(int data){
        this.data=data;
        this.left=null;
        this.right=null;
    }
}

class Fun{

    public void DFS(Node root){
        if(root==null)return;
        DFS(root.left);
        DFS(root.right);
        System.out.print(root.data + "  ");
        
    }

    public void BFS(Node root ,int level){
        if(root==null)return;

        if(level==1)System.out.print(root.data+" ");

        else if(level>1){
            BFS(root.left,level-1);
            BFS(root.right,level-1);
        }
        
    }

    public int height(Node root){
        if(root==null)return 0;

        int lh = height(root.left);
        int rh = height(root.right);

        return 1+Math.max(lh,rh);
    }

}


 class creation_tree{
    static Scanner sc;
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
}
//     10
//   20  30
// 40

public class LevelOrderTraversal {
    public static void main(String args[]){

       Scanner sc= new Scanner(System.in);
       creation_tree create = new creation_tree();
       System.out.println("Create tree :");
       create.createTree();
       Node root = new Node();
       root = create.createTree();
        Fun action=new Fun();
        
        System.out.println("DFS solution :");
        action.DFS(root);
        System.out.println();
        System.out.println("BFS solution :");
        int n=action.height(root);

        for(int i=1;i<=n;i++){
            action.BFS(root, i); 
        }
    }
}


