
public class Xnpow {
    
    public static int XpowN(int x,int n){
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        int pown=XpowN(x,n-1);
        int lastpow=x*pown;

        return lastpow;
    }

    public static void main(String args[]){

        int a=XpowN(2,3);

        System.out.println(a);

    }
}
