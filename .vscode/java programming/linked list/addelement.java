import java.util.*;

public class addelement {
    public static  void main(String args[]){
        LinkedList<String> a=new LinkedList<String>();
        a.add("yash");
        a.add("sayli");
        a.add("sandeep");
        a.add("harsh");
        a.addFirst("karan");
        a.addLast("ganesh");

        a.add(3,"saysha");


        System.out.println(a);

        a.remove();
        a.removeLast();
        a.removeFirst();
        a.remove(2);

        a.set(2,"yash");

        System.out.println(a);
    }
}
