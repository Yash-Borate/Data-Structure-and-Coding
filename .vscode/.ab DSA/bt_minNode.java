public class bt_minNode {
    public int MinNode(Node root){
    if(root==null){
        return Integer MIN_VALUE;
    }
    return Math.min(root.data,Math.min(MinNode(root.left),MinNode(root.right)));
}
}
