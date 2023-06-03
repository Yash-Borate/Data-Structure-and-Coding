

public class quick_sort {
    

    public static int partition(int a[],int l, int r){
        int i=l;
        int j=r;
        int pivot=a[i];

        while(i<j){
            while(pivot>=a[i]) i++;
            while(pivot<a[j]) j--;

            if(i<j){
                swap(a,i,j);
            }
        }
        swap(a,l,j);
        return j;
    }

    public static void quicksort(int a[],int l,int r){
        if(l<r){
            int pivot=partition(a, l, r);

            quicksort(a, l, pivot-1);
            quicksort(a, pivot+1, r);
        }
    }

    public static void swap(int a[],int i,int j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }

    public static void main(String args[]){

    }
}
