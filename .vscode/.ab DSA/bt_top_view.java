import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Map;
import java.util.TreeMap;

static class pair{
    int hd;
    Node node;
    public pair(int hd,Node node){
        this.node=node;
        this.hd=hd;
    }
}

public class bt_top_view {
    static ArrayList <integer> topview(Node root){
        Queue<Pair> q=new ArrayDeque<>();
        Map<Integer,Integer> map=new TreeMap<>();
        q.add(new pair(0, root));
        while(!q.isEmpty()){
            Pair curr=q.poll();
            if(!map.containsKey(curr.hd)){
                map.put(curr.hd, curr.node.data);
            }
            if(curr.node.left!=null){
                q.add(new pair(curr.hd-1, curr.node.left));
            }
            if(curr.node.right!=null){
                q.add(new pair(curr.hd+1, curr.node.right));
            }
        }

        ArrayList<Integer>ans=new ArrayList<>();
        for(Map.Entry<Integer,Integer>entry:map.entrySet()){
            ans.add(entry.getValue());
        }
        return ans;
    }
}
