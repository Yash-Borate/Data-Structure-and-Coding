import java.util.Scanner;

public class Merge_sort{

    Scanner sc=new Scanner(System.in);
    public static void merge(int a[],int l,int mid,int r){
        int n1=mid-l+1;
        int n2=r-mid;

        int b[]=new int[n1];
        int c[]=new int [n2];

        for(int i=0;i<n1;i++){
            b[i]=a[l+i];
        }
        for(int i=0;i<n2;i++){
            c[i]=a[mid+1+i];
        }
        int i=0;
        int j=0;
        int k=l;

        while(i<n1 && j<n2){
            if(b[i]<c[j]){
                a[k++]=b[i++];
            }
            else{
                a[k++]=c[j++];
            }
        }
        while(i<n1){
            a[k++]=b[i++];
        }
        while(j<n2){
            a[k++]=c[j++];
        }

    }

   public static void mergeSort(int a[],int l,int r){
        if(l<r){
            int mid=l+(r-l)/2;
            mergeSort(a, l, mid);
            mergeSort(a, mid+1, r);
            merge(a,l,mid,r);

        }
    }

    public static void main(String args[]){

        int a[]={1,4,3,6,9,3};
        int n=a.length;

        mergeSort(a,0,n-1);

        for(int i=0;i<n;i++){
            System.out.println(a[i]+" ");
        }

    }
}