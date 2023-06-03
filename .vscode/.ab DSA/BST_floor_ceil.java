public class BST_floor_ceil {
    
    public int floor(Node root,int key){
        int ans=Integer.MAX_VALUE;

        while(root!=null){

            if(root.data==key){
                return root;
            }

            if(root.data > key){
                root=root.left;
            }
            else{
                ans=root.data;
                root=root.right;
            }
        }
        return ans;
    }

    public int ceil(Node root,int key){
        int ans=Integer.MIN_VALUE;

        while(root!=null){

            if(root.data==key){
                return root;
            }

            if(root.data > key){
                ans=root.data;
                root=root.left;
            }
            else
            root=root.right;
        }
        return ans;
    }
}
