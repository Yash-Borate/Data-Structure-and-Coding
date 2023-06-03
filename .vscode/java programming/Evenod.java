import java.util.*;
public class Evenod {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();

        if(n%2==0){
            System.out.println("even no ");
        }
        else{
            System.out.println("odd no");
        }

        int k=n+10;

        if(k%2==0){
            System.out.println("even no ");
        }
        else{
            System.out.println("odd no");
        }
    }
}
