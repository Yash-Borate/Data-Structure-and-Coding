import java.util.LinkedList;
import java.util.Queue;

import org.w3c.dom.Node;

public class bt_levelorder_queue {
    
    public void levelorder(Node root){
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            Node curr=q.poll();
            System.out.print(curr.data+" ");

            if(curr.left!=null){
                q.add(curr.left);
            }
            if(curr.right!=null){
                q.add(curr.right);
            }
        }
    }

    public static void main (String args[]){
        
    }
}
