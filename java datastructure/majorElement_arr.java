
import java.util.*;
public class majorElement_arr {
    public static int majorElement(int arr[]){
        int ansIndex=0;
        int count=1;

        for(int i=0;i<arr.length;i++){

            if(arr[i]==arr[ansIndex]){
                count++;
            }
            else{
                count--;
            }

            if(count==0){
                ansIndex=i;
                count=1;
            }

        }
        for(int i=0;i<arr.length;i++){

            if(arr[ansIndex]==arr[i]){
                count++;
                if(count>3){
                    return arr[ansIndex];
                }
                
            }

        }
        return 0;
    }

    public static void main(String args[]){

        Scanner sc= new Scanner(System.in);

        int n=sc.nextInt();

        int arr[]=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int a=majorElement(arr);

        System.out.println(a);


    } 
}
