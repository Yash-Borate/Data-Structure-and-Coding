public class duplicates_in_array {
    public static void main(String args[]){
        int arr[]={1,5,3,4,5,2,3,7,0,8,7,8,9};
        int n=arr.length;

        for(int i=0;i<n;i++){
            arr[arr[i]%n]+=n;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=n*2){
                System.out.println(i);
            }
        }

    }
    
}
