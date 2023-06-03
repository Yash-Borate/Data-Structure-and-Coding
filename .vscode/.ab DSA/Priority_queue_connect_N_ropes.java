import java.util.PriorityQueue;

public class Priority_queue_connect_N_ropes {

    public static int minCoast( int a[]){
        int n=a.length;
        PriorityQueue<Integer> p=new PriorityQueue<>();

        for(int i=0;i<n;i++){
            p.add(i);
        }
        int ans=0;
        while(p.size()>1){
            int first=p.poll();
            int second=p.poll();
            int sum=first+second;
            ans+=sum;
            p.add(sum);
        }
        return ans;
    }
    public static void main(String args[]){
        int a[]={1,5,3,4,7,2};

        System.out.println(minCoast(a));
    }
}
