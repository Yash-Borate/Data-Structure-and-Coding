public class bt_diameter {
    
    public int diameter(Node root){
        
        if(root==null)return 0;
        int dl=diameter(root.left);
        int dr=diameter(root.right);
        int curr=height(root.left)+height(root.right)+1;

        return Math.max(curr,Math.max(dl,dr));
    }

    public int height(Node root){
        if(root==null)return 0;
        return Math.max(height(root.left),height(root.right))+1;
    }
}
