
public class Binary_search {

    public static int BinarySearch(int a[],int l,int r,int key){
        int mid=l+(r-l)/2;

        while(l<=r){
            if(a[mid]==key){
               
                return mid;
            }
            if(key>a[mid]){
                l=mid+1;
                
            }
            else{
                r=mid-1;
                
            }
        }
        return -1;

    }

    public static void main(String args[]){
        int a[]={1,2,3,4,5,6};
       int n=a.length;

       System.out.println(BinarySearch(a, 0, n-1, 2));
}
}
