import java.util.*;



public class minAndmax {
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();

    int num[]=new int [n];

    for(int i=0;i<n;i++){
        num[i]=sc.nextInt();
    }
    int min=Integer.MAX_VALUE;
    int max=Integer.MIN_VALUE;

    for(int i=0;i<n;i++){
        if(num[i]>min){
            max=num[i];
        }
        if(num[i]<max){
            min=num[i];
        }
    }
    System.out.println("max : "+max);
    System.out.println("min : "+min);
}
}
