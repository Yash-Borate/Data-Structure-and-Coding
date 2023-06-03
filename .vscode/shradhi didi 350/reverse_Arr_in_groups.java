public class reverse_Arr_in_groups{
   
   public static void ReverseARR(int arr[],int n,int k){
    int i;
    for(i=0;i+k<n;i+=k){
        int l=i;
        int r=i+k-1;
        swap(arr,l,r);

    }
    if(i+k!=n-1){
        swap(arr,i,n-1);
    }
   }

   public static void swap(int arr[],int l,int r){
    while(l<r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
   }
   
    public static void main(String args[]){
        int arr[]={1,2,3,4,5,6,7};
        int n=7;
        int k=3;
        ReverseARR(arr, n, k);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}