import java.util.*;

public class evenOdd {
    public static void evevodd(int n){
        if(n%2==0){
            System.out.println("even no ");
        }
        else{
            System.out.println("odd no");
        }
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        evevodd(n);

        int k=n+10;

        evevodd(k);
    }
}
