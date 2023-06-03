import java.util.*;


public class Eliglibillity {

    public static void Eligible(int n){
        if(n>=18){
            System.out.println("eligible for voting ");
        }
        else{
            System.out.println("not eligible for voting");
        }
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        Eligible(n);
    }
}
