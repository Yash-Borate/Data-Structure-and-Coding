public class bt_height {

    public int height(Node root){
        if(root==null){
            return 0;
        }

        return Math.max(height(root.left),height(root.right))1;
    }
    public static void main(String args[]){

    }
    
}
