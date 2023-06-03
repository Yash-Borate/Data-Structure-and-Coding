
public class selection_sort {

    public static void Sele_sort(int a[],int n){

        for(int i=0;i<n-1;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min]){
                    min=j;
                }
            }
            if(min!=i){
                int temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }

    }
    public static void main(String args[]){

        int a[]={5,4,6,3,9,1};
        int n=a.length;

        Sele_sort(a, n);

        for(int i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
    }    
}
