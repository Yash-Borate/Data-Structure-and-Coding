import java.util.*;

public class oddNo {

    public static void OddNO(int n){
        for(int i=1;i<=n;i++){
            if(i%2 !=0 ){
                System.out.println(i);
            }
            
        }
    }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        OddNO(n);
    }    
}
