import java.util.*;
public class circumFerence {

    public static double Circumfrernce(int r){
        double a=3.14;

        double c= a*r*r;

        return c;
    }
    public static void main(String arkgs[]){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
         double b = Circumfrernce(a);
         System.out.println(b);
    }
}
