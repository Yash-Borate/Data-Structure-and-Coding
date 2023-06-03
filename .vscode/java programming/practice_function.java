import java.util.*;

public class practice_function {
    
    public static int sumNo(int a,int b){
        int sum=a+b;
        return sum;
    }
    public static int multPliction(int c,int d){
        int mul=c*d;
        return mul;
    }

    public static void checkEorO(int e){
        if(e%2==0){
            System.out.println("no is even");
        }
        else{
            System.out.println("no is odd");
        }
    }
    public static void main(String args[]){

        Scanner sc= new Scanner(System.in);
        System.out.println("enter the value of a and b");
        int a=sc.nextInt();
        int b=sc.nextInt();

        int s=sumNo(a,b);
        System.out.println("value of addition :"+s);

        System.out.println("enter the value of c and d :");
        int c=sc.nextInt();
        int d=sc.nextInt();

        int m=multPliction(c, d);
        System.out.println("value of multiplication : "+m);

        System.out.println("enter the value of e :");
        int e=sc.nextInt();

        checkEorO(e);

        


    }
}
