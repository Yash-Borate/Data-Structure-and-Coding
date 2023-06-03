import java.util.*;

public class fun {
    public static void FunCTion(){
        Scanner sc=new Scanner(System.in);
        int n;
        int c;
        int pos=0;
        int neg=0;
        int Zero=0;
        do{
            System.out.println("enter the no :");
            n=sc.nextInt();
            
            if(n>0){
                pos++;
            }
            else if(n<0){
                neg++;
            }
            else {
                Zero++;
            }
            System.out.println("do you want to add next no if yes (1) no (0)");
            c=sc.nextInt();
        }
        while(c ==1);

        System.out.println("pos = "+pos + " negs ="+neg+" zeros ="+Zero);
    }
    public static void main(String args[]){

        FunCTion();
    }
}
