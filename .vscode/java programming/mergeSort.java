// // import java.util.*;

// // public class mergeSort {

// //      public static void mergesort(int arr[],int l,int mid,int r){
// //         // int n1=mid-l+1;
// //         // int n2=r-mid;
// //         // int a[]=new int [n2];
// //         // int b[]=new int [n2];
// //         // for(int i=0;i<n1;i++){
// //         //     a[i]=arr[l+i];
// //         // }
// //         // for(int i=0;i<n2;i++){
// //         //     b[i]=arr[mid+1+i];
// //         // }

// //         // int i=0,j=0,k=l;

// //         // while(i<n1 && j<n2){
// //         //     if(a[i]<b[j]){
// //         //         arr[k]=a[i];
// //         //         i++;
// //         //         k++;
// //         //     }
// //         //     else{
// //         //         arr[k]=b[j];
// //         //         j++;
// //         //         k++;
// //         //     }
// //         // }
// //         // while(i<n1){
// //         //     arr[k]=a[i];
// //         //     i++;
// //         //     k++;
// //         // }
// //         // while(j<n2){
// //         //     arr[k]=b[j];
// //         //     j++;
// //         //     k++;
// //         // }

// //         int m[]=new int ()

// //     }
    
// //       public static void merge(int arr[],int l,int r){
// //         if(l>=r){
// //             return;
// //         }

// //             int mid=l+(r-l)/2;
// //             merge(arr,l,mid);
// //             merge(arr,mid+1,r);
// //             mergesort(arr,l,mid,r);
        
// //     }

// //     public static void main(String args[]){

// //         int arr[]={5,6,4,3,1,2};
        
// //         merge(arr,0,5);

// //         for(int i=0;i<6;i++){
// //             System.out.print(arr[i]+" ");
// //         }
// //     }
// // }


// public class mergeSort{
//     public static void merge(int arr[],int si,int ei){
//         if(si>=ei){
//             return;
//         }
//         int mid=si+(ei-si)/2;
//         merge(arr,si,mid);
//         merge(arr,mid+1,ei);

//         mergeS(arr,si,mid,ei);
//     }
//     public static void mergeS(int arr[],int si,int mid, int ei){
//         int merged[]=new int[ei-si+1];
//         int idx1=si;
//         int idx2=mid+1;

//         int x=0;
//         while(idx1<=mid && idx2<=ei){
//             if(arr[idx1]<=arr[idx2]){
//                 merged[x++]=arr[idx1++];
//             }
//             else{
//                 merged[x++]=arr[idx2++];
//             }
//         }
//         while(idx1<=mid){
//             merged[x++]=arr[idx1++];

//         }
//         while(idx2<=mid){
//             merged[x++]=arr[idx2++];
//         }

//         for(int i=0,j=si;i<merged.length;i++,j++){
//             arr[j]=merged[i];
//         }

//     }
//     public static void main(String args[]){

//         int arr[]={5,3,4,2,1};
//         int n=arr.length;
//         merge(arr,0,n-1);

//         for(int i=0;i<arr.length;i++){
//             System.out.print(arr[i]+" ");
//         }

//     }
// }

public class mergeSort{
    
    public static void mergeS(int arr[],int si,int mid,int ei){
        int merged[]=new int[ei-si+1];
        int idx1=si;
        int idx2=mid+1;
        int x=0;
        while(idx1<=mid && idx2<=ei){
            if(arr[idx1]<=arr[idx2]){
                merged[x++]=arr[idx1++];
            }
            else{
                merged[x++]=arr[idx2++];
            }
        }
        while(idx1<=mid){
            merged[x++]=arr[idx1++];
        }
        
        while(idx2<=ei){
            merged[x++]=arr[idx2++];
        }

        for(int i=0,j=si;i<merged.length;i++,j++){
            arr[j]=merged[i];
        }
    }

    public static void merge(int arr[],int si,int ei){
        if(si>=ei){
            return;
        }
        int mid=si+(ei-si)/2;
        merge(arr,si,mid);
        merge(arr,mid+1,ei);

        mergeS(arr,si,mid,ei);
    }

    
    
    
    public static void main(String args[]){
        int arr[]={1,5,3,7,8,2,9,5,3,2,1,0};
        int n=arr.length;

        merge(arr,0,n-1);

        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
        }


    }
}

