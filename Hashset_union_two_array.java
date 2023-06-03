
import java.util.*;

public class Hashset_union_two_array {
    public static int Union_arrys(int a[],int b[]){
        Set<Integer> set =new HashSet<>();

        for(int element:a){
            set.add(element);
        }

        for(int element:b){
            set.add(element);
        }
        return set.size();
    }

    public static void main(String args[]){
        
    }
}
