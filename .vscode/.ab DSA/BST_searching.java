public class BST_searching {
    
    public boolean search(Node root,int key){
        if(root==null){
            return false;
        }
        if(root.data==key)
        return true;

        if(root.data<key)
            return search(root.right,key);

        return search(root.left,key);
    }
}
