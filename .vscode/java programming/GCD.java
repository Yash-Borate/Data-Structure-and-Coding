import java.util.*;
public class GCD {

    public static int gcd(int a,int b){
        int g=1;
        for(int i=1; i<=a && i<=b ;i++){
            if(a%i==0 && b%i==0){
                g=i;
            }
        }
        return g;
    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();

        int PrintGcd=gcd(a, b);

        System.out.println("gcd of given no : "+PrintGcd);

    }
}
