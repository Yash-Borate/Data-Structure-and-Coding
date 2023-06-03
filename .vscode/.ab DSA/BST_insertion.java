public class BST_insertion {
    
    public Node insertion(Node root,int key){

        //RECURSIVE WAY 

        // if(root==null)
        //     return new Node(key);
        
        // if(root.data<key)
        //     root.right=insertion(root.riht, key);
        
        // else if(root.data>key)
        // root.left=insertion(root.right, key);

        // return root;

        //ITERATIVE WAY

        Node newNode=new Node (key);
        Node curr=root;
        Node parent=null;

        while(curr!=null){
            parent =curr;
            
            if(key<curr.key)
            curr=curr.left;
            else
            curr=curr.right;
        }
        if(parent==null)
        parent =newNode;

        else if(key<parent.key)
            parent.left=newNode;
        
        else
        parent.right=newNode;

        return root;

    }
}

