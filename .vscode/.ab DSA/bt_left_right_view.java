import java.util.ArrayList;

public class bt_left_right_view {
    
    // FOR LEFT VIEW OF BINARY TREE 
    
    public void printLeftView(Node root,ArrayList list,int level){
        if(root==null){
            return;
        }
        if(list.get(level)==null){
            list.add(root);
        }
        printLeftView(root.right, list, level+1);
        printLeftView(root.left, list, level+1);
    }

    
    // FOR RIGHT VIEW OF BINARY TREE 

    // public void rightview(Node root,ArrayList list,int level){
    //     if(root==null){
    //         return;
    //     }
    //     if(list.get(level)==null){
    //         list.add(root);
    //     }
    //     rightview(root.right, list, level+1);
    //     rightview(root.left, list, level+1);
    // }


    // BASIC FUNCTION FOR VIEW PRINTING 
    public void leftview(Node root){
        ArrayList<Node> list=new ArrayList<>();

        printLeftView(root,list,0);

        for(Node curr:list){
            System.out.print(curr.data+" ");
        }
    }
}
