import java.util.HashMap;

public class hashMap_largest_subarray{
    
    public static void largest_subarray(int a[]){
        int carrysum=0;
        int start=0;
        int end=-1;
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<a.length;i++){
            if(a[i]==0){
                a[i]=-1;
            }
        }
        for(int i=0;i<a.length;i++){
            carrysum+=a[i];
            if(carrysum==0){
                start=
                end=i;
            }
            map.put(carrysum, i);
        }
    }
}