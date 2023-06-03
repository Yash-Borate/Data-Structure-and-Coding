import java.util.Scanner;

public class stock_buy_and_sell {

    public static int MaxProfit(int a[]){
        int maxp=0;
        int minSofar=a[0];

        for(int i=0;i<a.length;i++){

            minSofar=Math.min(minSofar, a[i]);
            int profit=a[i]-minSofar;
            maxp=Math.max(profit, maxp);

        }
        return maxp;
    }
    public static void main(String args[]){

        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();

        int a[]=new int[n];

        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }

        int profit=MaxProfit(a);

        System.out.println("maxProfit: "+ profit );
    }
}
