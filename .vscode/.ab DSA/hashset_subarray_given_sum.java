import java.util.*;

public class hashset_subarray_given_sum{

    public static void subarray(int a[],int sum){
        int carrysum=0;
        int end=-1;
        int start=0;

        HashMap<Integer,Integer> map=new HashMap<>();

        for(int i=0;i<a.length;i++){
            carrysum+=a[i];

            if(carrysum-sum==0){
                start=0;
                end=i;
                break;
            }
            
            if(map.containsKey(carrysum-sum)){
                start=map.get(carrysum-sum)+1;
                end=i;
                break;
            }

            map.put(carrysum, i);
        }

        if(end==-1){
            System.out.println("not found");
        }
        else{
            System.out.println(start+" "+end);
        }
    }

    public static void main(String args[]){
        
    }
}