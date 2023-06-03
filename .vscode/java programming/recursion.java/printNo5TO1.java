import java.util.*;

public class printNo5TO1 {
    
    public static void Printn(int n){
        if(n==0){
            return;
        }
        System.out.println(n+" ");
        Printn(n-1);
    }
    
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        Printn(n);
           
    }
}
