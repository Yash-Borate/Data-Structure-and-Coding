
public class build_heap{

    public static void heapify(int a[],int n,int i){
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;

        if(l<n && a[largest]<a[l])
        largest=l;

        if(r<n && a[largest]<a[r])
        largest=r;

        if(largest!=i){
            int swap=a[largest];
            a[largest]=a[i];
            a[i]=swap;

            heapify(a, n, largest);
        }

    }
    public static void buildHeap(int a[],int n){
        for(int i=n/2;i>0;i--){
            heapify(a,n,i);
        }
    }

    public static void heapsort(int a[],int n){
        for(int i=n;i>0;i--){
            int swap=a[1];
            a[1]=a[i];
            a[i]=swap;

            heapify(a, i-1, 0);
        }
    }

    public static void main(String args[]){
        int a[]={1,2,3,4,5,6};

        buildHeap(a, 6);
        heapsort(a,5);

        for(int i=0;i<5;i++){
            System.out.print(a[i]+" ");
        }
    }
}