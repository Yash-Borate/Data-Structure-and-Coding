import java.util.*;



public class SumNAtural {

    public static void SumN(int i,int n,int sum){
        
        if(i == n){
            sum+=i;
            System.out.println(sum);
            return;
        }
        sum+=i;
        SumN(i+1,n,sum);

    }

    public static void main(String args[]){

        SumN(1,5,0);
    }
}
