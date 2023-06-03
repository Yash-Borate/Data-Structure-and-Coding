public class BST_check_bst {
    
    //APPROACH 1

    // public static boolean isbst(Node root,int min,int max){
    //     if(root==null)
    //     return true;

    //     if(root.left < min || root.right > max )
    //     return false;

    //     return isbst(root.left, min, Node.data-1)&&isbst(root.right, Node.data+1, max);
    // }

    // APPROACH 2

    Node prev=null;

    boolean isbst(Node root){
        if(Node !=null){

            if(!isbst(root.left))
            return false;

            if(prev!=null && Node.data<=prev.data)
            return false;

            prev=Node;

            return isbst(root.right);
        }
        return true;
    }
}
