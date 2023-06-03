public class BST_search {
    public boolean Search(Node root,int x){

        if(root==null)return false;

        if(root.data==x) return true;

        if(root.data>x)return Search(root.left, x);

        return Search(root.right,x);
    }
}
