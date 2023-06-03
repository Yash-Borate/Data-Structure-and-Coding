public class merge_sort {

    public static void mergeSort(int arr[],int si,int ei){
        if(si<ei){
            int mid=si+(ei-si)/2;
            mergeSort(arr,si,mid);
            mergeSort(arr,mid+1,ei);
            merge(arr,si,mid,ei);
        }
    }

    public static void merge(int arr[],int si,int mid,int ei){
      int n1=mid-si+1;
      int n2=ei-mid;

      int l[]=new int[n1];
      int r[]=new int[n2];

      for(int i=0;i<n1;i++){
        l[i]=arr[si+i];
      }
      for(int j=0;j<n2;j++){
        r[j]=arr[mid+1+j];
      }
      int i=0;int j=0;

      int k=si;
            
      while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            arr[k] = l[i];
            i++;
        }
        else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

   
    while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }


    }
    public static void main(String args[]){
        int arr[]={5,3,7,9,5,1};

      

        mergeSort(arr,0,5);

        for(int i=0;i<6;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
