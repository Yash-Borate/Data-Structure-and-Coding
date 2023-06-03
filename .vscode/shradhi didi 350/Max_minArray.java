public class Max_minArray {
    
    public static void Maxele(int arr[],int n){
        int maxNo=Integer.MIN_VALUE;
        int minNo=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(arr[i]>maxNo){
                maxNo=arr[i];
            }
            if(arr[i]<minNo){
                minNo=arr[i];
            }
            
        }
        
       
        System.out.println("maxNo : "+maxNo);
        System.out.println("minNo : "+minNo);

    }
    

    public static void main(String args[]){

        int arr[]={4,3,7,1,7,3,9};
        int n=arr.length;
        Maxele(arr,n);
    }
}
