public class FindEle_rotatedArr {
   
   public static int binarysearch(int arr[],int n,int key){
    int si=0;
    int ei=n-1;

   

  while(si<=ei){
    int mid=si+(ei-si)/2;

    if(arr[mid]==key){
        return mid;
    }
    if(arr[si]<arr[mid]){
        if(key<=arr[mid] && key>=arr[si]){
            ei=mid-1;
        }
        else{
            si=mid+1;
        }
    }
    else{
        if(key>=arr[mid] && key<=ei){
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }


  }
    
  return -1;


   }

    public static void main(String args[]){

        int arr[]={6,7,8,1,2,3,4,5};
        int n=arr.length;

        int a=binarysearch(arr, n, 4);
        
        System.out.println(a);


    }
    
}
