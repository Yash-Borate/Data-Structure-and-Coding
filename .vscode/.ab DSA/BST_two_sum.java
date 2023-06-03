import java.util.HashSet;
import java.util.Set;

public class BST_two_sum {
    
    public int ispair(Node root,int key){

        Set<Integer> set=new HashSet<>();

        boolean ans=isutil(root,key,set);

        return ans ? 1:0;
    }

    public boolean isutil(Node root,int sum,Set<Integer> set){

        if(root==null)
        return flase;

        if(isutil(root.left, sum, set)==true)
        return true;

        if(set.contains(sum-root.data)){
            return true;
        }
        set.add(root.data);

        return isutil(root.right, sum, set);
    }
}
