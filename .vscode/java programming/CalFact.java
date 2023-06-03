public class CalFact {

    static void calculateF(int n,int fact){
        if(n<=1){
            System.out.println(fact);
            return;
        }
        fact=fact*n;
        calculateF( n-1, fact);
    }

    public static void main(String args[]){
        int fact=1;
        int n=5;

        calculateF(n,fact);
    }
}
