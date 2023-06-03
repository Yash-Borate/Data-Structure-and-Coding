import java.util.*;

  
        public class BFS_teaversal {
            static class Node{
                int data;
                Node left;
                Node right;
                
                Node(int data){
                    this.data=data;
                    this.left=null;
                    this.right=null;
                }
            }
           
            public static void BFS(Node root,int level){
                if(root==null){
                    return;
                }
                if(level==1){
                    System.out.println(root.data+" ");
                }else if(level>1){
                    BFS(root.left,level-1);
                    BFS(root.right,level-1);
                }
            }
            public static int height(Node root){
                if(root==null)return 0;
                int lh = height(root.left);
                int rh = height(root.right);

                return 1+Math.max(lh,rh);
            }
            public static void main(String[]args){
                Node root=new Node(1);
                
                root.left=new Node(2);
                root.right=new Node(3);
                root.left.left=new Node(4);
                root.left.right=new Node(5);
                root.right.right=new Node(6);
               
    
                 System.out.println("BFS fun is:");
                 
                 int n = height(root);

                 for(int i=1;i<=n;i++){
                    BFS(root , i);
                 }
                
            }
        }
    
    
    
    
