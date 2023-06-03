import java.util.*;

public class greaterNo {

    public static void Greater(int a,int b){
        if(a>b){
            System.out.println(a+" greater no ");
        }
        else{
            System.out.println(b+" greater no ");
        }
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();

        Greater(a, b);
    }
}
