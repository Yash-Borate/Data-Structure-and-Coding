public class BST_deletion {
    public static Node deleteNode(Node root,int key){
        if(root==null)
        return null;

        if(key<root.data)
        root.left=deleteNode(root.left, key);

        else if(key>root.data)
        root.right=deleteNode(root.right, key);

        else{
            if(root.left==null)
            return root.right;

            else if(root.right==null)
            return root.left;

            root.data=minValue(root.right);

            root.right=deleteNode(root.right, key);
        }
    }

    static int minValue(Node root){
        int minV=root.data;
        while(root.left!=null){
            minV=root.left.data;
            root=root.left;
        }
        return root;
    }
}
