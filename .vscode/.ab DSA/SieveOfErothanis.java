import java.util.*;
public class SieveOfErothanis {
    public static void main(String arga[]){
        boolean isprime[]=S_E(20);

        for(int i=0;i<=20;i++){
            System.out.println(i+" "+isprime[i]);
        }
    }

    static boolean[] S_E(int n){
        boolean []isprime=new boolean[n+1];
        
        Arrays.fill(isprime,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i*i<=n;i++){
            for(int j=2*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
        return isprime;
    }
}
