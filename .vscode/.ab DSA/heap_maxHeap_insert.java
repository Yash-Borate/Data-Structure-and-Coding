public class heap_maxHeap_insert{

    public static void insert(int a[],int n,int val){
        n+=1;
        a[n]=val;
        int i=n;
        while(i<1){
            int parent =i/2;
            if(a[i]>a[parent]){
               // swap(a,parent,i);
                parent=i;
            }
            else{
                return ;
            }
        }
    }

    public static void main(String args[]){

    }
}