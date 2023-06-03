public class first_element_occurse_k_times {
  
    public static int firK(int a[],int n,int k){
        for(int i=0;i<n;i++){
            a[a[i]%n]+=n;
             
            }
        for(int i=0;i<n;i++){
            if(a[i]>=n*k){
                return i;
            }
        }
       
       return -1;
    }

    
  
    public static void main(String args[]){
        int a[]={1,7,4,3,4,8,7};

        int n=7;
        int k=2;

        int ae=firK(a,n,k);

        System.out.println(ae);
    }
}
