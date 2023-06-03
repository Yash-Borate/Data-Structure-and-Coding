

public class Search_sorted_rotated_array {

    public static int Modified_Bs(int a[],int key){
        int l=0;
        int r=a.length;

        while(l<=r){
            int mid=(l+r)/2;

            if(a[mid]==key){
                return mid;
            }
            if(a[l]<a[mid]){
                if(key>=a[l] && key < a[mid] ){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(key<=a[r] && key>a[mid]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
    public static void  main(String args[]){

    }
}
