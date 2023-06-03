
import java.util.*;

public class javaWithcpp {
    
    public static boolean chkPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    public static int factorial(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
    public static int maxARR(int arr[]){
        int max=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
    public static int minARR(int arr[]){
        int min=9999;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;
    }

    public static int linearsearch(int arr[],int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==key){
                return i;
            }

        }
        return -1;
    }
    public static int binarysearch(int arr[],int key){
        int s=0;
        int e=arr.length;

        while(s<=e){
            int mid=(s+e)/2;

            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return-1;
    }

    // public static boolean chkPythagorian(int x,int y,int z){
    //     int a,b,c;
    //     a=max(x,max(y,z));
    //     if(a==x){
    //         b=y;
    //         c=z;
    //     }
    //     else if(a==y){
    //         b=x;
    //         c=z;
    //     }
    //     else{
    //         b=x;
    //         c=y;
    //     }
    
    //     if(a*a==(b*b+c*c)){
    //         return true;
    //     }
    //     return false;
    // }

    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        // int n=sc.nextInt();
        // boolean a=true;

        // for(int i=2;i<=n/2;i++){
        //     if(n%i==0){
        //         a=false;
        //     }
        // }
        // if(a==true){
        //     System.out.println("a is prime no ");
        // }
        // else{

        //     System.out.println("a is not prime no ");
        // }

        //======================================================//
    
            // int n=sc.nextInt();
            // int reverse=0;

            // while(n>0){
            //     int last=n%10;
            //     reverse=reverse*10+last;
            //     n/=10;
            // }
            // System.out.println("reverse="+reverse);
    //=============================------------------------------=======================//

        // int n=sc.nextInt();
        
        // int a=n;

        // int sum=0;

        // while(n>0){
        //     int last=n%10;
        //     sum = sum+ (last*last*last);
        //     n/=10;
        // }

        // if(a==sum){
        //     System.out.println("armstrong no ");
        // }
        // else{
        //     System.out.println("not armstrong no ");
        // }


        //============================================================================//


        // int a=sc.nextInt();
        // int b=sc.nextInt();

        // for(int i=a;i<=b;i++){
        //     if(chkPrime(i)){
        //         System.out.println(i+" ");
        //     }
        // }

        //===============================================================================//
        
            // int n=sc.nextInt();

            // int result=factorial(n);

            // System.out.println("factorial : "+result);

        //===============--------------------=================================================//
            // int n=sc.nextInt();
            // int r=sc.nextInt();

            // int result=factorial(n)/factorial(r)*factorial(n-r);


            // System.out.println("factorial : "+result);

            //====================================================================================//

            // int n=sc.nextInt();

            // for(int i=0;i<n;i++){
            //     for(int j=0;j<=i;j++){
            //         System.out.print(factorial(i)/(factorial(j)*factorial(i-j))+" ");
            //     }
            //     System.out.println();
            // }
            //===================================================================---------------------------//

            // int x=sc.nextInt();
            // int y=sc.nextInt();
            // int z=sc.nextInt();

            // if(chkPythagorian(x,y,z)){
            //     System.out.println("it is pytahgorian triplet");
            // }
            // else{
            //     System.out.println("it is not pythagorian triplet");
            // }
        
            //===================================================================================================//

            // int arr[]={10,20,30,40};
            // System.out.println("maxNo in array : "+maxARR(arr));
            // System.out.println("min no in array :"+minARR(arr));

            //==========================================================================================//

            // int n=sc.nextInt();
            // int key=sc.nextInt();

            // int arr[]={1,2,3,4,5};

            // System.out.println(linearsearch(arr,key));
            //==================================================================================//

            // int arr[]={1,2,3,4,5};
            // int key=sc.nextInt();

            // System.out.println(binarysearch(arr,key));

            //===================================================//

        // int arr[]={4,77,4,7,2,6,3,6,0};

        // for(int i=0;i<arr.length;i++){
        //     for(int j=i+1;j<arr.length;j++){
        //         if(arr[i]>arr[j]){
        //             int swap=arr[i];
        //             arr[i]=arr[j];
        //             arr[j]=swap;
        //         }
        //     }
        // }
        // for(int i=0;i<arr.length;i++){
        //     System.out.print(arr[i]+" ");
        // }

        //=================================================================================//

        
        //========================================================================================//
            // int a=sc.nextInt();
            // int b=sc.nextInt();

            // int arr[][]=new int[a][b];

            // for(int i=0;i<a;i++){
            //     for(int j=0;j<b;j++)
            //     arr[i][j]=sc.nextInt();
            // }
            // for(int i=0;i<a;i++){
            //     for(int j=0;j<b;j++){
            //     System.out.print(arr[i]+" ");
            // }
            // System.out.println();
            // }
            //=====================================================================================//

            


    }
}
