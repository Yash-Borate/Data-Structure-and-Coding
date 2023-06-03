import java.util.Scanner;

class fun{
    public boolean isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }

    public int gcd(int a , int b){
        if(a==b)return a;
        else if(a>b)return gcd(a-b,b);
        else return gcd(a,b-a);
    }

    public int CalPrivate(int e , int fi_N){
        for(int i=1;i<Integer.MAX_VALUE;i++){
            if((e*i)%fi_N==1)return i;
        }
        return 1;
    }

    public int Encryption(int m , int e ,int n){
        return (m^e) % n;
    }
    public int Decryption(int c,int d,int n){
        return (c^d)%n;
    }

}

public class rsa {
    public static void main(String args[]){
        fun op = new fun();
        Scanner sc = new Scanner(System.in);

        System.out.println("enter prime value for p :");
        int p = sc.nextInt();
        while(!op.isPrime(p)){
            System.out.println("please enter prime value for p :");
            p = sc.nextInt();
        }

        System.out.println("enter prime value for q;");
        int q = sc.nextInt();
        while(!op.isPrime(q)){
            System.out.println("please enter prime value for q :");
            q = sc.nextInt();
        }

        System.out.println("enter the messgae value:");
        int m = sc.nextInt();
        int n = p*q;
        int fi_N = (p-1)*(q-1);
        System.out.println("value of n: "+ n);

        int e = 2;
        while(e < fi_N){
            if( op.gcd(e, fi_N)==1 && e!=p && e!=q)break;
            
            else e++;
        }
        System.out.println("fi of n:"+fi_N);
        System.out.println("public key are {"+e+","+n+"}");

        int d = op.CalPrivate(e, fi_N);
        System.out.println("Value of d :"+d);
    
        System.out.println("private key :{"+d+","+n+"}");

        int Enc = op.Encryption(m, e, n);
        System.out.println("encryption value:"+Enc);

        int Dec = op.Decryption(Enc, d, n);
        System.out.println("decryption value is:"+Dec);


    }    
}
