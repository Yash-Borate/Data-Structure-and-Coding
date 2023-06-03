import java.util.*;

public class hashSet_distinctElement {

    public static int CountDistinct(int a[]){
        Set<Integer> set= new HashSet<>();

        for(int element: a){
            set.add(element);
        }
        return set.size();
    }
        public static void main(String args[]){

            int a[]={5,4,5,4,2,2,3,1,2,4,5};
            System.out.println(CountDistinct(a));
        }
}
