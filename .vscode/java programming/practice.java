import java.util.*;
public class practice {

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int number[]=new int[n];
        for(int i=0;i<n;i++){
            number[i]=sc.nextInt();
        }
        boolean iaAscending=true;

        for(int i=0;i<n-1;i++){
            if(number[i]>number[i+1]){
                iaAscending=false;
            }
        }
        if(iaAscending==true){
            System.out.println("array is ascending order");
        }
        else{
            System.out.println("array is not ascending order");
        }
    }
}
