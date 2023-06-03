public class bt_maxNode {
    public int MaxNode(Node root){
        if(root==null){
            return Integer MIN_VALUE;
        }
        return Math.max(root.data,Math.max(MaxNode(root.left),MaxNode(root.right)));
    }
}
