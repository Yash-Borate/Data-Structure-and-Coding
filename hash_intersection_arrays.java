import java.util.*;

public class hash_intersection_arrays {
    public int intersection(int a[],int b[]){
        Set<Integer> set=new HashSet<>();

        int count=0;

        for(int element:a){
            set.add(element);
        }

        for(int element:b){
            if(set.contains(element)){
                count++;
                set.remove(element);
            }
        }
        return count;
    }
}
