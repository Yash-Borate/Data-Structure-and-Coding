import java.util.ArrayDeque;
import java.util.LinkedList;
import java.util.Queue;

public class Queue_library {
    public static void main(String args[]){
        Queue<Integer> q=new ArrayDeque<>();
        Queue<Integer> Q=new LinkedList<>();

        q.offer(10);
        q.offer(20);

        System.out.println(q.poll());
        System.out.println(q.peek());
        System.out.println(q.size());
        System.out.println(q.isEmpty());
        System.out.println(q.remove());
        System.out.println(q.remove());
    }
}
