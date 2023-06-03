public class maxSubarray {
    
    public static int maxSubarray(int arr[],int n){
        
        int maxSum=Integer.MIN_VALUE;
        int carry_sum=0;
        for(int i=0;i<n;i++){
            carry_sum+=arr[i];

            if(maxSum<carry_sum){
                maxSum=carry_sum;
            }
            if(carry_sum<0){
                carry_sum=0;
            }
        }
        return maxSum;
    }
    
    public static void main(String args[]){
        int arr[]={-1,3,2,-4,2,3,7,-1,-9,0};
        int n=arr.length;

        int a=maxSubarray(arr, n);

        System.out.println(a);


    }
    
}
