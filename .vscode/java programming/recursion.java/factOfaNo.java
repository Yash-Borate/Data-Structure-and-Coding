

public class factOfaNo {
    
    public static void Factorial(int n,int fact){
        if(n==0){
            System.out.println(fact);
            return;
        }
        fact*=n;
        Factorial(n-1, fact);
    }

    public static void main(String args[]){

        Factorial(5, 1);
    }    
}
