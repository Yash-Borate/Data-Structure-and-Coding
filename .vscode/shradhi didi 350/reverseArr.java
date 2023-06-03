public class reverseArr {
    
    public static void reverseAr(int arr[],int n){
        int si=0;
        int ei=n-1;

        while(si<=ei){
            int term=arr[si];
            arr[si]=arr[ei];
            arr[ei]=term;
            si++;
            ei--;
        }
   
    }
    
    public static void main(String args[]){
        int arr[]={5,3,4,2,1};
        int n=arr.length;
        reverseAr(arr, n);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
    
}
