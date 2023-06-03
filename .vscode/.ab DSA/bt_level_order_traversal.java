public class bt_level_order_traversal {
    

    public void curLevel(Node root,int level){
        if(root==null){
            return;
        }
        if(root==level){
            System.out.print(root.data," ");
        }
        else if(level>1){
            curLevel(root.left, level-1);
            curLevel(root.right, level-1);

        }
    }
}
