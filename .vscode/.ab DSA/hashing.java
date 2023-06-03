import java.util.*;


public class hashing {
    public static void main(String args[]){

        HashSet <Integer> s=new HashSet <> (100);

        s.add(10);
        s.add(20);

        System.out.println(s);

        if(s.contains(10)){
            System.out.println("element is preseent");
        }
        else{
            System.out.println("element is not present");
        }

        s.remove(10);
        System.out.println(s);

        System.out.println(s.size());
        s.clear();

        System.out.println(s);

        System.out.println(s.isEmpty());

    }
}
