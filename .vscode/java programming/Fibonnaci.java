import java.util.*;
public class Fibonnaci {

    public static void Fib(int n){
        int n1=0;
        int n2=1;
        System.out.println("fibonnaci no : "+n1);
        System.out.println("fibonnaci no : "+n2);
    
        for(int i=0;i<n;i++){
            int nextterm=n1+n2;
            System.out.println("fibonnaci no : "+ nextterm);
            n1=n2;
            n2=nextterm;
        }
    }

    public static void main(String args[]){

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        Fib(n);

    }
}
