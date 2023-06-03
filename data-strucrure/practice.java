import java.util.*;

public class practice{


    public static void main(String args[]){

        int num = 4325;
        String res = ""+num;

        int arr[]=new int[res.length()];
        for(int i=0;i<res.length();i++){
            arr[i]=res.charAt(i)-'0';
        }
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            int ans +=arr[i];
            if(ans%2!=0)return ans;
            int curr1=0;
            int curr2=0;
            if(arr[i]%2==0){
                curr+=arr[i];
            }
            
        }
    }
}