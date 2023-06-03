

public class Search_In_infinited_sorted_array {

    public static int binarySearch(int a[],int l,int r, int key){
        int mid=l+r/2;
        while(l<=r){
            
            if(a[mid]==key){
                return mid;
            }
            if(key<a[mid]){
                return binarySearch(a,l,mid-1,key);
            }
            else{
                return binarySearch(a, mid+1, r, key);
            }
        }
        return -1;

    }

    public static int InfiniteSearch(int a[],int key){
        int l=0;
        int r=1;

        while(a[r]<key){
            l=r;
            r=r*2;
        }

        return binarySearch(a, l, r, key);
    }
    
    public static void main(String args[]){
         
    }
}
