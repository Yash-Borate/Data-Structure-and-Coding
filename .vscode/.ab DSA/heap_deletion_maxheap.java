

public class heap_deletion_maxheap {
    
    public static void heapify(int a[],int n,int i){
        int largest=i;

        int l=2*i+1;
        int r=2*i+2;

        if(l<n && a[l]>a[largest])
        largest=l;

        if(r<n && a[r]>a[largest])
        largest=r;

        if(largest!=i){
            int swap= a[i];
            a[i]=a[largest];
            a[largest]=swap;
        }
        heapify(a, n, largest);
    }
    public static int delete(int a[],int n){
        int last=a[n-1];
        a[0]=last;
        n=n-1;

        heapify(a,n,0);
        return n;
    }

    public static void main(String args[]){

    }
}
