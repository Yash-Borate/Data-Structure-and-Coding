import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

// import java.lang.runtime.SwitchBootstraps;

// public class practice {
//     // public static void main(String args[]){

//     // }
//     // static void PowerSet(String s,int i,String curr){
//     //     if(i==s.lenght()){
//     //         System.out.println(curr);
//     //         return;
//     //     }
//     //     PowerSet(s, i+1, curr+s.charAt(i));
//     //     PowerSet(s, i+1, curr);
//     // }

//     // static void permute(String s ,int l,int r){
//     //     if(l==r){
//     //         System.out.println(s);
//     //         return;
//     //     }
//     //     for(int i=l;i<=r;i++){
//     //         s=swap(s,l,i);
//     //         permute(s,l+1,r);
//     //         s=swap(s,l,i);
//     //     }
//     // }

//         // static int printPow(int x,int n){
//         //     if(n==0){
//         //         return 1;
//         //     }
//         //     if(x==0){
//         //         return 0;
//         //     }
//         //     int res=printPow(x, n-1);
//         //     return x*res;
           
//         // }

//     // public static void main(String args[]){
//     //     int x=3,n=3;
//     //     System.out.println(printPow(x, n));
//     //     printPow(x,n);
//     // }

//         public static void Insertion_sort(int a[],int n){
//             for(int i=1;i<n;i++){
//                 int temp=a[i];
//                 int j=i-1;

//                 while(j>=0 && a[j]>temp){
//                     a[j+1]=a[j];
//                     j--;
//                 }

//                 a[j+1]=temp;
//             }
//         }

//         public static void SelectionSort(int a[],int n){
//             for(int i=0;i<n-1;i++){
//                 int min=i;

//                 for(int j=1;j<n;j++){
//                     if(a[min]>a[j]){
//                         min=j;
//                     }
//                 }

//                 if(min!=i){
//                     int temp=a[min];
//                     a[min]=a[i];
//                     a[i]=temp;
//                 }
//             }
//         }


//         public static int power(int a,int b){
//             if(b==0){
//                 return 1;
//             }

//             return a*power(a, b-1);
//         }

//         static int count(int a,int b){

//             if((a==1)||(b==1)){
//                 return 1;
//             }

//             return count(a,b-1)+count(a-1,b);
//         }

//         public static boolean ispali(String s,int si,int ei){
//             if(si>=ei){
//                 return true;
//             }
//             if(s.charAt(si)!=s.charAt(ei)){
//                 return false;
//             }
//             return ispali(s,si+1,ei-1);
//         }


//         static int gcd (int a,int b){
//             if(b==0){
//                 return a;
//             }

//             return gcd(b,a%b);
//         }


//         public static int Pow(int a,int b){
//             if(b==0){
//                 return 1;
//             }
//             return a*Pow(a,b-1);
//         }

//         public int Count(int a,int b){
//             if(a==1 || b==1){
//                 return 1;
//             }
//             return count(a-1,b)+count(a,b-1);
//         }

//         static void PowerSet(String a,int i,String curr){
//             if(i==a.length()){
//                 System.out.println(curr);
//                 return;
//             }
//             PowerSet(a, i+1, curr+a.charAt(i));
//             PowerSet(a, i+1, curr);
//         }

//         // static void permute(String s,int l,int r){
//         //     if(l==r){
//         //         System.out.println(s);
//         //         return;
//         //     }

//         //     for(int i=1;i<=r;i++){
//         //         s=swap(s,l,i);
//         //         permute(s, l+1, r);
//         //         s=swap(s,l,i);
//         //     }
//         // }

//         public static boolean Issafe(int a[][],int row,int col){
//             for(int i=0;i<col;i++){
//                 if(a[row][i]==1){
//                     return false;
//                 }

//             }
//             for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//                 if(a[i][j]==1){
//                     return false;
//                 }
//             }

//             for(int i=row,j=col;i<=a.length && j>=0;i++,j--){
//                 if(a[i][j]==1){
//                     return false;
//                 }
//             }

//             return true;
//         }

//         /**
//          * @param a
//          * @param col
//          * @return
//          */
//         public static boolean SolveQueen(int a[][],int col){
//             if(col>=a.length){
//                 return true;
//             }
//             for(int i=0;i<a.length;i++){
//                 if(Issafe(a,i,col)){
//                     a[i][col]=1;

//                     if(SolveQueen(a,col+1)){
//                         return true;
//                     }
//                 }

//                 a[i][col]=0;

//             }
//             return false;
//         }
        

//         public static int MajorEle(int a[],int n){
//             int ans=0;
//             int count=1;

//             for(int i=0;i<n;i++){
//                 if(a[i]==a[ans]){
//                     count++;
//                 }
//                 else{
//                     count--;
//                 }
//                 if(count==0){
//                     ans=i;
//                     count=1;
//                 }
//             }
//             return ans;
//         }


//         public static int maxSub(int a[]){
//             int MaxSum=-999;
//             int sum=0;

//             for(int i=0;i<a.length;i++){
//                 sum+=a[i];

//                 if(sum>MaxSum){
//                     MaxSum=sum;
//                 }
//                 if(sum<0){
//                     sum=0;
//                 }
//             }
//             return MaxSum;
//         }

//         public static int stockBuySell(int a[]){
//             int minSofar=a[0];
//             int maxProfit=0;

//             for(int i=0;i<a.length;i++){
//                 minSofar=Math.min(minSofar,a[i]);

//                 int profit=a[i]-minSofar;

//                 maxProfit=Math.max(maxProfit,profit);
//             }
//             return maxProfit;
//         }

//         public static int stockBuySell_2(int a[]){
//             int profit=0;
//             for(int i=1;i<a.length;i++){
//                 if(a[i]>a[i-1]){
//                     profit+=(a[i]-a[i-1]);
//                 }
//             }
//             return profit;
//         }

//         public static int rainwater(int a[]){
//             int n=a.length;

//             int left[]=new int [n];
//             int right[]=new int[n];

//             left[0]=a[0];

//             for(int i=1;i<n;i++){
//                 left[i]= Math.max(a[i],a[i-1]);
//             }
            
//             right[n-1]=a[n-1];

//             for(int i=n-2;i>=0;i++){
//                 right[i]=Math.max(a[i],a[i+1]);
//             }

//             int profit=0;

//             for(int i=0;i<n;i++){
//                 profit+=Math.min(left[i],right[i])-a[i];
//             }

//             return profit;
        
//         }

//         public static void insertion_sort(int a[]){
//             for(int i=1;i<a.length;i++){
//                 int temp=a[i];
//                 int j=i-1;
//                 while(j>=0 && a[j]>temp){
//                     a[j+1]=a[j];
//                     j--;
//                 }
//                 a[j+1]=temp;
//             }
//         }

//         public static void selection_sort(int a[]){
//             for(int i=0;i<a.length;i++){
//                 int min=i;

//                 for(int j=i+1;i<a.length;j++){
//                     if(a[j]<a[min]){
//                         min=j;
//                     }
//                 }

//                 if(min!=i){
//                     int temp=a[i];
//                     a[i]=a[min];
//                     a[min]=temp;
//                 }
//             }
//         }

//         // public void quicksort(int a[],int l,int r){
//         //     if(l<r){
//         //         int pivot=partition(a,l,r);
//         //         quicksort(a, l, pivot-1);
//         //         quicksort(a, pivot+1, r);
//         //     }
//         // }

//         // public int partition(int a[],int l,int r){
//         //     int i=l;
//         //     int j=r;

//         //     int pivot=a[i];

//         //     while(i<j){
//         //         while(pivot>=a[i])i++;
//         //         while(pivot<a[j])j--;
//         //         if(i<j){
//         //             swap(a,i,j);
//         //         }
//         //     }
//         //     swap(a,l,j);
//         //     return j;
//         // }

//             // public static int infinite_sorted(int a[],int key){
//             //     int l=0;
//             //     int r=1;
//             //     while(a[r]<key){
//             //         l=r;
//             //         r=r*2;
//             //     }
//             //     return binarysearch(a,l,r,key);
//             // }

//     public static void man(String args[]){

//     }
    
// }

// import java.util.*;

// public class practice{
//     public static void main(String args[]){
//         Set<Integer> yash=new HashSet<>();

//         yash.add(10);
//         yash.add(20);

//         yash.size();

//         System.out.println(yash.size());
//         yash.clear();

//         System.out.println(yash.isEmpty());

//         System.out.println(yash.size());

        

//     }

//     public static int countdistinct(int a[]){
//         Set<Integer> b=new HashSet<>();

//         for(int element:a ){
//             b.add(element);
//         }

//         return b.size();

//     }

//     public static int union(int a[],int b[]){

//         Set<Integer> c=new HashSet<>();
//         Set<Integer> d=new HashSet<>();

//         for(int element:a){
//             c.add(element);
//         }

//         for(int element:b){
//             c.add(element);
//         }

//         return c.size();

//     }

//     public static int interection(int a[],int b[]){
//         Set<Integer> set=new HashSet<>();
//         for(int element:a){
//             set.add(element);
//         }
//         int count=0;
//         for(int element:b){
//             if(set.contains(a)){
//                 count++;
//             }
//             set.remove(element);
//         }
//         return count;
//     }
// }

// public class practice{
//     public static void subsum(int a[],int sum){
//         int carrysum=0;
//         int start=0;
//         int end=-1;

//         HashMap<Integer,Integer>map=new HashMap<>();


//         for(int i=0;i<a.length;i++){
//             carrysum+=a[i];

//             if(carrysum-sum==0){
//                 start=0;
//                 end=i;
//                 break;
//             }

//             if(map.containsKey(carrysum-sum)){
//                 start=map.get(carrysum-sum)+1;
//                 end=i;
//                 break;
//             }

//             map.put(carrysum, i);
//         }

//         if(end==-1){
//             System.out.println("not find the sub array");
//         }
//         else{
//             System.out.println(start+" "+end);
//         }
//     }
// }

    // public class practice{

    //     public static void insert(int a[],int n,int val){
    //         n=n+1;
    //         a[n]=val;
    //         int i=n;
    //         while(i>1){
    //             int parent=i/2;
    //             if(a[i]>a[parent]){
    //                 swap(a,i,parent);
    //                 i=parent;
    //             }
    //             else{
    //                 return;
    //             }
    //         }
    //     }

    //     public static void heapify(int a[],int n,int i){
    //         int largest=i;
    //         int l=2*i+1;
    //         int r=2*i+2;

    //         if(l<n && a[l]>a[largest])
    //         largest=l;

    //         if(r<n && a[r]>a[largest])
    //         largest=r;

    //         if(largest!=i){
    //             swap(a,largest,i);
    //             heapify(a, n, largest);
    //         }

    //     }

    //     public int delete(int a[],int n){
    //         int last=a[n-1];
    //         a[0]=last;
    //         n=n-1;
    //         heapify(a,n,0);
    //         return n;

    //     }

    //     public static void main(String args[]){

    //     }
    // }

//================================================================================================================================//
    // public class practice{

    //     public static void reverse(int a[],int n){
    //         int si=0;
    //         int ei=n-1;

    //         while(si<=ei){
    //             int temp=a[si];
    //             a[si]=a[ei];
    //             a[ei]=temp;
    //             si++;
    //             ei--;
    //         }
    //     }
    //     public static void main(String args[]){
    //         int maxNo=Integer.MIN_VALUE;
    //         int minNo=Integer.MAX_VALUE;
    //         int a[]={1,5,3,4,2,6};
    //         for(int i=0;i<a.length;i++){
    //             if(a[i]>maxNo){
    //                 maxNo=a[i];
    //             }
    //             if(a[i]<minNo){
    //                 minNo=a[i];
    //             }
    //         }
    //         System.out.println(maxNo+" "+minNo);
    //     }

    //     public static int stock(int a[]){
    //         int mprofit=0;
    //         int minSofar=a[0];

    //         for(int i=0;i<a.length;i++){

    //             minSofar=Math.min(minSofar, a[i]);

    //             int profit=a[i]-minSofar;

    //             mprofit=Math.max(profit, mprofit);
    //         }
    //         return mprofit;
    //     }

    //     public static int stockll(int a[]){
    //         int profit=0;

    //         for(int i=1;i<a.length;i++){
    //             if(a[i]>a[i-1]){
    //                 profit+=(a[i]-a[i-1]);
    //             }
            
    //         }
    //         return profit;
    //     }


    //     public static int rainwater(int a[],int n){

    //         int left[]=new int [n];
    //         int right[]=new int [n];

    //         left[0]=a[0];

    //         for(int i=1;i<n;i++){
    //             left[i]=Math.max(left[i-1], a[i]);
    //         }
    //         right[n-1]=a[n-1];

    //         for(int i=n-2;i>=0;i--){
    //             right[i]=Math.max(right[i+1], a[i]);
    //         }

    //         int ans=0;

    //         for(int i=0;i<n;i++){
    //             ans+=(Math.min(left[i], right[i])-a[i]);
    //         }
    //         return ans;
    //     }
    //     public static void insertion_sort(int a[]){
    //         for(int i=1;i<a.length;i++){
    //             int temp=a[i];
    //             int j=i-1;

    //             while(j>=0 &&  a[j]>temp){
    //                 a[j+1]=a[j];
    //                 j--;
    //             }
    //             a[j+1]=temp;
    //         }
    //     }

    //     public static void subarray(int a[],int sum){
    //         int carrysum=0;
    //         int start=0;
    //         int end=-1;
    //         HashMap<Integer,Integer> map=new HashMap<>();
    //         for(int i=0;i<a.length;i++){
    //             carrysum+=a[i];

    //             if(carrysum-sum==0){
    //                 start=0;
    //                 end=i;
    //                 break;
    //             }

    //             if(map.containsKey(carrysum-sum)){
    //                 start=map.get(carrysum-sum)+1;
    //                 end=i;
    //                 break;
    //             }
    //             map.put(carrysum, i);
    //         }
    //     }

    //     public static void countKdistinct(int a[],int k){
    //         HashMap<Integer,Integer> map =new HashMap<>();

    //         for(int i=0;i<k;i++){
    //             map.put(a[i],map.getOrDefault(a[i],0)+1);
    //         }
    //         System.out.println(map.size());

    //         for(int i=k;i<a.length;i++){
    //             if(map.get(a[i-k])==1){
    //                 map.remove(a[i-k]);
    //             }
    //             else{
    //                 map.put(a[i-k],map.get(a[i-k])-1);
    //             }

    //             map.put(a[i], map.getOrDefault(a[i], 0));
    //         }
    //     }
    // }

//=============================================================================================================//

// public class practice {

//     static boolean[] sieve(int n){
//         boolean isprime[]=new boolean[n+1];

//         Array.Fill(isprime,true);
//         isprime[0]=false;
//         isprime[1]=false;
        
//         for(int i=2;i*i<=n;i++){
//             for(int j=2*i;j<=n;j+=i){
//                 isprime[j]=false;
//             }
//         }
//     }

//     public static int power(int a,int b){

//         if(b==0){
//             return 1;
//         }

//         return a*power(a,b-1);
//     }

//     public static int nBYm_ways(int a,int b){
//         if(n==1 || m==1){
//             return 0;
//         }

//         return nBYm_ways(a, b-1)+nBYm_ways(a-1, b);
//     }


//     public static boolean ispali(String s){

        
//     }

//     public static void main(String args[]){

//     }
// }



// class Node
// {
//     int data;
//     Node left;
//     Node right;

//     public static Node(int data){
//         this.data=data;
//         left=null;
//         right=null;
//     }
// }

// public class practice{
//     public static void main(String args[]){
//         Node root;
        
//     }
// }


class practice{

    public List<Integer> isValid(Node root) {
        // Stack<Character> st=new Stack<>();

        // while(!st.empty()){
        //     if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
        //         st.push(s.charAt(i));
        //         return true;
        //     }
        //     else if(s.charAt(i)==')' || s.charAt(i)=='}' || s.charAt(i)==']'){
                
        //         if(s.charAt(i)=='}'){
        //             st.top()=='{';
        //             st.pop();
        //             return true;
        //         }
                
        //         else if(s.charAt(i)==')'){
        //             st.top()=='(';
        //             st.pop();
        //             return true;
        //         }
                
        //         if(s.charAt(i)==']'){
        //             st.top()=='[';
        //             st.pop();
        //             return true;
        //         }
        //     }
        // }
        // return false;

        List<Integer> a=new ArrayList<>();

        if(root==null){
            return;
        }
        
    }

    public static void main(String args[]){

    }
}




















