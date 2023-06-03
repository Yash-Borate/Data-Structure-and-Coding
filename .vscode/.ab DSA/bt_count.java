public class bt_count {
    
    public int count(Node root){
        if(root==null){
            return 0;
        }

        return count(root.left)+count(root.right)+1;
    }
    
    public static void main(String args[]){

    }
}
