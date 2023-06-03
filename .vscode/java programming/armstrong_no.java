import java.math.MathContext;
import java.util.*;

public class armstrong_no {

    static void Arm(int n){
        int a=n;
        int result=0;
        int last;
        while(n!=0){
            last=n%10;
            result+=Math.pow(last,3);
            n/=10;
        }
        if(a==result){
            System.out.println("arm strong no");
        }
        else{
            System.out.println("not arm strong no");
        }
    }

    public static void main(String args[]){
        Arm(153);
    }
}

